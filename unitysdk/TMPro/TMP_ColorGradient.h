#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TMPro/ColorMode.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define TMPRO_TMP_COLORGRADIENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E859AE0)
#define TMPRO_TMP_COLORGRADIENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8599A0)
#define TMPRO_TMP_COLORGRADIENT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E859A30)
#define TMPRO_TMP_COLORGRADIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8598B0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_ColorGradient_TypeDefinitionIndex = 39107;

	class TMP_ColorGradient : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::UnityEngine::Color* StaticGet_k_DefaultColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(TMP_ColorGradient_TypeDefinitionIndex)->GetStaticField(0x97A0);
		}
		// static const ::TMPro::ColorMode k_DefaultColorMode; // 0x0
		::TMPro::ColorMode colorMode; // 0x18
		::UnityEngine::Color topLeft; // 0x1C
		::UnityEngine::Color topRight; // 0x2C
		::UnityEngine::Color bottomLeft; // 0x3C
		::UnityEngine::Color bottomRight; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_COLORGRADIENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + TMPRO_TMP_COLORGRADIENT__CTOR_1_OFFSET))(this, color);
		}

		::System::Void _ctor_2(::UnityEngine::Color color0, ::UnityEngine::Color color1, ::UnityEngine::Color color2, ::UnityEngine::Color color3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + TMPRO_TMP_COLORGRADIENT__CTOR_2_OFFSET))(this, color0, color1, color2, color3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_COLORGRADIENT__CCTOR_OFFSET))();
		}
	};
}
