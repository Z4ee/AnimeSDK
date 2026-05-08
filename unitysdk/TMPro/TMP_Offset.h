#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define TMPRO_TMP_OFFSET_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9BC430)
#define TMPRO_TMP_OFFSET_EQUALS_OFFSET UNITYSDK_OFFSET(0x9BC3C0)
#define TMPRO_TMP_OFFSET_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9BC360)
#define TMPRO_TMP_OFFSET_GET_BOTTOM_OFFSET UNITYSDK_OFFSET(0x43E9B0)
#define TMPRO_TMP_OFFSET_GET_HORIZONTAL_OFFSET UNITYSDK_OFFSET(0x2E7F50)
#define TMPRO_TMP_OFFSET_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x2E7F50)
#define TMPRO_TMP_OFFSET_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x3AA590)
#define TMPRO_TMP_OFFSET_GET_TOP_OFFSET UNITYSDK_OFFSET(0x3AB430)
#define TMPRO_TMP_OFFSET_GET_VERTICAL_OFFSET UNITYSDK_OFFSET(0x3AB430)
#define TMPRO_TMP_OFFSET_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1BF4AAF0)
#define TMPRO_TMP_OFFSET_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1BF4AB80)
#define TMPRO_TMP_OFFSET_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1BF4ABC0)
#define TMPRO_TMP_OFFSET_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1BF4AC40)
#define TMPRO_TMP_OFFSET_SET_BOTTOM_OFFSET UNITYSDK_OFFSET(0x469DB0)
#define TMPRO_TMP_OFFSET_SET_HORIZONTAL_OFFSET UNITYSDK_OFFSET(0x3E8610)
#define TMPRO_TMP_OFFSET_SET_LEFT_OFFSET UNITYSDK_OFFSET(0x2E7CE0)
#define TMPRO_TMP_OFFSET_SET_RIGHT_OFFSET UNITYSDK_OFFSET(0x50C880)
#define TMPRO_TMP_OFFSET_SET_TOP_OFFSET UNITYSDK_OFFSET(0x50C890)
#define TMPRO_TMP_OFFSET_SET_VERTICAL_OFFSET UNITYSDK_OFFSET(0x9BC340)
#define TMPRO_TMP_OFFSET__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF4ADA0)
#define TMPRO_TMP_OFFSET__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9BC350)
#define TMPRO_TMP_OFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x41FAF0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Offset_TypeDefinitionIndex = 37477;

	struct alignas(4) TMP_Offset
	{
		static ::TMPro::TMP_Offset* StaticGet_k_ZeroOffset()
		{
			return (::TMPro::TMP_Offset*)Il2CppClass::FromTypeDefinitionIndex(TMP_Offset_TypeDefinitionIndex)->GetStaticField(0x90F0);
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
