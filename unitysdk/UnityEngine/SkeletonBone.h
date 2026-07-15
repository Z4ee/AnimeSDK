#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

namespace UnityEngine
{
	inline static constexpr unsigned int SkeletonBone_TypeDefinitionIndex = 5150;

	struct alignas(8) SkeletonBone
	{
		::System::String* name; // 0x10
		::System::String* parentName; // 0x18
		::UnityEngine::Vector3 position; // 0x20
		::UnityEngine::Quaternion rotation; // 0x2C
		::UnityEngine::Vector3 scale; // 0x3C
	};
}
