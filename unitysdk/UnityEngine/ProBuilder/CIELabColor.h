#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace UnityEngine::ProBuilder { class XYZColor; }

#define UNITYENGINE_PROBUILDER_CIELABCOLOR_FROMRGB_OFFSET UNITYSDK_OFFSET(0x1EAD1F30)
#define UNITYENGINE_PROBUILDER_CIELABCOLOR_FROMXYZ_OFFSET UNITYSDK_OFFSET(0x1EAD1D30)
#define UNITYENGINE_PROBUILDER_CIELABCOLOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAD1FF0)
#define UNITYENGINE_PROBUILDER_CIELABCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1EAD1D20)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int CIELabColor_TypeDefinitionIndex = 43157;

	class CIELabColor : public ::System::Object
	{
	public:
		::System::Single b; // 0x10
		::System::Single L; // 0x14
		::System::Single a; // 0x18

		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_CIELABCOLOR__CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::UnityEngine::ProBuilder::CIELabColor* FromXYZ(::UnityEngine::ProBuilder::XYZColor* a1)
		{
			return ((::UnityEngine::ProBuilder::CIELabColor*(*)(::UnityEngine::ProBuilder::XYZColor*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_CIELABCOLOR_FROMXYZ_OFFSET))(a1);
		}

		static ::UnityEngine::ProBuilder::CIELabColor* FromRGB(::UnityEngine::Color a1)
		{
			return ((::UnityEngine::ProBuilder::CIELabColor*(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_CIELABCOLOR_FROMRGB_OFFSET))(a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_CIELABCOLOR_TOSTRING_OFFSET))(this);
		}
	};
}
