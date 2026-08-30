#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

#define UNITYENGINE_GRADIENTCOLORKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x2E255D0)

namespace UnityEngine
{
	inline static constexpr unsigned int GradientColorKey_TypeDefinitionIndex = 4219;

	struct alignas(4) GradientColorKey
	{
		::UnityEngine::Color color; // 0x10
		::System::Single time; // 0x20

		::System::Void _ctor(::UnityEngine::Color a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENTCOLORKEY__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
