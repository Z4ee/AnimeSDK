#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Sphere.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ClusterGroup_TypeDefinitionIndex = 4096;

	struct alignas(8) ClusterGroup
	{
		::UnityEngine::Sphere SphereBounds; // 0x10
		::UnityEngine::Sphere SphereLODBounds; // 0x20
		::System::Single MinLODError; // 0x30
		::System::Single MaxParentLODError; // 0x34
		::System::UInt32 MipLevel; // 0x38
		::Il2CppArray<::System::UInt32>* Childs; // 0x40
		::System::UInt32 PageStartIndex; // 0x48
		::System::UInt32 PageCount; // 0x4C
	};
}
