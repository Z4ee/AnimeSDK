#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger; }

#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER__WAITALLCLAMPFINISH_D__66_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9702F0)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER__WAITALLCLAMPFINISH_D__66_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIImgEventTrigger__WaitAllClampFinish_d__66_TypeDefinitionIndex = 65764;

	struct alignas(8) UIImgEventTrigger__WaitAllClampFinish_d__66
	{
		::System::Threading::CancellationToken token; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x18
		::UnityEngine::UI::Extension::UIImgEventTrigger* __4__this; // 0x28
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x30
		::System::Int32 __1__state; // 0x40

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER__WAITALLCLAMPFINISH_D__66_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER__WAITALLCLAMPFINISH_D__66_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
