#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define UNITYENGINE_PROBUILDER_XYZCOLOR_FROMRGB_1_OFFSET UNITYSDK_OFFSET(0x1A2F5D40)
#define UNITYENGINE_PROBUILDER_XYZCOLOR_FROMRGB_OFFSET UNITYSDK_OFFSET(0x1A2F5CE0)
#define UNITYENGINE_PROBUILDER_XYZCOLOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A2F5F60)
#define UNITYENGINE_PROBUILDER_XYZCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2F5CD0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int XYZColor_TypeDefinitionIndex = 39903;

	class XYZColor : public ::System::Object
	{
	public:
		::System::Single x; // 0x10
		::System::Single z; // 0x14
		::System::Single y; // 0x18

		::System::Void _ctor(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_XYZCOLOR__CTOR_OFFSET))(this, x, y, z);
		}

		static ::UnityEngine::ProBuilder::XYZColor* FromRGB(::UnityEngine::Color col)
		{
			return ((::UnityEngine::ProBuilder::XYZColor*(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_XYZCOLOR_FROMRGB_OFFSET))(col);
		}

		static ::UnityEngine::ProBuilder::XYZColor* FromRGB_1(::System::Single R, ::System::Single G, ::System::Single B)
		{
			return ((::UnityEngine::ProBuilder::XYZColor*(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_XYZCOLOR_FROMRGB_1_OFFSET))(R, G, B);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_XYZCOLOR_TOSTRING_OFFSET))(this);
		}
	};
}
