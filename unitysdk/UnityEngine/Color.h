#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_COLOR_ALPHAMULTIPLIED_OFFSET UNITYSDK_OFFSET(0x38800B0)
#define UNITYENGINE_COLOR_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3862A90)
#define UNITYENGINE_COLOR_EQUALS_OFFSET UNITYSDK_OFFSET(0x387FF80)
#define UNITYENGINE_COLOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x387FF00)
#define UNITYENGINE_COLOR_GET_BLACK_OFFSET UNITYSDK_OFFSET(0x1B282090)
#define UNITYENGINE_COLOR_GET_BLUE_OFFSET UNITYSDK_OFFSET(0x1B282070)
#define UNITYENGINE_COLOR_GET_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B2820F0)
#define UNITYENGINE_COLOR_GET_CYAN_OFFSET UNITYSDK_OFFSET(0x1B2820B0)
#define UNITYENGINE_COLOR_GET_GAMMA_OFFSET UNITYSDK_OFFSET(0x38801B0)
#define UNITYENGINE_COLOR_GET_GRAYSCALE_OFFSET UNITYSDK_OFFSET(0x3880110)
#define UNITYENGINE_COLOR_GET_GRAY_OFFSET UNITYSDK_OFFSET(0x1B2820D0)
#define UNITYENGINE_COLOR_GET_GREEN_OFFSET UNITYSDK_OFFSET(0x1B282060)
#define UNITYENGINE_COLOR_GET_GREY_OFFSET UNITYSDK_OFFSET(0x1B2820E0)
#define UNITYENGINE_COLOR_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x3880230)
#define UNITYENGINE_COLOR_GET_LINEAR_OFFSET UNITYSDK_OFFSET(0x3880140)
#define UNITYENGINE_COLOR_GET_MAGENTA_OFFSET UNITYSDK_OFFSET(0x1B2820C0)
#define UNITYENGINE_COLOR_GET_MAXCOLORCOMPONENT_OFFSET UNITYSDK_OFFSET(0x3880220)
#define UNITYENGINE_COLOR_GET_RED_OFFSET UNITYSDK_OFFSET(0x1B282050)
#define UNITYENGINE_COLOR_GET_WHITE_OFFSET UNITYSDK_OFFSET(0x1B282080)
#define UNITYENGINE_COLOR_GET_YELLOW_OFFSET UNITYSDK_OFFSET(0x1B2820A0)
#define UNITYENGINE_COLOR_HSVTORGB_1_OFFSET UNITYSDK_OFFSET(0x1B282760)
#define UNITYENGINE_COLOR_HSVTORGB_OFFSET UNITYSDK_OFFSET(0x1B2825F0)
#define UNITYENGINE_COLOR_LERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x1B281FB0)
#define UNITYENGINE_COLOR_LERP_OFFSET UNITYSDK_OFFSET(0x1B281F70)
#define UNITYENGINE_COLOR_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1B281E10)
#define UNITYENGINE_COLOR_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1B281EB0)
#define UNITYENGINE_COLOR_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B281ED0)
#define UNITYENGINE_COLOR_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1B282220)
#define UNITYENGINE_COLOR_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B281C40)
#define UNITYENGINE_COLOR_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B281F20)
#define UNITYENGINE_COLOR_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1B281E70)
#define UNITYENGINE_COLOR_OP_MULTIPLY_2_OFFSET UNITYSDK_OFFSET(0x1B281E90)
#define UNITYENGINE_COLOR_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1B281E50)
#define UNITYENGINE_COLOR_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1B281E30)
#define UNITYENGINE_COLOR_RGBMULTIPLIED_1_OFFSET UNITYSDK_OFFSET(0x38800E0)
#define UNITYENGINE_COLOR_RGBMULTIPLIED_OFFSET UNITYSDK_OFFSET(0x3880080)
#define UNITYENGINE_COLOR_RGBTOHSVHELPER_OFFSET UNITYSDK_OFFSET(0x1B282560)
#define UNITYENGINE_COLOR_RGBTOHSV_OFFSET UNITYSDK_OFFSET(0x1B2823C0)
#define UNITYENGINE_COLOR_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x3880240)
#define UNITYENGINE_COLOR_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x387FEF0)
#define UNITYENGINE_COLOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x387FEE0)
#define UNITYENGINE_COLOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3862D50)
#define UNITYENGINE_COLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x259B0)

namespace UnityEngine
{
	inline static constexpr unsigned int Color_TypeDefinitionIndex = 4201;

