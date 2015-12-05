// ---------------------------------------------------------------------
/*
This file is auto-generated by behaviac designer, so please don't modify it by yourself!


Usage: include this file in a certain cpp accordingly, only include it once and don't include it in other cpps again.
(RELATIVE_PATH is the path where it is generated):
and you also need to include your agent types' headers before it:

      #include "YourAgentTypes.h"

      #include "RELATIVE_PATH/generated_behaviors.h"
*/

// Export file: exported/behaviac_generated/behaviors/generated_behaviors.h
// ---------------------------------------------------------------------

// You should set the include path of the behaviac lib in your project
// for using the following header files :
#pragma once
#include "behaviac/behaviortree/behaviortree.h"
#include "behaviac/agent/agent.h"
#include "behaviac/agent/taskmethod.h"

#include "behaviac/behaviortree/nodes/actions/action.h"
#include "behaviac/behaviortree/nodes/actions/assignment.h"
#include "behaviac/behaviortree/nodes/actions/compute.h"
#include "behaviac/behaviortree/nodes/actions/noop.h"
#include "behaviac/behaviortree/nodes/actions/wait.h"
#include "behaviac/behaviortree/nodes/actions/waitforsignal.h"
#include "behaviac/behaviortree/nodes/actions/waitframes.h"
#include "behaviac/behaviortree/nodes/composites/compositestochastic.h"
#include "behaviac/behaviortree/nodes/composites/ifelse.h"
#include "behaviac/behaviortree/nodes/composites/parallel.h"
#include "behaviac/behaviortree/nodes/composites/query.h"
#include "behaviac/behaviortree/nodes/composites/referencebehavior.h"
#include "behaviac/behaviortree/nodes/composites/selector.h"
#include "behaviac/behaviortree/nodes/composites/selectorloop.h"
#include "behaviac/behaviortree/nodes/composites/selectorprobability.h"
#include "behaviac/behaviortree/nodes/composites/selectorstochastic.h"
#include "behaviac/behaviortree/nodes/composites/sequence.h"
#include "behaviac/behaviortree/nodes/composites/sequencestochastic.h"
#include "behaviac/behaviortree/nodes/composites/withprecondition.h"
#include "behaviac/behaviortree/nodes/conditions/and.h"
#include "behaviac/behaviortree/nodes/conditions/conditionbase.h"
#include "behaviac/behaviortree/nodes/conditions/condition.h"
#include "behaviac/behaviortree/nodes/conditions/false.h"
#include "behaviac/behaviortree/nodes/conditions/or.h"
#include "behaviac/behaviortree/nodes/conditions/true.h"
#include "behaviac/behaviortree/nodes/decorators/decoratoralwaysfailure.h"
#include "behaviac/behaviortree/nodes/decorators/decoratoralwaysrunning.h"
#include "behaviac/behaviortree/nodes/decorators/decoratoralwayssuccess.h"
#include "behaviac/behaviortree/nodes/decorators/decoratorcount.h"
#include "behaviac/behaviortree/nodes/decorators/decoratorcountlimit.h"
#include "behaviac/behaviortree/nodes/decorators/decoratorfailureuntil.h"
#include "behaviac/behaviortree/nodes/decorators/decoratorframes.h"
#include "behaviac/behaviortree/nodes/decorators/decoratoriterator.h"
#include "behaviac/behaviortree/nodes/decorators/decoratorlog.h"
#include "behaviac/behaviortree/nodes/decorators/decoratorloop.h"
#include "behaviac/behaviortree/nodes/decorators/decoratorloopuntil.h"
#include "behaviac/behaviortree/nodes/decorators/decoratornot.h"
#include "behaviac/behaviortree/nodes/decorators/decoratorrepeat.h"
#include "behaviac/behaviortree/nodes/decorators/decoratorsuccessuntil.h"
#include "behaviac/behaviortree/nodes/decorators/decoratortime.h"
#include "behaviac/behaviortree/nodes/decorators/decoratorweight.h"
#include "behaviac/behaviortree/attachments/event.h"
#include "behaviac/behaviortree/attachments/attachaction.h"
#include "behaviac/behaviortree/attachments/precondition.h"
#include "behaviac/behaviortree/attachments/effector.h"
#include "behaviac/htn/task.h"
#include "behaviac/fsm/fsm.h"
#include "behaviac/fsm/state.h"
#include "behaviac/fsm/startcondition.h"
#include "behaviac/fsm/transitioncondition.h"
#include "behaviac/fsm/waitstate.h"
#include "behaviac/fsm/waitframesstate.h"
#include "behaviac/fsm/alwaystransition.h"
#include "behaviac/fsm/waittransition.h"

