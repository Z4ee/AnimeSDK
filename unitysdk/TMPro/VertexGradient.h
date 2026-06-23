#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

#define TMPRO_VERTEXGRADIENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA81310)
#define TMPRO_VERTEXGRADIENT__CTOR_OFFSET UNITYSDK_OFFSET(0xA812E0)

namespace TMPro
{
	inline static constexpr unsigned int VertexGradient_TypeDefinitionIndex = 39239;

	struct alignas(4) VertexGradient
	{
		::UnityEngine::Color topLeft; // 0x10
		::UnityEngine::Color topRight; // 0x20
		::UnityEngine::Color bottomLeft; // 0x30
		::UnityEngine::Color bottomRight; // 0x40

		::System::Void _ctor(::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + TMPRO_VERTEXGRADIENT__CTOR_OFFSET))(this, color);
		}

		::System::Void _ctor_1(::UnityEngine::Color color0, ::UnityEngine::Color color1, ::UnityEngine::Color color2, ::UnityEngine::Color color3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + TMPRO_VERTEXGRADIENT__CTOR_1_OFFSET))(this, color0, color1, color2, color3);
		}
	};
}
