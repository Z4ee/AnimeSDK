#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Rendering/AsyncGPUReadbackRequest.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class ComputeBuffer; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VisQueryManager_QuerySession_TypeDefinitionIndex = 26655;

	struct alignas(8) VisQueryManager_QuerySession
	{
		::UnityEngine::ComputeBuffer* ParamBuffer; // 0x10
		::UnityEngine::ComputeBuffer* ResultBuffer; // 0x18
		::Unity::Collections::NativeArray_1<::System::UInt32> ReadbackBuffer; // 0x20
		::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* ReadbackCallback; // 0x30
		::System::Boolean InUse; // 0x38
		::System::Boolean ShouldDispose; // 0x39
		::System::Int32 QueryCount; // 0x3C
		::System::UInt32 TimeStamp; // 0x40
	};
}
