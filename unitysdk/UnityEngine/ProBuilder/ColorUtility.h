#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::ProBuilder { class CIELabColor; }
namespace UnityEngine::ProBuilder { class HSVColor; }
namespace UnityEngine::ProBuilder { class XYZColor; }

#define UNITYENGINE_PROBUILDER_COLORUTILITY_APPROX_OFFSET UNITYSDK_OFFSET(0x1B061140)
#define UNITYENGINE_PROBUILDER_COLORUTILITY_CIELABFROMRGB_OFFSET UNITYSDK_OFFSET(0x1B061E10)
#define UNITYENGINE_PROBUILDER_COLORUTILITY_DELTAE_OFFSET UNITYSDK_OFFSET(0x1B061590)
#define UNITYENGINE_PROBUILDER_COLORUTILITY_GETCOLORNAME_OFFSET UNITYSDK_OFFSET(0x1B061AF0)
#define UNITYENGINE_PROBUILDER_COLORUTILITY_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x1B061160)
#define UNITYENGINE_PROBUILDER_COLORUTILITY_HSVTORGB_1_OFFSET UNITYSDK_OFFSET(0x1B0617B0)
#define UNITYENGINE_PROBUILDER_COLORUTILITY_HSVTORGB_OFFSET UNITYSDK_OFFSET(0x1B061600)
#define UNITYENGINE_PROBUILDER_COLORUTILITY_RGBTOHSV_OFFSET UNITYSDK_OFFSET(0x1B061900)
#define UNITYENGINE_PROBUILDER_COLORUTILITY_RGBTOXYZ_1_OFFSET UNITYSDK_OFFSET(0x1B061400)
#define UNITYENGINE_PROBUILDER_COLORUTILITY_RGBTOXYZ_OFFSET UNITYSDK_OFFSET(0x1B061210)
#define UNITYENGINE_PROBUILDER_COLORUTILITY_XYZTOCIE_LAB_OFFSET UNITYSDK_OFFSET(0x1B05F920)
#define UNITYENGINE_PROBUILDER_COLORUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B061E90)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int ColorUtility_TypeDefinitionIndex = 40732;

	class ColorUtility : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::ProBuilder::CIELabColor*>** StaticGet_ColorNameLookup()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::ProBuilder::CIELabColor*>**)Il2CppClass::FromTypeDefinitionIndex(ColorUtility_TypeDefinitionIndex)->GetStaticField(0x51720);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_COLORUTILITY__CCTOR_OFFSET))();
		}

		static ::System::Boolean approx(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_COLORUTILITY_APPROX_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Color GetColor(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_COLORUTILITY_GETCOLOR_OFFSET))(a1);
		}

		static ::UnityEngine::ProBuilder::XYZColor* RGBToXYZ(::UnityEngine::Color a1)
		{
			return ((::UnityEngine::ProBuilder::XYZColor*(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_COLORUTILITY_RGBTOXYZ_OFFSET))(a1);
		}

		static ::UnityEngine::ProBuilder::XYZColor* RGBToXYZ_1(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::ProBuilder::XYZColor*(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_COLORUTILITY_RGBTOXYZ_1_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::ProBuilder::CIELabColor* XYZToCIE_Lab(::UnityEngine::ProBuilder::XYZColor* a1)
		{
			return ((::UnityEngine::ProBuilder::CIELabColor*(*)(::UnityEngine::ProBuilder::XYZColor*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_COLORUTILITY_XYZTOCIE_LAB_OFFSET))(a1);
		}

		static ::System::Single DeltaE(::UnityEngine::ProBuilder::CIELabColor* a1, ::UnityEngine::ProBuilder::CIELabColor* a2)
		{
			return ((::System::Single(*)(::UnityEngine::ProBuilder::CIELabColor*, ::UnityEngine::ProBuilder::CIELabColor*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_COLORUTILITY_DELTAE_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Color HSVtoRGB(::UnityEngine::ProBuilder::HSVColor* a1)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::ProBuilder::HSVColor*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_COLORUTILITY_HSVTORGB_OFFSET))(a1);
		}

		static ::UnityEngine::Color HSVtoRGB_1(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::Color(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_COLORUTILITY_HSVTORGB_1_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::ProBuilder::HSVColor* RGBtoHSV(::UnityEngine::Color a1)
		{
			return ((::UnityEngine::ProBuilder::HSVColor*(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_COLORUTILITY_RGBTOHSV_OFFSET))(a1);
		}

		static ::System::String* GetColorName(::UnityEngine::Color a1)
		{
			return ((::System::String*(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_COLORUTILITY_GETCOLORNAME_OFFSET))(a1);
		}

		static ::UnityEngine::ProBuilder::CIELabColor* CIELabFromRGB(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::UnityEngine::ProBuilder::CIELabColor*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_COLORUTILITY_CIELABFROMRGB_OFFSET))(a1, a2, a3, a4);
		}
	};
}
