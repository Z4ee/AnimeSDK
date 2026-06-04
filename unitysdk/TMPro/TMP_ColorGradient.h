#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TMPro/ColorMode.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define TMPRO_TMP_COLORGRADIENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B19D0A0)
#define TMPRO_TMP_COLORGRADIENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B19CFF0)
#define TMPRO_TMP_COLORGRADIENT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B19D040)
#define TMPRO_TMP_COLORGRADIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B19CF60)

namespace TMPro
{
	inline static constexpr unsigned int TMP_ColorGradient_TypeDefinitionIndex = 40929;

	class TMP_ColorGradient : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::UnityEngine::Color* StaticGet_k_DefaultColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(TMP_ColorGradient_TypeDefinitionIndex)->GetStaticField(0x11850);
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

		::System::Void _ctor_1(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + TMPRO_TMP_COLORGRADIENT__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::UnityEngine::Color a1, ::UnityEngine::Color a2, ::UnityEngine::Color a3, ::UnityEngine::Color a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + TMPRO_TMP_COLORGRADIENT__CTOR_2_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_COLORGRADIENT__CCTOR_OFFSET))();
		}
	};
}
