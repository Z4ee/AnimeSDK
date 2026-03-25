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

#define UNITYENGINE_PROBUILDER_COLORUTILITY_APPROX_OFFSET UNITYSDK_OFFSET(0x187C2480)
#define UNITYENGINE_PROBUILDER_COLORUTILITY_CIELABFROMRGB_OFFSET UNITYSDK_OFFSET(0x187C3170)
#define UNITYENGINE_PROBUILDER_COLORUTILITY_DELTAE_OFFSET UNITYSDK_OFFSET(0x187C2910)
#define UNITYENGINE_PROBUILDER_COLORUTILITY_GETCOLORNAME_OFFSET UNITYSDK_OFFSET(0x187C2E60)
#define UNITYENGINE_PROBUILDER_COLORUTILITY_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x187C24A0)
#define UNITYENGINE_PROBUILDER_COLORUTILITY_HSVTORGB_1_OFFSET UNITYSDK_OFFSET(0x187C2B20)
#define UNITYENGINE_PROBUILDER_COLORUTILITY_HSVTORGB_OFFSET UNITYSDK_OFFSET(0x187C2970)
#define UNITYENGINE_PROBUILDER_COLORUTILITY_RGBTOHSV_OFFSET UNITYSDK_OFFSET(0x187C2C70)
#define UNITYENGINE_PROBUILDER_COLORUTILITY_RGBTOXYZ_1_OFFSET UNITYSDK_OFFSET(0x187C2760)
#define UNITYENGINE_PROBUILDER_COLORUTILITY_RGBTOXYZ_OFFSET UNITYSDK_OFFSET(0x187C2550)
#define UNITYENGINE_PROBUILDER_COLORUTILITY_XYZTOCIE_LAB_OFFSET UNITYSDK_OFFSET(0x187C1010)
#define UNITYENGINE_PROBUILDER_COLORUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x187C31F0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int ColorUtility_TypeDefinitionIndex = 34086;

	class ColorUtility : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::ProBuilder::CIELabColor*>** StaticGet_ColorNameLookup()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::ProBuilder::CIELabColor*>**)Il2CppClass::FromTypeDefinitionIndex(ColorUtility_TypeDefinitionIndex)->GetStaticField(0x26E90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_COLORUTILITY__CCTOR_OFFSET))();
		}

		static ::System::Boolean approx(::System::Single lhs, ::System::Single rhs)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_COLORUTILITY_APPROX_OFFSET))(lhs, rhs);
		}

		static ::UnityEngine::Color GetColor(::UnityEngine::Vector3 vec)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_COLORUTILITY_GETCOLOR_OFFSET))(vec);
		}

		static ::UnityEngine::ProBuilder::XYZColor* RGBToXYZ(::UnityEngine::Color col)
		{
			return ((::UnityEngine::ProBuilder::XYZColor*(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_COLORUTILITY_RGBTOXYZ_OFFSET))(col);
		}

		static ::UnityEngine::ProBuilder::XYZColor* RGBToXYZ_1(::System::Single r, ::System::Single g, ::System::Single b)
		{
			return ((::UnityEngine::ProBuilder::XYZColor*(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_COLORUTILITY_RGBTOXYZ_1_OFFSET))(r, g, b);
		}

		static ::UnityEngine::ProBuilder::CIELabColor* XYZToCIE_Lab(::UnityEngine::ProBuilder::XYZColor* xyz)
		{
			return ((::UnityEngine::ProBuilder::CIELabColor*(*)(::UnityEngine::ProBuilder::XYZColor*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_COLORUTILITY_XYZTOCIE_LAB_OFFSET))(xyz);
		}

		static ::System::Single DeltaE(::UnityEngine::ProBuilder::CIELabColor* lhs, ::UnityEngine::ProBuilder::CIELabColor* rhs)
		{
			return ((::System::Single(*)(::UnityEngine::ProBuilder::CIELabColor*, ::UnityEngine::ProBuilder::CIELabColor*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_COLORUTILITY_DELTAE_OFFSET))(lhs, rhs);
		}

		static ::UnityEngine::Color HSVtoRGB(::UnityEngine::ProBuilder::HSVColor* hsv)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::ProBuilder::HSVColor*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_COLORUTILITY_HSVTORGB_OFFSET))(hsv);
		}

		static ::UnityEngine::Color HSVtoRGB_1(::System::Single h, ::System::Single s, ::System::Single v)
		{
			return ((::UnityEngine::Color(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_COLORUTILITY_HSVTORGB_1_OFFSET))(h, s, v);
		}

		static ::UnityEngine::ProBuilder::HSVColor* RGBtoHSV(::UnityEngine::Color color)
		{
			return ((::UnityEngine::ProBuilder::HSVColor*(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_COLORUTILITY_RGBTOHSV_OFFSET))(color);
		}

		static ::System::String* GetColorName(::UnityEngine::Color InColor)
		{
			return ((::System::String*(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_COLORUTILITY_GETCOLORNAME_OFFSET))(InColor);
		}

		static ::UnityEngine::ProBuilder::CIELabColor* CIELabFromRGB(::System::Single R, ::System::Single G, ::System::Single B, ::System::Single Scale)
		{
			return ((::UnityEngine::ProBuilder::CIELabColor*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_COLORUTILITY_CIELABFROMRGB_OFFSET))(R, G, B, Scale);
		}
	};
}
