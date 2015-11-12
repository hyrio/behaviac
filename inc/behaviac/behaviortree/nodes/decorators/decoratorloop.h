/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Tencent is pleased to support the open source community by making behaviac available.
//
// Copyright (C) 2015 THL A29 Limited, a Tencent company. All rights reserved.
//
// Licensed under the BSD 3-Clause License (the "License"); you may not use this file except in compliance with
// the License. You may obtain a copy of the License at http://opensource.org/licenses/BSD-3-Clause
//
// Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and limitations under the License.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef BEHAVIAC_BEHAVIORTREE_DECORATORLOOP_H_
#define BEHAVIAC_BEHAVIORTREE_DECORATORLOOP_H_

#include "behaviac/base/base.h"
#include "behaviac/behaviortree/behaviortree.h"
#include "behaviac/behaviortree/behaviortree_task.h"
#include "behaviac/behaviortree/nodes/decorators/decoratorcount.h"

namespace behaviac
{
	/*! \addtogroup treeNodes Behavior Tree
	* @{
	* \addtogroup DecoratorLoop
	* @{ */

	/**
	DecoratorLoop can be set a integer Count value. It increases inner count value when it updates.
	It always return Running until inner count less equal than integer Count value. Or returns the child
	value. It always return Running when the count limit equal to -1.
	*/
    class BEHAVIAC_API DecoratorLoop : public DecoratorCount
    {
    public:
        BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorLoop, DecoratorCount);

        DecoratorLoop();
        virtual ~DecoratorLoop();
        virtual void load(int version, const char* agentType, const properties_t& properties);
	protected:
		virtual bool IsValid(Agent* pAgent, BehaviorTask* pTask) const;
	private:
		virtual BehaviorTask* createTask() const;

    };

	///Returns BT_FAILURE for the specified number of iterations, then returns BT_SUCCESS after that
    class BEHAVIAC_API DecoratorLoopTask : public DecoratorCountTask
    {
    public:
        BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorLoopTask, DecoratorCountTask);

		DecoratorLoopTask();
		virtual ~DecoratorLoopTask();

    protected:
		virtual void copyto(BehaviorTask* target) const;
		virtual void save(ISerializableNode* node) const;
		virtual void load(ISerializableNode* node);

        virtual EBTStatus decorate(EBTStatus status);
    };
	/*! @} */
	/*! @} */
}

#endif//BEHAVIAC_BEHAVIORTREE_DECORATORLOOP_H_