	struct alignas(4) Color
	{
		::System::Single r; // 0x10
		::System::Single g; // 0x14
		::System::Single b; // 0x18
		::System::Single a; // 0x1C

		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_TOSTRING_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::UnityEngine::Color a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_EQUALS_1_OFFSET))(this, a1);
		}

		static ::UnityEngine::Color op_Addition(::UnityEngine::Color a1, ::UnityEngine::Color a2)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_OP_ADDITION_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Color op_Subtraction(::UnityEngine::Color a1, ::UnityEngine::Color a2)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_OP_SUBTRACTION_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Color op_Multiply(::UnityEngine::Color a1, ::UnityEngine::Color a2)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_OP_MULTIPLY_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Color op_Multiply_1(::UnityEngine::Color a1, ::System::Single a2)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_OP_MULTIPLY_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Color op_Multiply_2(::System::Single a1, ::UnityEngine::Color a2)
		{
			return ((::UnityEngine::Color(*)(::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_OP_MULTIPLY_2_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Color op_Division(::UnityEngine::Color a1, ::System::Single a2)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_OP_DIVISION_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Color a1, ::UnityEngine::Color a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::Color a1, ::UnityEngine::Color a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Color Lerp(::UnityEngine::Color a1, ::UnityEngine::Color a2, ::System::Single a3)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_LERP_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Color LerpUnclamped(::UnityEngine::Color a1, ::UnityEngine::Color a2, ::System::Single a3)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_LERPUNCLAMPED_OFFSET))(a1, a2, a3);
		}

		::UnityEngine::Color RGBMultiplied(::System::Single a1)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_RGBMULTIPLIED_OFFSET))(this, a1);
		}

		::UnityEngine::Color AlphaMultiplied(::System::Single a1)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_ALPHAMULTIPLIED_OFFSET))(this, a1);
		}

		::UnityEngine::Color RGBMultiplied_1(::UnityEngine::Color a1)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_RGBMULTIPLIED_1_OFFSET))(this, a1);
		}

		static ::UnityEngine::Color get_red()
		{
			return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_GET_RED_OFFSET))();
		}

		static ::UnityEngine::Color get_green()
		{
			return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_GET_GREEN_OFFSET))();
		}

		static ::UnityEngine::Color get_blue()
		{
			return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_GET_BLUE_OFFSET))();
		}

		static ::UnityEngine::Color get_white()
		{
			return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_GET_WHITE_OFFSET))();
		}

		static ::UnityEngine::Color get_black()
		{
			return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_GET_BLACK_OFFSET))();
		}

		static ::UnityEngine::Color get_yellow()
		{
			return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_GET_YELLOW_OFFSET))();
		}

		static ::UnityEngine::Color get_cyan()
		{
			return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_GET_CYAN_OFFSET))();
		}

		static ::UnityEngine::Color get_magenta()
		{
			return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_GET_MAGENTA_OFFSET))();
		}

		static ::UnityEngine::Color get_gray()
		{
			return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_GET_GRAY_OFFSET))();
		}

		static ::UnityEngine::Color get_grey()
		{
			return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_GET_GREY_OFFSET))();
		}

		static ::UnityEngine::Color get_clear()
		{
			return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_GET_CLEAR_OFFSET))();
		}

		::System::Single get_grayscale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_GET_GRAYSCALE_OFFSET))(this);
		}

		::UnityEngine::Color get_linear()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_GET_LINEAR_OFFSET))(this);
		}

		::UnityEngine::Color get_gamma()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_GET_GAMMA_OFFSET))(this);
		}

		::System::Single get_maxColorComponent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_GET_MAXCOLORCOMPONENT_OFFSET))(this);
		}

		/*
		static ::UnityEngine::Vector4 op_Implicit(::UnityEngine::Color a1)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_OP_IMPLICIT_OFFSET))(a1);
		}
		*/

		/*
		static ::UnityEngine::Color op_Implicit_1(::UnityEngine::Vector4 a1)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_OP_IMPLICIT_1_OFFSET))(a1);
		}
		*/

		::System::Single get_Item(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_SET_ITEM_OFFSET))(this, a1, a2);
		}

		static ::System::Void RGBToHSV(::UnityEngine::Color a1, ::System::Single& a2, ::System::Single& a3, ::System::Single& a4)
		{
			return ((::System::Void(*)(::UnityEngine::Color, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_RGBTOHSV_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void RGBToHSVHelper(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single& a5, ::System::Single& a6, ::System::Single& a7)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_RGBTOHSVHELPER_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::UnityEngine::Color HSVToRGB(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::Color(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_HSVTORGB_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Color HSVToRGB_1(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4)
		{
			return ((::UnityEngine::Color(*)(::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_HSVTORGB_1_OFFSET))(a1, a2, a3, a4);
		}
	};
}
