class SP_ItemBase_Static : ItemBase
{
	private bool m_IsLocked = false;
	private ref Timer m_IBOpener;

    protected vector m_HalfExtents;
	protected ref OpenableBehaviour m_Openable;

    void SP_ItemBase_Static()
    {
        m_HalfExtents = vector.Zero;
		m_IBOpener = new Timer();

		m_Openable = new OpenableBehaviour(false);
		RegisterNetSyncVariableBool("m_Openable.m_IsOpened");
		RegisterNetSyncVariableBool("m_IsSoundSynchRemote");

		ProcessInvulnerabilityCheck(GetInvulnerabilityTypeString());
    }

	override void OnStoreSave( ParamsWriteContext ctx )
	{   
		super.OnStoreSave( ctx );
		
		ctx.Write( m_Openable.IsOpened() );
	}
	
	override bool OnStoreLoad( ParamsReadContext ctx, int version )
	{
		if ( !super.OnStoreLoad( ctx, version ) )
			return false;
		
		bool opened;
		if ( version >= 110 && !ctx.Read( opened ) )
		{
			return false;
		}
		
		if ( opened )
		{
			OpenLoad();
		}
		else
		{
			CloseLoad();
		}
		
		return true;
	}

	override void Open()
	{
		m_Openable.Open();
		SoundSynchRemote();
		SetTakeable(false);

		//SetSynchDirty(); //! called also in SoundSynchRemote - TODO
	}
	
	void OpenLoad()
	{
		m_Openable.Open();
		SetSynchDirty();
		SetTakeable(false);
	
	}
	
	override void Close()
	{
		m_Openable.Close();
		SoundSynchRemote();
		SetTakeable(true);

		//SetSynchDirty(); //! called also in SoundSynchRemote - TODO

	}
	
	void CloseLoad()
	{
		m_Openable.Close();
		SetSynchDirty();
		SetTakeable(true);
		
	}

	override bool IsOpen()
	{
		return m_Openable.IsOpened();
	}

    override bool CanPutIntoHands(EntityAI parent)
	{
		if (!super.CanPutIntoHands(parent))
		{		
			return false;
		}
				
		return false;
	}

	void SoundBarrelOpenPlay()
	{
		EffectSound sound =	SEffectManager.PlaySound( "barrel_open_SoundSet", GetPosition() );
		sound.SetAutodestroy( true );
	}
	
	void SoundBarrelClosePlay()
	{
		EffectSound sound =	SEffectManager.PlaySound( "barrel_close_SoundSet", GetPosition() );
		sound.SetAutodestroy( true );
	}

	bool IsLocked()
	{
		return m_IsLocked;
	}

	void Lock(float actiontime)
	{
		m_IsLocked = true;
		m_IBOpener.Run(actiontime, this, "Unlock", NULL,false);
	}
	
	void Unlock()
	{
		m_IsLocked = false;
		Open();
	}

	override bool CanPutInCargo(EntityAI parent)
	{
		if (!super.CanPutInCargo(parent))
		{			
			return false;
		}
				
		return false;
	}

    override bool CanReceiveAttachment(EntityAI attachment, int slotId)
	{
		if (GetHealthLevel() == GameConstants.STATE_RUINED)
			return false;

		if (GetInventory().GetCargo().GetItemCount() == 0 && GetInventory().AttachmentCount() == 0)
		return true;
		
		return super.CanReceiveAttachment(attachment, slotId);
	}
	
	override bool CanLoadAttachment(EntityAI attachment)
	{
		if (GetHealthLevel() == GameConstants.STATE_RUINED)
			return false;

		if (GetInventory().GetCargo().GetItemCount() == 0 && GetInventory().AttachmentCount() == 0)
		return true;
		
		return super.CanLoadAttachment(attachment);
	}

	override bool CanReceiveItemIntoCargo(EntityAI item)
	{
		if (GetHealthLevel() == GameConstants.STATE_RUINED)
			return false;

		if (GetInventory().GetCargo().GetItemCount() == 0 && GetInventory().AttachmentCount() == 0)
		return true;

		return super.CanReceiveItemIntoCargo(item);
	}
	
	override bool CanLoadItemIntoCargo(EntityAI item)
	{
		if (!super.CanLoadItemIntoCargo(item))
			return false;

		if (GetHealthLevel() == GameConstants.STATE_RUINED)
			return false;

		return true;
	}

	override bool IsInventoryVisible()
	{
	return m_Openable.IsOpened();
	}
	
	override void EEHealthLevelChanged(int oldLevel, int newLevel, string zone)
	{
		super.EEHealthLevelChanged(oldLevel,newLevel,zone);
		
		if (newLevel == GameConstants.STATE_RUINED && !GetHierarchyParent())
			MiscGameplayFunctions.DropAllItemsInInventoryInBounds(this, m_HalfExtents);
	}

	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionAttachOnSelection);
        AddAction(ActionOpenSPItems);
		AddAction(ActionCloseSPItems);
	}
}