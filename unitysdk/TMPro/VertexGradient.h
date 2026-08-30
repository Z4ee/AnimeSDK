#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

#define TMPRO_VERTEXGRADIENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3BB30A0)
#define TMPRO_VERTEXGRADIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x3BB3070)

namespace TMPro
{
	inline static constexpr unsigned int VertexGradient_TypeDefinitionIndex = 43489;

	struct alignas(4) VertexGradient
	{
		::UnityEngine::Color topLeft; // 0x10
		::UnityEngine::Color topRight; // 0x20
		::UnityEngine::Color bottomLeft; // 0x30
		::UnityEngine::Color bottomRight; // 0x40

		::System::Void _ctor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + TMPRO_VERTEXGRADIENT__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::UnityEngine::Color a1, ::UnityEngine::Color a2, ::UnityEngine::Color a3, ::UnityEngine::Color a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + TMPRO_VERTEXGRADIENT__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
