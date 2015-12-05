LOCAL_PATH = $(ROOT_PATH)

include $(CLEAR_VARS)

LOCAL_MODULE := behaviac

LOCAL_C_INCLUDES := ../../inc/
LOCAL_CPPFLAGS  := -MMD -MP
LOCAL_CFLAGS    := -g -Wall -Wextra -Werror -ffast-math -Woverloaded-virtual -Wnon-virtual-dtor -Wfloat-equal -finput-charset=UTF-8 -D_DEBUG -DDEBUG -D_LIB -DBEHAVIAC_COMPILER_ANDROID_VER=9

LOCAL_SRC_FILES :=  ../../src/agent/agent.cpp ../../src/agent/context.cpp ../../src/agent/namedevent.cpp ../../src/agent/propertynode.cpp ../../src/agent/state_t.cpp ../../src/agent/taskmethod.cpp ../../src/base/base.cpp ../../src/base/convertutf.cpp ../../src/base/custommethod.cpp ../../src/base/dynamictype.cpp ../../src/base/dynamictypefactory.cpp ../../src/base/md5.cpp ../../src/base/workspace.cpp ../../src/base/config/config.cpp ../../src/base/core/assert.cpp ../../src/base/core/crc.cpp ../../src/base/core/factory.cpp ../../src/base/core/system_gcc.cpp ../../src/base/core/system_vcc.cpp ../../src/base/core/logging/consoleout.cpp ../../src/base/core/logging/log.cpp ../../src/base/core/memory/memalloc.cpp ../../src/base/core/memory/memheapalloc.cpp ../../src/base/core/memory/memory.cpp ../../src/base/core/profiler/profiler.cpp ../../src/base/core/socket/defaultsocketwrapper_gcc.cpp ../../src/base/core/socket/defaultsocketwrapper_vcc.cpp ../../src/base/core/socket/socketconnect_base.cpp ../../src/base/core/string/formatstring.cpp ../../src/base/core/string/stringid.cpp ../../src/base/core/string/stringutils.cpp ../../src/base/core/thread/mutex_gcc.cpp ../../src/base/core/thread/mutex_vcc.cpp ../../src/base/core/thread/wrapper.cpp ../../src/base/core/thread/wrapper_gcc.cpp ../../src/base/core/thread/wrapper_vcc.cpp ../../src/base/file/file.cpp ../../src/base/file/filemanager.cpp ../../src/base/file/filesystemvisitor.cpp ../../src/base/file/filesystem_gcc.cpp ../../src/base/file/filesystem_vcc.cpp ../../src/base/file/textfile.cpp ../../src/base/logging/logmanager.cpp ../../src/base/object/methodbase.cpp ../../src/base/object/tagobject.cpp ../../src/base/object/tagobjecttemplatemanager.cpp ../../src/base/randomgenerator/randomgenerator.cpp ../../src/base/serialization/textnode.cpp ../../src/base/socket/socketconnect.cpp ../../src/base/string/extensionconfig.cpp ../../src/base/string/pathid.cpp ../../src/base/timer/timer.cpp ../../src/base/timer/timer_gcc.cpp ../../src/base/timer/timer_vcc.cpp ../../src/base/xml/base64.cpp ../../src/base/xml/xml.cpp ../../src/base/xml/xmlparser.cpp ../../src/behaviortree/behaviortree.cpp ../../src/behaviortree/behaviortree_task.cpp ../../src/behaviortree/registernodes.cpp ../../src/behaviortree/attachments/attachaction.cpp ../../src/behaviortree/attachments/Effector.cpp ../../src/behaviortree/attachments/event.cpp ../../src/behaviortree/attachments/Precondition.cpp ../../src/behaviortree/nodes/actions/action.cpp ../../src/behaviortree/nodes/actions/assignment.cpp ../../src/behaviortree/nodes/actions/compute.cpp ../../src/behaviortree/nodes/actions/noop.cpp ../../src/behaviortree/nodes/actions/wait.cpp ../../src/behaviortree/nodes/actions/waitforsignal.cpp ../../src/behaviortree/nodes/actions/waitframes.cpp ../../src/behaviortree/nodes/composites/compositestochastic.cpp ../../src/behaviortree/nodes/composites/ifelse.cpp ../../src/behaviortree/nodes/composites/parallel.cpp ../../src/behaviortree/nodes/composites/query.cpp ../../src/behaviortree/nodes/composites/referencebehavior.cpp ../../src/behaviortree/nodes/composites/selector.cpp ../../src/behaviortree/nodes/composites/selectorloop.cpp ../../src/behaviortree/nodes/composites/selectorprobability.cpp ../../src/behaviortree/nodes/composites/selectorstochastic.cpp ../../src/behaviortree/nodes/composites/sequence.cpp ../../src/behaviortree/nodes/composites/sequencestochastic.cpp ../../src/behaviortree/nodes/composites/withprecondition.cpp ../../src/behaviortree/nodes/conditions/and.cpp ../../src/behaviortree/nodes/conditions/condition.cpp ../../src/behaviortree/nodes/conditions/conditionbase.cpp ../../src/behaviortree/nodes/conditions/false.cpp ../../src/behaviortree/nodes/conditions/or.cpp ../../src/behaviortree/nodes/conditions/true.cpp ../../src/behaviortree/nodes/decorators/decoratoralwaysfailure.cpp ../../src/behaviortree/nodes/decorators/decoratoralwaysrunning.cpp ../../src/behaviortree/nodes/decorators/decoratoralwayssuccess.cpp ../../src/behaviortree/nodes/decorators/decoratorcount.cpp ../../src/behaviortree/nodes/decorators/decoratorcountlimit.cpp ../../src/behaviortree/nodes/decorators/decoratorfailureuntil.cpp ../../src/behaviortree/nodes/decorators/decoratorframes.cpp ../../src/behaviortree/nodes/decorators/decoratoriterator.cpp ../../src/behaviortree/nodes/decorators/decoratorlog.cpp ../../src/behaviortree/nodes/decorators/decoratorloop.cpp ../../src/behaviortree/nodes/decorators/decoratorloopuntil.cpp ../../src/behaviortree/nodes/decorators/decoratornot.cpp ../../src/behaviortree/nodes/decorators/decoratorrepeat.cpp ../../src/behaviortree/nodes/decorators/decoratorsuccessuntil.cpp ../../src/behaviortree/nodes/decorators/decoratortime.cpp ../../src/behaviortree/nodes/decorators/decoratorweight.cpp ../../src/fsm/alwaystransition.cpp ../../src/fsm/fsm.cpp ../../src/fsm/fsmstate.cpp ../../src/fsm/startcondition.cpp ../../src/fsm/transitioncondition.cpp ../../src/fsm/waitframesstate.cpp ../../src/fsm/waitstate.cpp ../../src/fsm/waittransition.cpp ../../src/htn/agentproperties.cpp ../../src/htn/agentstate.cpp ../../src/htn/htnmethod.cpp ../../src/htn/planner.cpp ../../src/htn/plannertask.cpp ../../src/htn/task.cpp ../../src/network/network.cpp ../../src/property/comparator.cpp ../../src/property/computer.cpp ../../src/property/method.cpp ../../src/property/properties.cpp ../../src/property/property.cpp


