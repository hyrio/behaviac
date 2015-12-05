﻿/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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

//#include "test.h"
#include "behaviac/behaviac.h"

#include "behaviac/base/config/config.h"
#include "BehaviacWorkspace.h"

#if BEHAVIAC_COMPILER_MSVC
#include <windows.h>
#endif

class CommandLineParameterParser
{
    int				m_argc;
    const char**	m_argv;
public:
    CommandLineParameterParser(int argc, char** argv) : m_argc(argc), m_argv((const char**)argv) {
    }

    bool ParameterExist(const char* szParam) {
        bool bMatch = false;

        for (int i = 0; i < m_argc; ++i) {
            if (strcmp(m_argv[i], szParam) == 0) {
                bMatch = true;
                break;
            }
        }

        return bMatch;
    }
};

void RegisterTypes();
void UnRegisterTypes();

void btagenttick();

static void SetExePath()
{
#if BEHAVIAC_COMPILER_MSVC
	TCHAR szCurPath[_MAX_PATH];

	GetModuleFileName(NULL, szCurPath, _MAX_PATH);

	char* p = szCurPath;

	while (strchr(p, '\\')) {
		p = strchr(p, '\\');
		p++;
	}

	*p = '\0';

	SetCurrentDirectory(szCurPath);
#endif
}

int main(int argc, char** argv)
{
    SetExePath();

    CommandLineParameterParser CLPP(argc, argv);
    //if to wait for the key to end
    bool bWait = CLPP.ParameterExist("-wait");

    behaviac::CConfig::GetInstance()->LoadConfig("setting.xml");

    behaviac::ConsoleOut::SetEnableMask(behaviac::ELOG_CONSOLE | behaviac::ELOG_FILE | behaviac::ELOG_VCOUTPUT);

    if (!bWait) {
		const char* pWait = behaviac::CConfig::Get("settings", "Wait");

        if (pWait && strcmp(pWait, "1") == 0) {
            bWait = true;
        }
    }

	behaviac::Workspace::GetInstance()->SetFilePath("../integration/unity_performance/Assets/Resources/behaviac/exported");
	
	behaviac::Config::SetSocketBlocking(true);

	

    btagenttick();

	

    if (bWait) {
        printf("\npress any key to end.\n");
        getchar();
    }

    return 0;
}

using namespace behaviac;

const unsigned int kIdMask_Wolrd = 0x0001;
const unsigned int kIdMask_Player = 0x0002;
const unsigned int kIdMask_Opponent = 0x0004;

void btagenttick()
{
	while (true)
	{
		behaviac::Thread::Sleep(5);
	}
}

#if 0
class TestAgent : public behaviac::Agent
{};

int main_doc()
{
    //srand(time(NULL));

	//block or not block
	behaviac::Config::SetSocketBlocking(false);

    //the first function to call to start behaviac module
    

    //register agents
    behaviac::Agent::Register<TestAgent>();

    //register names
	Agent::RegisterInstanceName<Agent>("AnyAgent");

    //after all the 'Agent::Register', export meta info,
    //this is only needed to execute when you Agent's structure is modified
    behaviac::Workspace::GetInstance()->ExportMetas("agents\\testAgents.xml");

    //behaviac::Workspace::SetDeltaFrameTime(0.0167f);
    behaviac::Workspace::GetInstance()->SetDeltaFrames(1);

    //create agent
    TestAgent* obj = behaviac::Agent::Create<TestAgent>();
    //load BTs, the path is relative to the workspace's export path
    obj->btload("test_selector/test_selector_multi_tick");
    obj->btsetcurrent("test_selector/test_selector_multi_tick");

    //enable to debug it that it can appear in the connected designer
    obj->SetIdFlag(1);
    TestAgent::SetIdMask(0xffffffff);

    while (true) {
        //please use the World::btexec which will exec all the agents instances
        //if you directily call obj->btexec(interval), the debugging can't work properly that
        //the cononected designer can't display the updated status, etc.
        //obj->btexec();
        BEHAVIAC_ASSERT(false);

        behaviac::Thread::Sleep(1000);
    }

    //clean up
    BEHAVIAC_DELETE(obj);
    TestAgent::Agent::UnRegister<TestAgent>();
	behaviac::Agent::UnRegisterInstanceName<Agent>("AnyAgent");

    

    return 0;
}

void ttt()
{
    TestAgent* pAgent = 0;

    int frames = 1;

    while (true) {
        BEHAVIAC_LOGINFO("Frame %d: behaviac::Agent::btexec", frames++);

        if (pAgent->btexec() != BT_RUNNING) {
            BEHAVIAC_LOGINFO("Finish");
            break;
        }
    }
}

/*
Frame 1: behaviac::Agent::btexec
exec C
exec A
exec W

Frame 2: behaviac::Agent::btexec
exec W

Frame 3: behaviac::Agent::btexec
exec W

...

Frame 100: behaviac::Agent::btexec
exec W

Finish

*/
#endif
