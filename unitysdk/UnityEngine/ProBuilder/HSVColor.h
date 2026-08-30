#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define UNITYENGINE_PROBUILDER_HSVCOLOR_FROMRGB_OFFSET UNITYSDK_OFFSET(0x1EB15940)
#define UNITYENGINE_PROBUILDER_HSVCOLOR_SQRDISTANCE_OFFSET UNITYSDK_OFFSET(0x1EB15A70)
#define UNITYENGINE_PROBUILDER_HSVCOLOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB159A0)
#define UNITYENGINE_PROBUILDER_HSVCOLOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB15920)
#define UNITYENGINE_PROBUILDER_HSVCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1EAD3FA0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int HSVColor_TypeDefinitionIndex = 43155;

	class HSVColor : public ::System::Object
	{
	public:
		::System::Single h; // 0x10
		::System::Single s; // 0x14
		::System::Single v; // 0x18

		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HSVCOLOR__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HSVCOLOR__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::UnityEngine::ProBuilder::HSVColor* FromRGB(::UnityEngine::Color a1)
		{
			return ((::UnityEngine::ProBuilder::HSVColor*(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HSVCOLOR_FROMRGB_OFFSET))(a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HSVCOLOR_TOSTRING_OFFSET))(this);
		}

		::System::Single SqrDistance(::UnityEngine::ProBuilder::HSVColor* a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::ProBuilder::HSVColor*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HSVCOLOR_SQRDISTANCE_OFFSET))(this, a1);
		}
	};
}
