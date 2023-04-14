class ActionOpenSPItemsCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(SPUATimeSpent.SPUNLOCK);
	}
};
class ActionOpenSPItems: ActionContinuousBase
{
	void ActionOpenSPItems()
	{
		m_CallbackClass = ActionOpenSPItemsCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_INTERACT;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_HIGH;
		m_Text = "#open";
	}

	override typename GetInputType()
	{
		return ContinuousInteractActionInput;
	}
	
	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTCursor(UAMaxDistances.DEFAULT);
	}
	

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		Object target_object = target.GetObject();
		if ( target_object.IsItemBase() )
		{
			SP_ItemBase_Static ntarget = SP_ItemBase_Static.Cast( target_object );
			if( ntarget )
			{
				if( !ntarget.IsLocked() && !ntarget.IsOpen() )
				{
					return true;
				}
			}
		}
		return false;
	}

	override void OnFinishProgressServer( ActionData action_data )
	{
		Object target_object = action_data.m_Target.GetObject();
		SP_ItemBase_Static ntarget = SP_ItemBase_Static.Cast( target_object );
		if( ntarget )
		{
			ntarget.Open();
		}
	}
	
	override void OnEndServer( ActionData action_data )
	{
		Object target_object = action_data.m_Target.GetObject();
		SP_ItemBase_Static ntarget = SP_ItemBase_Static.Cast( target_object );
		if( ntarget )
		{
			ntarget.SoundSynchRemoteReset();
		}
	}
}