// You should set the agent header files of your game
// when exporting cpp files in the behaviac editor:

using namespace behaviac;

// Agent property and method handlers

namespace behaviac
{
	struct METHOD_TYPE_behaviac_Agent_VectorAdd { };
	template<> BEHAVIAC_FORCEINLINE void Agent::_Execute_Method_<METHOD_TYPE_behaviac_Agent_VectorAdd>(IList& p0, System::Object& p1)
	{
		this->behaviac::Agent::VectorAdd(p0, p1);
	}

	struct METHOD_TYPE_behaviac_Agent_VectorClear { };
	template<> BEHAVIAC_FORCEINLINE void Agent::_Execute_Method_<METHOD_TYPE_behaviac_Agent_VectorClear>(IList& p0)
	{
		this->behaviac::Agent::VectorClear(p0);
	}

	struct METHOD_TYPE_behaviac_Agent_VectorContains { };
	template<> BEHAVIAC_FORCEINLINE bool Agent::_Execute_Method_<METHOD_TYPE_behaviac_Agent_VectorContains>(IList& p0, System::Object& p1)
	{
		return this->behaviac::Agent::VectorContains(p0, p1);
	}

	struct METHOD_TYPE_behaviac_Agent_VectorLength { };
	template<> BEHAVIAC_FORCEINLINE int Agent::_Execute_Method_<METHOD_TYPE_behaviac_Agent_VectorLength>(IList& p0)
	{
		return this->behaviac::Agent::VectorLength(p0);
	}

	struct METHOD_TYPE_behaviac_Agent_VectorRemove { };
	template<> BEHAVIAC_FORCEINLINE void Agent::_Execute_Method_<METHOD_TYPE_behaviac_Agent_VectorRemove>(IList& p0, System::Object& p1)
	{
		this->behaviac::Agent::VectorRemove(p0, p1);
	}

}

struct PROPERTY_TYPE_CBTPlayer_m_iBaseSpeed { };
template<> BEHAVIAC_FORCEINLINE unsigned int& CBTPlayer::_Get_Property_<PROPERTY_TYPE_CBTPlayer_m_iBaseSpeed>()
{
	unsigned char* pc = (unsigned char*)this;
	pc += (int)BEHAVIAC_OFFSETOF(CBTPlayer, CBTPlayer::m_iBaseSpeed);
	return *(reinterpret_cast<unsigned int*>(pc));
}

struct METHOD_TYPE_CBTPlayer_Action1 { };
template<> BEHAVIAC_FORCEINLINE behaviac::EBTStatus CBTPlayer::_Execute_Method_<METHOD_TYPE_CBTPlayer_Action1>()
{
	return this->CBTPlayer::Action1();
}

struct METHOD_TYPE_CBTPlayer_Action3 { };
template<> BEHAVIAC_FORCEINLINE behaviac::EBTStatus CBTPlayer::_Execute_Method_<METHOD_TYPE_CBTPlayer_Action3>()
{
	return this->CBTPlayer::Action3();
}

struct METHOD_TYPE_CBTPlayer_Condition { };
template<> BEHAVIAC_FORCEINLINE bool CBTPlayer::_Execute_Method_<METHOD_TYPE_CBTPlayer_Condition>()
{
	return this->CBTPlayer::Condition();
}

struct METHOD_TYPE_CBTPlayer_MoveAhead { };
template<> BEHAVIAC_FORCEINLINE void CBTPlayer::_Execute_Method_<METHOD_TYPE_CBTPlayer_MoveAhead>(int p0)
{
	this->CBTPlayer::MoveAhead(p0);
}

struct METHOD_TYPE_CBTPlayer_MoveBack { };
template<> BEHAVIAC_FORCEINLINE void CBTPlayer::_Execute_Method_<METHOD_TYPE_CBTPlayer_MoveBack>(int p0)
{
	this->CBTPlayer::MoveBack(p0);
}

namespace behaviac
{
	// Source file: demo_running

