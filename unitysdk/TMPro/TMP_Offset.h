#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define TMPRO_TMP_OFFSET_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xAAB720)
#define TMPRO_TMP_OFFSET_EQUALS_OFFSET UNITYSDK_OFFSET(0xAAB6B0)
#define TMPRO_TMP_OFFSET_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xAAB650)
#define TMPRO_TMP_OFFSET_GET_BOTTOM_OFFSET UNITYSDK_OFFSET(0x478130)
#define TMPRO_TMP_OFFSET_GET_HORIZONTAL_OFFSET UNITYSDK_OFFSET(0x324CC0)
#define TMPRO_TMP_OFFSET_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x324CC0)
#define TMPRO_TMP_OFFSET_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x44EB60)
#define TMPRO_TMP_OFFSET_GET_TOP_OFFSET UNITYSDK_OFFSET(0x3D1D70)
#define TMPRO_TMP_OFFSET_GET_VERTICAL_OFFSET UNITYSDK_OFFSET(0x3D1D70)
#define TMPRO_TMP_OFFSET_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1F6A3110)
#define TMPRO_TMP_OFFSET_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1F6A31A0)
#define TMPRO_TMP_OFFSET_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1F6A31E0)
#define TMPRO_TMP_OFFSET_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1F6A3260)
#define TMPRO_TMP_OFFSET_SET_BOTTOM_OFFSET UNITYSDK_OFFSET(0x53D7C0)
#define TMPRO_TMP_OFFSET_SET_HORIZONTAL_OFFSET UNITYSDK_OFFSET(0x66D350)
#define TMPRO_TMP_OFFSET_SET_LEFT_OFFSET UNITYSDK_OFFSET(0x324A50)
#define TMPRO_TMP_OFFSET_SET_RIGHT_OFFSET UNITYSDK_OFFSET(0x5A2BC0)
#define TMPRO_TMP_OFFSET_SET_TOP_OFFSET UNITYSDK_OFFSET(0x5A2BD0)
#define TMPRO_TMP_OFFSET_SET_VERTICAL_OFFSET UNITYSDK_OFFSET(0xAAB640)
#define TMPRO_TMP_OFFSET__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6A33C0)
#define TMPRO_TMP_OFFSET__CTOR_1_OFFSET UNITYSDK_OFFSET(0x882060)
#define TMPRO_TMP_OFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x5E7E90)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Offset_TypeDefinitionIndex = 39769;

	struct alignas(4) TMP_Offset
	{
		static ::TMPro::TMP_Offset* StaticGet_k_ZeroOffset()
		{
			return (::TMPro::TMP_Offset*)Il2CppClass::FromTypeDefinitionIndex(TMP_Offset_TypeDefinitionIndex)->GetStaticField(0x96F0);
		}
		::System::Single m_Left; // 0x10
		::System::Single m_Right; // 0x14
		::System::Single m_Top; // 0x18
		::System::Single m_Bottom; // 0x1C

		::System::Void _ctor(::System::Single left, ::System::Single right, ::System::Single top, ::System::Single bottom)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET__CTOR_OFFSET))(this, left, right, top, bottom);
		}

		::System::Void _ctor_1(::System::Single horizontal, ::System::Single vertical)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET__CTOR_1_OFFSET))(this, horizontal, vertical);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET__CCTOR_OFFSET))();
		}

		::System::Single get_left()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_GET_LEFT_OFFSET))(this);
		}

		::System::Void set_left(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_SET_LEFT_OFFSET))(this, value);
		}

		::System::Single get_right()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_GET_RIGHT_OFFSET))(this);
		}

		::System::Void set_right(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_SET_RIGHT_OFFSET))(this, value);
		}

		::System::Single get_top()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_GET_TOP_OFFSET))(this);
		}

		::System::Void set_top(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_SET_TOP_OFFSET))(this, value);
		}

		::System::Single get_bottom()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_GET_BOTTOM_OFFSET))(this);
		}

		::System::Void set_bottom(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_SET_BOTTOM_OFFSET))(this, value);
		}

		::System::Single get_horizontal()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_GET_HORIZONTAL_OFFSET))(this);
		}

		::System::Void set_horizontal(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_SET_HORIZONTAL_OFFSET))(this, value);
		}

		::System::Single get_vertical()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_GET_VERTICAL_OFFSET))(this);
		}

		::System::Void set_vertical(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_SET_VERTICAL_OFFSET))(this, value);
		}

		static ::TMPro::TMP_Offset get_zero()
		{
			return ((::TMPro::TMP_Offset(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_GET_ZERO_OFFSET))();
		}

		static ::System::Boolean op_Equality(::TMPro::TMP_Offset lhs, ::TMPro::TMP_Offset rhs)
		{
			return ((::System::Boolean(*)(::TMPro::TMP_Offset, ::TMPro::TMP_Offset))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::TMPro::TMP_Offset lhs, ::TMPro::TMP_Offset rhs)
		{
			return ((::System::Boolean(*)(::TMPro::TMP_Offset, ::TMPro::TMP_Offset))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		static ::TMPro::TMP_Offset op_Multiply(::TMPro::TMP_Offset a, ::System::Single b)
		{
			return ((::TMPro::TMP_Offset(*)(::TMPro::TMP_Offset, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_OP_MULTIPLY_OFFSET))(a, b);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::TMPro::TMP_Offset other)
		{
			return ((::System::Boolean(*)(::PVOID, ::TMPro::TMP_Offset))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_EQUALS_1_OFFSET))(this, other);
		}
	};
}