LOCAL_CPPFLAGS += -DENABLE_LOGGING

LOCAL_STATIC_LIBRARIES := behaviac 

LOCAL_LDLIBS := -ldl -lGLESv1_CM -lGLESv2 -llog -landroid

#include $(BUILD_STATIC_LIBRARY)

include $(BUILD_SHARED_LIBRARY)
###
#include $(CLEAR_VARS)
#LOCAL_MODULE := behaviac-prebuilt
#LOCAL_SRC_FILES := $(LOCAL_PATH)/obj/local/$(TARGET_ARCH_ABI)/libbehaviac.so
##LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/../../inc
#include $(PREBUILT_SHARED_LIBRARY)

###
include $(CLEAR_VARS)
LOCAL_MODULE := btunittest
LOCAL_C_INCLUDES := ../../inc/ ../../../../include ../../test/btunittest
LOCAL_CPPFLAGS  := -MMD -MP
LOCAL_CFLAGS    := -g -Wall -Wextra -Werror -ffast-math -finput-charset=UTF-8 -D_DEBUG -DDEBUG -D_CRTDBG_MAP_ALLOC -D_LIB -DBEHAVIAC_COMPILER_ANDROID_VER=9
LOCAL_SRC_FILES :=  ../../test/btunittest/behaviacsystem.cpp ../../test/btunittest/BehaviacWorkspace.cpp ../../test/btunittest/main.cpp ../../test/btunittest/Agent/AgentArrayAccessTest.cpp ../../test/btunittest/Agent/AgentNodeTest.cpp ../../test/btunittest/Agent/CustomPropertyAgent.cpp ../../test/btunittest/Agent/EmployeeParTestAgent.cpp ../../test/btunittest/Agent/FSMAgentTest.cpp ../../test/btunittest/Agent/HTNAgentHouse.cpp ../../test/btunittest/Agent/HTNAgentHouseBase.cpp ../../test/btunittest/Agent/HTNAgentTravel.cpp ../../test/btunittest/Agent/ParTestAgent.cpp ../../test/btunittest/Agent/ParTestAgentBase.cpp ../../test/btunittest/Agent/ParTestRegNameAgent.cpp ../../test/btunittest/Agent/PreconEffectorAgent.cpp ../../test/btunittest/Agent/PreconEffectorTest.cpp ../../test/btunittest/Agent/PropertyReadonlyAgent.cpp ../../test/btunittest/Agent/UnitTestTypes.cpp ../../test/btunittest/ArrayAccessTest/ArrayAccessTest.cpp ../../test/btunittest/attachments/PreconEffectorUintTest.cpp ../../test/btunittest/behaviac_generated/types/customizedtypes.cpp ../../test/btunittest/ext/extendreftype.cpp ../../test/btunittest/FSMTest/fsmtestbase_0.cpp ../../test/btunittest/FSMTest/fsmunittest.cpp ../../test/btunittest/HTNTest/htnhouseunittest.cpp ../../test/btunittest/HTNTest/htntravelunittest.cpp ../../test/btunittest/Meta/testtraits.cpp ../../test/btunittest/Meta/testtype.cpp ../../test/btunittest/NodeTest/DecorationNodeUnitTest.cpp ../../test/btunittest/NodeTest/EnterExitActionUnitTest.cpp ../../test/btunittest/NodeTest/EventUnitTest.cpp ../../test/btunittest/NodeTest/NodeUnitTest.cpp ../../test/btunittest/NodeTest/ParallelNodeUnitTest.cpp ../../test/btunittest/NodeTest/PredicateUnitTest.cpp ../../test/btunittest/NodeTest/QueryUnitTest.cpp ../../test/btunittest/Others/btloadtest.cpp ../../test/btunittest/Others/btmethodtest.cpp ../../test/btunittest/Others/btunittest.cpp ../../test/btunittest/Others/parallelnodetest.cpp ../../test/btunittest/Others/probabilityselectortest.cpp ../../test/btunittest/Others/reflectionunittest.cpp ../../test/btunittest/Others/selectorlooptest.cpp ../../test/btunittest/Others/selectorstochastictest.cpp ../../test/btunittest/Others/sequencestochastictest.cpp ../../test/btunittest/ParPropertyTest/ParPropertyUnitTest.cpp ../../test/btunittest/ParPropertyTest/PropertyReadonlyUnitTest.cpp
LOCAL_LDLIBS := -landroid
LOCAL_STATIC_LIBRARIES := android_native_app_glue
#LOCAL_SHARED_LIBRARIES := behaviac-prebuilt
LOCAL_SHARED_LIBRARIES := behaviac 
include $(BUILD_SHARED_LIBRARY)
$(call import-module,android/native_app_glue)

###
include $(CLEAR_VARS)
LOCAL_MODULE := btremotetest
LOCAL_C_INCLUDES := ../../inc/ ../../../../include ../../test/btunittest
LOCAL_CPPFLAGS  := -MMD -MP
LOCAL_CFLAGS    := -g -Wall -Wextra -Werror -ffast-math -finput-charset=UTF-8 -D_DEBUG -DDEBUG -D_CRTDBG_MAP_ALLOC -D_LIB -DBEHAVIAC_COMPILER_ANDROID_VER=9
LOCAL_SRC_FILES :=  ../../test/btremotetest/BehaviacWorkspace.cpp ../../test/btremotetest/btremotetest.cpp
LOCAL_LDLIBS := -landroid
LOCAL_STATIC_LIBRARIES := android_native_app_glue
#LOCAL_SHARED_LIBRARIES := behaviac-prebuilt
LOCAL_SHARED_LIBRARIES := behaviac 
include $(BUILD_SHARED_LIBRARY)
$(call import-module,android/native_app_glue)

