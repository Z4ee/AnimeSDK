#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace UnityEngine { class Transform; }

namespace UnityEngine
{
	inline static constexpr unsigned int IRIClusterVolumeInfo_TypeDefinitionIndex = 4280;

	struct alignas(8) IRIClusterVolumeInfo
	{
		::UnityEngine::Transform* TransformComp; // 0x10
		::UnityEngine::Bounds LocalAABB; // 0x18
		::System::UInt32 MatrixNativeArrayCount; // 0x30
		::System::Void* MatrixNativeArrayPtr; // 0x38
		::System::Void* Types; // 0x40
		::System::UInt32 TypesCount; // 0x48
	};
}
