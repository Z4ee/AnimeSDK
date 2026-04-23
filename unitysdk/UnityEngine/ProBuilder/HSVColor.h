#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define UNITYENGINE_PROBUILDER_HSVCOLOR_FROMRGB_OFFSET UNITYSDK_OFFSET(0x1A23E3B0)
#define UNITYENGINE_PROBUILDER_HSVCOLOR_SQRDISTANCE_OFFSET UNITYSDK_OFFSET(0x1A23E4E0)
#define UNITYENGINE_PROBUILDER_HSVCOLOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A23E410)
#define UNITYENGINE_PROBUILDER_HSVCOLOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A23E390)
#define UNITYENGINE_PROBUILDER_HSVCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1FCE30)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int HSVColor_TypeDefinitionIndex = 39902;

	class HSVColor : public ::System::Object
	{
	public:
		::System::Single v; // 0x10
		::System::Single h; // 0x14
		::System::Single s; // 0x18

		::System::Void _ctor(::System::Single h, ::System::Single s, ::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HSVCOLOR__CTOR_OFFSET))(this, h, s, v);
		}

		::System::Void _ctor_1(::System::Single h, ::System::Single s, ::System::Single v, ::System::Single sv_modifier)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HSVCOLOR__CTOR_1_OFFSET))(this, h, s, v, sv_modifier);
		}

		static ::UnityEngine::ProBuilder::HSVColor* FromRGB(::UnityEngine::Color col)
		{
			return ((::UnityEngine::ProBuilder::HSVColor*(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HSVCOLOR_FROMRGB_OFFSET))(col);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HSVCOLOR_TOSTRING_OFFSET))(this);
		}

		::System::Single SqrDistance(::UnityEngine::ProBuilder::HSVColor* InColor)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::ProBuilder::HSVColor*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HSVCOLOR_SQRDISTANCE_OFFSET))(this, InColor);
		}
	};
}
