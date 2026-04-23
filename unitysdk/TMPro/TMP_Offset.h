#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define TMPRO_TMP_OFFSET_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x22DEF90)
#define TMPRO_TMP_OFFSET_EQUALS_OFFSET UNITYSDK_OFFSET(0x22DEF50)
#define TMPRO_TMP_OFFSET_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x22DEF10)
#define TMPRO_TMP_OFFSET_GET_BOTTOM_OFFSET UNITYSDK_OFFSET(0xCCB0)
#define TMPRO_TMP_OFFSET_GET_HORIZONTAL_OFFSET UNITYSDK_OFFSET(0xCC50)
#define TMPRO_TMP_OFFSET_GET_LEFT_OFFSET UNITYSDK_OFFSET(0xCC50)
#define TMPRO_TMP_OFFSET_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0xCC70)
#define TMPRO_TMP_OFFSET_GET_TOP_OFFSET UNITYSDK_OFFSET(0xCC90)
#define TMPRO_TMP_OFFSET_GET_VERTICAL_OFFSET UNITYSDK_OFFSET(0xCC90)
#define TMPRO_TMP_OFFSET_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1A378AD0)
#define TMPRO_TMP_OFFSET_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1A33DF50)
#define TMPRO_TMP_OFFSET_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1A378B40)
#define TMPRO_TMP_OFFSET_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1A378B90)
#define TMPRO_TMP_OFFSET_SET_BOTTOM_OFFSET UNITYSDK_OFFSET(0xCCC0)
#define TMPRO_TMP_OFFSET_SET_HORIZONTAL_OFFSET UNITYSDK_OFFSET(0x22DEEE0)
#define TMPRO_TMP_OFFSET_SET_LEFT_OFFSET UNITYSDK_OFFSET(0xCC60)
#define TMPRO_TMP_OFFSET_SET_RIGHT_OFFSET UNITYSDK_OFFSET(0xCC80)
#define TMPRO_TMP_OFFSET_SET_TOP_OFFSET UNITYSDK_OFFSET(0xCCA0)
#define TMPRO_TMP_OFFSET_SET_VERTICAL_OFFSET UNITYSDK_OFFSET(0x22DEEF0)
#define TMPRO_TMP_OFFSET__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A378C90)
#define TMPRO_TMP_OFFSET__CTOR_1_OFFSET UNITYSDK_OFFSET(0x22DEF00)
#define TMPRO_TMP_OFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x24C30)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Offset_TypeDefinitionIndex = 40098;

	struct alignas(4) TMP_Offset
	{
		static ::TMPro::TMP_Offset* StaticGet_k_ZeroOffset()
		{
			return (::TMPro::TMP_Offset*)Il2CppClass::FromTypeDefinitionIndex(TMP_Offset_TypeDefinitionIndex)->GetStaticField(0xC4B0);
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
