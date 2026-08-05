#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_BOUNDINGSPHERE__CTOR_OFFSET UNITYSDK_OFFSET(0x478110)

namespace UnityEngine
{
	inline static constexpr unsigned int BoundingSphere_TypeDefinitionIndex = 5142;

	struct alignas(4) BoundingSphere
	{
		::UnityEngine::Vector3 position; // 0x10
		::System::Single radius; // 0x1C

		::System::Void _ctor(::UnityEngine::Vector3 pos, ::System::Single rad)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDINGSPHERE__CTOR_OFFSET))(this, pos, rad);
		}
	};
}
