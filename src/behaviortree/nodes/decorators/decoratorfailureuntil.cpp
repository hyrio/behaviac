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

#include "behaviac/base/base.h"
#include "behaviac/behaviortree/nodes/decorators/decoratorfailureuntil.h"

namespace behaviac
{
    DecoratorFailureUntil::DecoratorFailureUntil()
    {}

    DecoratorFailureUntil::~DecoratorFailureUntil()
    {}

    void DecoratorFailureUntil::load(int version, const char* agentType, const properties_t& properties)
    {
        DecoratorCount::load(version, agentType, properties);
    }

    bool DecoratorFailureUntil::IsValid(Agent* pAgent, BehaviorTask* pTask) const
    {
        if (!DecoratorFailureUntil::DynamicCast(pTask->GetNode()))
        {
            return false;
        }

        return super::IsValid(pAgent, pTask);
    }

    BehaviorTask* DecoratorFailureUntil::createTask() const
    {
        DecoratorFailureUntilTask* pTask = BEHAVIAC_NEW DecoratorFailureUntilTask();

        return pTask;
    }

    //bool DecoratorFailureUntilTask::NeedRestart() const
    //{
    //	return true;
    //}

    void DecoratorFailureUntilTask::copyto(BehaviorTask* target) const
    {
        super::copyto(target);
    }

    void DecoratorFailureUntilTask::save(ISerializableNode* node) const
    {
        super::save(node);
    }

    void DecoratorFailureUntilTask::load(ISerializableNode* node)
    {
        super::load(node);
    }

    EBTStatus DecoratorFailureUntilTask::decorate(EBTStatus status)
    {
        BEHAVIAC_UNUSED_VAR(status);

        if (this->m_n > 0)
        {
            this->m_n--;

            if (this->m_n == 0)
            {
                return BT_SUCCESS;
            }

            return BT_FAILURE;
        }

        if (this->m_n == -1)
        {
            return BT_FAILURE;
        }

        BEHAVIAC_ASSERT(this->m_n == 0);

        return BT_SUCCESS;
    }
}//namespace behaviac