	class DecoratorLoop_bt_demo_running_node0 : public DecoratorLoop
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorLoop_bt_demo_running_node0, DecoratorLoop);
		DecoratorLoop_bt_demo_running_node0()
		{
			m_bDecorateWhenChildEnds = true;
		}
	protected:
		virtual int GetCount(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return 3;
		}
	};

	class Condition_bt_demo_running_node2 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_demo_running_node2, Condition);
		Condition_bt_demo_running_node2()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			bool opl = ((CBTPlayer*)pAgent)->_Execute_Method_<METHOD_TYPE_CBTPlayer_Condition, bool >();
			bool opr = true;
			bool op = Details::Equal(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

	class Action_bt_demo_running_node3 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_demo_running_node3, Action);
		Action_bt_demo_running_node3()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			behaviac::EBTStatus result = ((CBTPlayer*)pAgent)->_Execute_Method_<METHOD_TYPE_CBTPlayer_Action1, behaviac::EBTStatus >();
			return result;
		}
	};

	class Action_bt_demo_running_node4 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_demo_running_node4, Action);
		Action_bt_demo_running_node4()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			behaviac::EBTStatus result = ((CBTPlayer*)pAgent)->_Execute_Method_<METHOD_TYPE_CBTPlayer_Action3, behaviac::EBTStatus >();
			return result;
		}
	};

	class bt_demo_running
	{
	public:
		static bool Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("demo_running");
			pBT->SetIsFSM(false);
#if !defined(BEHAVIAC_RELEASE)
			pBT->SetAgentType("CBTPlayer");
#endif
			// children
			{
				DecoratorLoop_bt_demo_running_node0* node0 = BEHAVIAC_NEW DecoratorLoop_bt_demo_running_node0;
				node0->SetClassNameString("DecoratorLoop");
				node0->SetId(0);
#if !defined(BEHAVIAC_RELEASE)
				node0->SetAgentType("CBTPlayer");
#endif
				pBT->AddChild(node0);
				{
					Sequence* node1 = BEHAVIAC_NEW Sequence;
					node1->SetClassNameString("Sequence");
					node1->SetId(1);
#if !defined(BEHAVIAC_RELEASE)
					node1->SetAgentType("CBTPlayer");
#endif
					node0->AddChild(node1);
					{
						Condition_bt_demo_running_node2* node2 = BEHAVIAC_NEW Condition_bt_demo_running_node2;
						node2->SetClassNameString("Condition");
						node2->SetId(2);
#if !defined(BEHAVIAC_RELEASE)
						node2->SetAgentType("CBTPlayer");
#endif
						node1->AddChild(node2);
						node1->SetHasEvents(node1->HasEvents() | node2->HasEvents());
					}
					{
						Action_bt_demo_running_node3* node3 = BEHAVIAC_NEW Action_bt_demo_running_node3;
						node3->SetClassNameString("Action");
						node3->SetId(3);
#if !defined(BEHAVIAC_RELEASE)
						node3->SetAgentType("CBTPlayer");
#endif
						node1->AddChild(node3);
						node1->SetHasEvents(node1->HasEvents() | node3->HasEvents());
					}
					{
						Action_bt_demo_running_node4* node4 = BEHAVIAC_NEW Action_bt_demo_running_node4;
						node4->SetClassNameString("Action");
						node4->SetId(4);
#if !defined(BEHAVIAC_RELEASE)
						node4->SetAgentType("CBTPlayer");
#endif
						node1->AddChild(node4);
						node1->SetHasEvents(node1->HasEvents() | node4->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}
	};

	// Source file: monster

	class DecoratorLoopUntil_bt_monster_node20 : public DecoratorLoopUntil
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorLoopUntil_bt_monster_node20, DecoratorLoopUntil);
		DecoratorLoopUntil_bt_monster_node20()
		{
			m_bDecorateWhenChildEnds = true;
			m_until = true;
		}
	protected:
		virtual int GetCount(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return -1;
		}
	};

	class Condition_bt_monster_node7 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_monster_node7, Condition);
		Condition_bt_monster_node7()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("CurStep") == 2715603344u);
			int& opl = (int&)pAgent->GetVariable<int >(2715603344u);
			int opr = 100;
			bool op = Details::Greater(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

	class SelectorProbability_bt_monster_node12 : public SelectorProbability
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(SelectorProbability_bt_monster_node12, SelectorProbability);
		SelectorProbability_bt_monster_node12()
		{
		}
	public:
		void Initialize(const char* method)
		{
			this->m_method = Action::LoadMethod(method);
		}
	};

	class bt_monster
	{
	public:
		static bool Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("monster");
			pBT->SetIsFSM(false);
#if !defined(BEHAVIAC_RELEASE)
			pBT->SetAgentType("CBTPlayer");
#endif
			// pars
			pBT->AddPar("CBTPlayer", "int", "CurStep", "0");
			// children
			{
				DecoratorLoopUntil_bt_monster_node20* node20 = BEHAVIAC_NEW DecoratorLoopUntil_bt_monster_node20;
				node20->SetClassNameString("DecoratorLoopUntil");
				node20->SetId(20);
#if !defined(BEHAVIAC_RELEASE)
				node20->SetAgentType("CBTPlayer");
#endif
				pBT->AddChild(node20);
				{
					Sequence* node0 = BEHAVIAC_NEW Sequence;
					node0->SetClassNameString("Sequence");
					node0->SetId(0);
#if !defined(BEHAVIAC_RELEASE)
					node0->SetAgentType("CBTPlayer");
#endif
					node20->AddChild(node0);
					{
						Condition_bt_monster_node7* node7 = BEHAVIAC_NEW Condition_bt_monster_node7;
						node7->SetClassNameString("Condition");
						node7->SetId(7);
#if !defined(BEHAVIAC_RELEASE)
						node7->SetAgentType("CBTPlayer");
#endif
						node0->SetCustomCondition(node7);
						node0->SetHasEvents(node0->HasEvents() | node7->HasEvents());
					}
					{
						SelectorProbability_bt_monster_node12* node12 = BEHAVIAC_NEW SelectorProbability_bt_monster_node12;
						node12->SetClassNameString("SelectorProbability");
						node12->SetId(12);
#if !defined(BEHAVIAC_RELEASE)
						node12->SetAgentType("CBTPlayer");
#endif
						node0->AddChild(node12);
						node0->SetHasEvents(node0->HasEvents() | node12->HasEvents());
					}
					node20->SetHasEvents(node20->HasEvents() | node0->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node20->HasEvents());
			}
			return true;
		}
	};

	// Source file: player

	class SelectorProbability_bt_player_node12 : public SelectorProbability
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(SelectorProbability_bt_player_node12, SelectorProbability);
		SelectorProbability_bt_player_node12()
		{
		}
	public:
		void Initialize(const char* method)
		{
			this->m_method = Action::LoadMethod(method);
		}
	};

	class DecoratorWeight_bt_player_node13 : public DecoratorWeight
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorWeight_bt_player_node13, DecoratorWeight);
		DecoratorWeight_bt_player_node13()
		{
			m_bDecorateWhenChildEnds = false;
		}
	protected:
		virtual int GetWeight(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return 60;
		}
	};

	class Precondition_bt_player_attach3 : public Precondition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Precondition_bt_player_attach3, Precondition);
		Precondition_bt_player_attach3()
		{
			opl_p0 = 0;
			this->SetPhase(Precondition::E_ENTER);
			this->SetIsAnd(true);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			((CBTPlayer*)pAgent)->_Execute_Method_<METHOD_TYPE_CBTPlayer_MoveAhead, void, int >(opl_p0);
			return result;
		}
		int opl_p0;
	};

	class Action_bt_player_node6 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_player_node6, Action);
		Action_bt_player_node6()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((CBTPlayer*)pAgent)->_Execute_Method_<METHOD_TYPE_CBTPlayer_MoveAhead, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

	class Wait_bt_player_node8 : public Wait
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Wait_bt_player_node8, Wait);
		Wait_bt_player_node8()
		{
			m_ignoreTimeScale = false;
		}
	protected:
		virtual float GetTime(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return 10;
		}
	};

	class DecoratorWeight_bt_player_node14 : public DecoratorWeight
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorWeight_bt_player_node14, DecoratorWeight);
		DecoratorWeight_bt_player_node14()
		{
			m_bDecorateWhenChildEnds = false;
		}
	protected:
		virtual int GetWeight(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return 10;
		}
	};

	class Action_bt_player_node10 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_player_node10, Action);
		Action_bt_player_node10()
		{
			method_p0 = 1;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((CBTPlayer*)pAgent)->_Execute_Method_<METHOD_TYPE_CBTPlayer_MoveAhead, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

	class DecoratorWeight_bt_player_node15 : public DecoratorWeight
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorWeight_bt_player_node15, DecoratorWeight);
		DecoratorWeight_bt_player_node15()
		{
			m_bDecorateWhenChildEnds = false;
		}
	protected:
		virtual int GetWeight(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return 30;
		}
	};

	class Action_bt_player_node11 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_player_node11, Action);
		Action_bt_player_node11()
		{
			method_p0 = 3;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((CBTPlayer*)pAgent)->_Execute_Method_<METHOD_TYPE_CBTPlayer_MoveAhead, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

	class DecoratorWeight_bt_player_node16 : public DecoratorWeight
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorWeight_bt_player_node16, DecoratorWeight);
		DecoratorWeight_bt_player_node16()
		{
			m_bDecorateWhenChildEnds = false;
		}
	protected:
		virtual int GetWeight(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return 10;
		}
	};

	class Action_bt_player_node18 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_player_node18, Action);
		Action_bt_player_node18()
		{
			method_p0 = 2;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((CBTPlayer*)pAgent)->_Execute_Method_<METHOD_TYPE_CBTPlayer_MoveBack, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

	class bt_player
	{
	public:
		static bool Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("player");
			pBT->SetIsFSM(false);
#if !defined(BEHAVIAC_RELEASE)
			pBT->SetAgentType("CBTPlayer");
#endif
			// pars
			pBT->AddPar("CBTPlayer", "int", "CurStep", "0");
			// children
			{
				Sequence* node0 = BEHAVIAC_NEW Sequence;
				node0->SetClassNameString("Sequence");
				node0->SetId(0);
#if !defined(BEHAVIAC_RELEASE)
				node0->SetAgentType("CBTPlayer");
#endif
				pBT->AddChild(node0);
				{
					SelectorProbability_bt_player_node12* node12 = BEHAVIAC_NEW SelectorProbability_bt_player_node12;
					node12->SetClassNameString("SelectorProbability");
					node12->SetId(12);
#if !defined(BEHAVIAC_RELEASE)
					node12->SetAgentType("CBTPlayer");
#endif
					node0->AddChild(node12);
					{
						DecoratorWeight_bt_player_node13* node13 = BEHAVIAC_NEW DecoratorWeight_bt_player_node13;
						node13->SetClassNameString("DecoratorWeight");
						node13->SetId(13);
#if !defined(BEHAVIAC_RELEASE)
						node13->SetAgentType("CBTPlayer");
#endif
						node12->AddChild(node13);
						{
							Sequence* node1 = BEHAVIAC_NEW Sequence;
							node1->SetClassNameString("Sequence");
							node1->SetId(1);
#if !defined(BEHAVIAC_RELEASE)
							node1->SetAgentType("CBTPlayer");
#endif
							// attachments
							{
								Precondition_bt_player_attach3* attach3 = BEHAVIAC_NEW Precondition_bt_player_attach3;
								attach3->SetClassNameString("Precondition");
								attach3->SetId(3);
#if !defined(BEHAVIAC_RELEASE)
								attach3->SetAgentType("CBTPlayer");
#endif
								node1->Attach(attach3, true, false, false);
								node1->SetHasEvents(node1->HasEvents() | (Event::DynamicCast(attach3) != 0));
							}
							node13->AddChild(node1);
							{
								Selector* node4 = BEHAVIAC_NEW Selector;
								node4->SetClassNameString("Selector");
								node4->SetId(4);
#if !defined(BEHAVIAC_RELEASE)
								node4->SetAgentType("CBTPlayer");
#endif
								node1->AddChild(node4);
								{
									Action_bt_player_node6* node6 = BEHAVIAC_NEW Action_bt_player_node6;
									node6->SetClassNameString("Action");
									node6->SetId(6);
#if !defined(BEHAVIAC_RELEASE)
									node6->SetAgentType("CBTPlayer");
#endif
									node4->AddChild(node6);
									node4->SetHasEvents(node4->HasEvents() | node6->HasEvents());
								}
								{
									Sequence* node5 = BEHAVIAC_NEW Sequence;
									node5->SetClassNameString("Sequence");
									node5->SetId(5);
#if !defined(BEHAVIAC_RELEASE)
									node5->SetAgentType("CBTPlayer");
#endif
									node4->AddChild(node5);
									{
										Wait_bt_player_node8* node8 = BEHAVIAC_NEW Wait_bt_player_node8;
										node8->SetClassNameString("Wait");
										node8->SetId(8);
#if !defined(BEHAVIAC_RELEASE)
										node8->SetAgentType("CBTPlayer");
#endif
										node5->AddChild(node8);
										node5->SetHasEvents(node5->HasEvents() | node8->HasEvents());
									}
									node4->SetHasEvents(node4->HasEvents() | node5->HasEvents());
								}
								node1->SetHasEvents(node1->HasEvents() | node4->HasEvents());
							}
							node13->SetHasEvents(node13->HasEvents() | node1->HasEvents());
						}
						node12->SetHasEvents(node12->HasEvents() | node13->HasEvents());
					}
					{
						DecoratorWeight_bt_player_node14* node14 = BEHAVIAC_NEW DecoratorWeight_bt_player_node14;
						node14->SetClassNameString("DecoratorWeight");
						node14->SetId(14);
#if !defined(BEHAVIAC_RELEASE)
						node14->SetAgentType("CBTPlayer");
#endif
						node12->AddChild(node14);
						{
							Sequence* node19 = BEHAVIAC_NEW Sequence;
							node19->SetClassNameString("Sequence");
							node19->SetId(19);
#if !defined(BEHAVIAC_RELEASE)
							node19->SetAgentType("CBTPlayer");
#endif
							node14->AddChild(node19);
							{
								Action_bt_player_node10* node10 = BEHAVIAC_NEW Action_bt_player_node10;
								node10->SetClassNameString("Action");
								node10->SetId(10);
#if !defined(BEHAVIAC_RELEASE)
								node10->SetAgentType("CBTPlayer");
#endif
								node19->AddChild(node10);
								node19->SetHasEvents(node19->HasEvents() | node10->HasEvents());
							}
							node14->SetHasEvents(node14->HasEvents() | node19->HasEvents());
						}
						node12->SetHasEvents(node12->HasEvents() | node14->HasEvents());
					}
					{
						DecoratorWeight_bt_player_node15* node15 = BEHAVIAC_NEW DecoratorWeight_bt_player_node15;
						node15->SetClassNameString("DecoratorWeight");
						node15->SetId(15);
#if !defined(BEHAVIAC_RELEASE)
						node15->SetAgentType("CBTPlayer");
#endif
						node12->AddChild(node15);
						{
							Sequence* node7 = BEHAVIAC_NEW Sequence;
							node7->SetClassNameString("Sequence");
							node7->SetId(7);
#if !defined(BEHAVIAC_RELEASE)
							node7->SetAgentType("CBTPlayer");
#endif
							node15->AddChild(node7);
							{
								Action_bt_player_node11* node11 = BEHAVIAC_NEW Action_bt_player_node11;
								node11->SetClassNameString("Action");
								node11->SetId(11);
#if !defined(BEHAVIAC_RELEASE)
								node11->SetAgentType("CBTPlayer");
#endif
								node7->AddChild(node11);
								node7->SetHasEvents(node7->HasEvents() | node11->HasEvents());
							}
							node15->SetHasEvents(node15->HasEvents() | node7->HasEvents());
						}
						node12->SetHasEvents(node12->HasEvents() | node15->HasEvents());
					}
					{
						DecoratorWeight_bt_player_node16* node16 = BEHAVIAC_NEW DecoratorWeight_bt_player_node16;
						node16->SetClassNameString("DecoratorWeight");
						node16->SetId(16);
#if !defined(BEHAVIAC_RELEASE)
						node16->SetAgentType("CBTPlayer");
#endif
						node12->AddChild(node16);
						{
							Sequence* node17 = BEHAVIAC_NEW Sequence;
							node17->SetClassNameString("Sequence");
							node17->SetId(17);
#if !defined(BEHAVIAC_RELEASE)
							node17->SetAgentType("CBTPlayer");
#endif
							node16->AddChild(node17);
							{
								Action_bt_player_node18* node18 = BEHAVIAC_NEW Action_bt_player_node18;
								node18->SetClassNameString("Action");
								node18->SetId(18);
#if !defined(BEHAVIAC_RELEASE)
								node18->SetAgentType("CBTPlayer");
#endif
								node17->AddChild(node18);
								node17->SetHasEvents(node17->HasEvents() | node18->HasEvents());
							}
							node16->SetHasEvents(node16->HasEvents() | node17->HasEvents());
						}
						node12->SetHasEvents(node12->HasEvents() | node16->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node12->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}
	};

	class CppGenerationManager : GenerationManager
	{
	public:
		CppGenerationManager()
		{
			SetInstance(this);
		}

		virtual void RegisterBehaviorsImplement()
		{
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("demo_running", bt_demo_running::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("monster", bt_monster::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("player", bt_player::Create);
		}
	};

	CppGenerationManager _cppGenerationManager_;
}
