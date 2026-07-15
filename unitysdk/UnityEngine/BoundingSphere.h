#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_BOUNDINGSPHERE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x165220)
#define UNITYENGINE_BOUNDINGSPHERE__CTOR_OFFSET UNITYSDK_OFFSET(0x6EA800)

namespace UnityEngine
{
	inline static constexpr unsigned int BoundingSphere_TypeDefinitionIndex = 4038;

	struct alignas(4) BoundingSphere
	{
		::UnityEngine::Vector3 position; // 0x10
		::System::Single radius; // 0x1C

		::System::Void _ctor(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDINGSPHERE__CTOR_OFFSET))(this, a1, a2);
		}

		/*
		::System::Void _ctor_1(::UnityEngine::Vector4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDINGSPHERE__CTOR_1_OFFSET))(this, a1);
		}
		*/
	};
}
