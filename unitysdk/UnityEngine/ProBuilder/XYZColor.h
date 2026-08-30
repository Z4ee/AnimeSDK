#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define UNITYENGINE_PROBUILDER_XYZCOLOR_FROMRGB_1_OFFSET UNITYSDK_OFFSET(0x1EBD3A60)
#define UNITYENGINE_PROBUILDER_XYZCOLOR_FROMRGB_OFFSET UNITYSDK_OFFSET(0x1EBD3A00)
#define UNITYENGINE_PROBUILDER_XYZCOLOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EBD3C80)
#define UNITYENGINE_PROBUILDER_XYZCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBD39F0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int XYZColor_TypeDefinitionIndex = 43156;

	class XYZColor : public ::System::Object
	{
	public:
		::System::Single x; // 0x10
		::System::Single z; // 0x14
		::System::Single y; // 0x18

		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_XYZCOLOR__CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::UnityEngine::ProBuilder::XYZColor* FromRGB(::UnityEngine::Color a1)
		{
			return ((::UnityEngine::ProBuilder::XYZColor*(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_XYZCOLOR_FROMRGB_OFFSET))(a1);
		}

		static ::UnityEngine::ProBuilder::XYZColor* FromRGB_1(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::ProBuilder::XYZColor*(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_XYZCOLOR_FROMRGB_1_OFFSET))(a1, a2, a3);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_XYZCOLOR_TOSTRING_OFFSET))(this);
		}
	};
}
