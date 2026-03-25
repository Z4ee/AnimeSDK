#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace UnityEngine::ProBuilder { class XYZColor; }

#define UNITYENGINE_PROBUILDER_CIELABCOLOR_FROMRGB_OFFSET UNITYSDK_OFFSET(0x187C11A0)
#define UNITYENGINE_PROBUILDER_CIELABCOLOR_FROMXYZ_OFFSET UNITYSDK_OFFSET(0x187C0FB0)
#define UNITYENGINE_PROBUILDER_CIELABCOLOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x187C1260)
#define UNITYENGINE_PROBUILDER_CIELABCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x187C0FA0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int CIELabColor_TypeDefinitionIndex = 34085;

	class CIELabColor : public ::System::Object
	{
	public:
		::System::Single L; // 0x10
		::System::Single b; // 0x14
		::System::Single a; // 0x18

		::System::Void _ctor(::System::Single L, ::System::Single a, ::System::Single b)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_CIELABCOLOR__CTOR_OFFSET))(this, L, a, b);
		}

		static ::UnityEngine::ProBuilder::CIELabColor* FromXYZ(::UnityEngine::ProBuilder::XYZColor* xyz)
		{
			return ((::UnityEngine::ProBuilder::CIELabColor*(*)(::UnityEngine::ProBuilder::XYZColor*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_CIELABCOLOR_FROMXYZ_OFFSET))(xyz);
		}

		static ::UnityEngine::ProBuilder::CIELabColor* FromRGB(::UnityEngine::Color col)
		{
			return ((::UnityEngine::ProBuilder::CIELabColor*(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_CIELABCOLOR_FROMRGB_OFFSET))(col);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_CIELABCOLOR_TOSTRING_OFFSET))(this);
		}
	};
}
