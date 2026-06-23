#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color32.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGILAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x9F1310)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapCharacterGILayer_TypeDefinitionIndex = 27113;

	struct alignas(4) NapCharacterGILayer
	{
		::UnityEngine::Color32 color; // 0x10
		::UnityEngine::Color32 colorSkin; // 0x14

		/*
		::System::Void _ctor(::UnityEngine::Color color, ::UnityEngine::Color colorSkin)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGILAYER__CTOR_OFFSET))(this, color, colorSkin);
		}
		*/
	};
}
