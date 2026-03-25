#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

#define UNITYENGINE_GRADIENTCOLORKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x163A1B0)

namespace UnityEngine
{
	inline static constexpr unsigned int GradientColorKey_TypeDefinitionIndex = 4028;

	struct alignas(4) GradientColorKey
	{
		::UnityEngine::Color color; // 0x10
		::System::Single time; // 0x20

		::System::Void _ctor(::UnityEngine::Color col, ::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENTCOLORKEY__CTOR_OFFSET))(this, col, time);
		}
	};
}
