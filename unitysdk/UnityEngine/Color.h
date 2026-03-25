#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_COLOR_ALPHAMULTIPLIED_OFFSET UNITYSDK_OFFSET(0x2110780)
#define UNITYENGINE_COLOR_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20F6B20)
#define UNITYENGINE_COLOR_EQUALS_OFFSET UNITYSDK_OFFSET(0x2110650)
#define UNITYENGINE_COLOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x21105D0)
#define UNITYENGINE_COLOR_GET_BLACK_OFFSET UNITYSDK_OFFSET(0x189F6A20)
#define UNITYENGINE_COLOR_GET_BLUE_OFFSET UNITYSDK_OFFSET(0x189F6A00)
#define UNITYENGINE_COLOR_GET_CLEAR_OFFSET UNITYSDK_OFFSET(0x189F6A80)
#define UNITYENGINE_COLOR_GET_CYAN_OFFSET UNITYSDK_OFFSET(0x189F6A40)
#define UNITYENGINE_COLOR_GET_GAMMA_OFFSET UNITYSDK_OFFSET(0x2110880)
#define UNITYENGINE_COLOR_GET_GRAYSCALE_OFFSET UNITYSDK_OFFSET(0x21107E0)
#define UNITYENGINE_COLOR_GET_GRAY_OFFSET UNITYSDK_OFFSET(0x189F6A60)
#define UNITYENGINE_COLOR_GET_GREEN_OFFSET UNITYSDK_OFFSET(0x189F69F0)
#define UNITYENGINE_COLOR_GET_GREY_OFFSET UNITYSDK_OFFSET(0x189F6A70)
#define UNITYENGINE_COLOR_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x2110900)
#define UNITYENGINE_COLOR_GET_LINEAR_OFFSET UNITYSDK_OFFSET(0x2110810)
#define UNITYENGINE_COLOR_GET_MAGENTA_OFFSET UNITYSDK_OFFSET(0x189F6A50)
#define UNITYENGINE_COLOR_GET_MAXCOLORCOMPONENT_OFFSET UNITYSDK_OFFSET(0x21108F0)
#define UNITYENGINE_COLOR_GET_RED_OFFSET UNITYSDK_OFFSET(0x189F69E0)
#define UNITYENGINE_COLOR_GET_WHITE_OFFSET UNITYSDK_OFFSET(0x189F6A10)
#define UNITYENGINE_COLOR_GET_YELLOW_OFFSET UNITYSDK_OFFSET(0x189F6A30)
#define UNITYENGINE_COLOR_HSVTORGB_1_OFFSET UNITYSDK_OFFSET(0x189F70F0)
#define UNITYENGINE_COLOR_HSVTORGB_OFFSET UNITYSDK_OFFSET(0x189F6F80)
#define UNITYENGINE_COLOR_LERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x189F6940)
#define UNITYENGINE_COLOR_LERP_OFFSET UNITYSDK_OFFSET(0x189F6900)
#define UNITYENGINE_COLOR_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x189F67A0)
#define UNITYENGINE_COLOR_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x189F6840)
#define UNITYENGINE_COLOR_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x189F6860)
#define UNITYENGINE_COLOR_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x189F6BB0)
#define UNITYENGINE_COLOR_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x189F65D0)
#define UNITYENGINE_COLOR_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x189F68B0)
#define UNITYENGINE_COLOR_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x189F6800)
#define UNITYENGINE_COLOR_OP_MULTIPLY_2_OFFSET UNITYSDK_OFFSET(0x189F6820)
#define UNITYENGINE_COLOR_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x189F67E0)
#define UNITYENGINE_COLOR_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x189F67C0)
#define UNITYENGINE_COLOR_RGBMULTIPLIED_1_OFFSET UNITYSDK_OFFSET(0x21107B0)
#define UNITYENGINE_COLOR_RGBMULTIPLIED_OFFSET UNITYSDK_OFFSET(0x2110750)
#define UNITYENGINE_COLOR_RGBTOHSVHELPER_OFFSET UNITYSDK_OFFSET(0x189F6EF0)
#define UNITYENGINE_COLOR_RGBTOHSV_OFFSET UNITYSDK_OFFSET(0x189F6D50)
#define UNITYENGINE_COLOR_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x2110910)
#define UNITYENGINE_COLOR_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x21105C0)
#define UNITYENGINE_COLOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x21105B0)
#define UNITYENGINE_COLOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x20F6DE0)
#define UNITYENGINE_COLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x24C40)

