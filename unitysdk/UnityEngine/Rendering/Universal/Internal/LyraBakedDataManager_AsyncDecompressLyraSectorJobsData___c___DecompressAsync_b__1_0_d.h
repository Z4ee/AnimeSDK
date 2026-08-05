#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine::Rendering::Universal::Internal { class LyraBakedDataManager_AsyncDecompressLyraSectorJobsData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ASYNCDECOMPRESSLYRASECTORJOBSDATA___C___DECOMPRESSASYNC_B__1_0_D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9A5FE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ASYNCDECOMPRESSLYRASECTORJOBSDATA___C___DECOMPRESSASYNC_B__1_0_D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x52B600)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraBakedDataManager_AsyncDecompressLyraSectorJobsData___c___DecompressAsync_b__1_0_d_TypeDefinitionIndex = 26921;

	struct alignas(8) LyraBakedDataManager_AsyncDecompressLyraSectorJobsData___c___DecompressAsync_b__1_0_d
	{
		::System::Runtime::CompilerServices::TaskAwaiter __u__1; // 0x10
		::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_AsyncDecompressLyraSectorJobsData* data; // 0x18
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder; // 0x20
		::System::Int32 __1__state; // 0x38

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ASYNCDECOMPRESSLYRASECTORJOBSDATA___C___DECOMPRESSASYNC_B__1_0_D_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ASYNCDECOMPRESSLYRASECTORJOBSDATA___C___DECOMPRESSASYNC_B__1_0_D_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
