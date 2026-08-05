#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine::UI::Extension { class InteractionRangeProcessorManager; }

#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORMANAGER__WAITUNTILALLCLAMPFINISH_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA20650)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORMANAGER__WAITUNTILALLCLAMPFINISH_D__11_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int InteractionRangeProcessorManager__WaitUntilAllClampFinish_d__11_TypeDefinitionIndex = 85962;

	struct alignas(8) InteractionRangeProcessorManager__WaitUntilAllClampFinish_d__11
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x20
		::System::Threading::CancellationToken token; // 0x30
		::UnityEngine::UI::Extension::InteractionRangeProcessorManager* __4__this; // 0x38
		::System::Int32 __1__state; // 0x40

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORMANAGER__WAITUNTILALLCLAMPFINISH_D__11_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORMANAGER__WAITUNTILALLCLAMPFINISH_D__11_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