namespace UnityEngine
{
	inline static constexpr unsigned int Color_TypeDefinitionIndex = 4025;

	struct alignas(4) Color
	{
		::System::Single r; // 0x10
		::System::Single g; // 0x14
		::System::Single b; // 0x18
		::System::Single a; // 0x1C

		::System::Void _ctor(::System::Single r, ::System::Single g, ::System::Single b, ::System::Single a)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR__CTOR_OFFSET))(this, r, g, b, a);
		}

		::System::Void _ctor_1(::System::Single r, ::System::Single g, ::System::Single b)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR__CTOR_1_OFFSET))(this, r, g, b);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_TOSTRING_1_OFFSET))(this, format);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::UnityEngine::Color other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_EQUALS_1_OFFSET))(this, other);
		}

		static ::UnityEngine::Color op_Addition(::UnityEngine::Color a, ::UnityEngine::Color b)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_OP_ADDITION_OFFSET))(a, b);
		}

		static ::UnityEngine::Color op_Subtraction(::UnityEngine::Color a, ::UnityEngine::Color b)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_OP_SUBTRACTION_OFFSET))(a, b);
		}

		static ::UnityEngine::Color op_Multiply(::UnityEngine::Color a, ::UnityEngine::Color b)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_OP_MULTIPLY_OFFSET))(a, b);
		}

		static ::UnityEngine::Color op_Multiply_1(::UnityEngine::Color a, ::System::Single b)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_OP_MULTIPLY_1_OFFSET))(a, b);
		}

		static ::UnityEngine::Color op_Multiply_2(::System::Single b, ::UnityEngine::Color a)
		{
			return ((::UnityEngine::Color(*)(::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_OP_MULTIPLY_2_OFFSET))(b, a);
		}

		static ::UnityEngine::Color op_Division(::UnityEngine::Color a, ::System::Single b)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_OP_DIVISION_OFFSET))(a, b);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Color lhs, ::UnityEngine::Color rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::Color lhs, ::UnityEngine::Color rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		static ::UnityEngine::Color Lerp(::UnityEngine::Color a, ::UnityEngine::Color b, ::System::Single t)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_LERP_OFFSET))(a, b, t);
		}

		static ::UnityEngine::Color LerpUnclamped(::UnityEngine::Color a, ::UnityEngine::Color b, ::System::Single t)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_LERPUNCLAMPED_OFFSET))(a, b, t);
		}

		::UnityEngine::Color RGBMultiplied(::System::Single multiplier)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_RGBMULTIPLIED_OFFSET))(this, multiplier);
		}

		::UnityEngine::Color AlphaMultiplied(::System::Single multiplier)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_ALPHAMULTIPLIED_OFFSET))(this, multiplier);
		}

		::UnityEngine::Color RGBMultiplied_1(::UnityEngine::Color multiplier)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_RGBMULTIPLIED_1_OFFSET))(this, multiplier);
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
		static ::UnityEngine::Vector4 op_Implicit(::UnityEngine::Color c)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_OP_IMPLICIT_OFFSET))(c);
		}
		*/

		/*
		static ::UnityEngine::Color op_Implicit_1(::UnityEngine::Vector4 v)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_OP_IMPLICIT_1_OFFSET))(v);
		}
		*/

		::System::Single get_Item(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_SET_ITEM_OFFSET))(this, index, value);
		}

		static ::System::Void RGBToHSV(::UnityEngine::Color rgbColor, ::System::Single& H, ::System::Single& S, ::System::Single& V)
		{
			return ((::System::Void(*)(::UnityEngine::Color, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_RGBTOHSV_OFFSET))(rgbColor, H, S, V);
		}

		static ::System::Void RGBToHSVHelper(::System::Single offset, ::System::Single dominantcolor, ::System::Single colorone, ::System::Single colortwo, ::System::Single& H, ::System::Single& S, ::System::Single& V)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_RGBTOHSVHELPER_OFFSET))(offset, dominantcolor, colorone, colortwo, H, S, V);
		}

		static ::UnityEngine::Color HSVToRGB(::System::Single H, ::System::Single S, ::System::Single V)
		{
			return ((::UnityEngine::Color(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_HSVTORGB_OFFSET))(H, S, V);
		}

		static ::UnityEngine::Color HSVToRGB_1(::System::Single H, ::System::Single S, ::System::Single V, ::System::Boolean hdr)
		{
			return ((::UnityEngine::Color(*)(::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_HSVTORGB_1_OFFSET))(H, S, V, hdr);
		}
	};
}
