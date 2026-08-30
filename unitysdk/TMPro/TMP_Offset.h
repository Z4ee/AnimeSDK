#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define TMPRO_TMP_OFFSET_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3AE9600)
#define TMPRO_TMP_OFFSET_EQUALS_OFFSET UNITYSDK_OFFSET(0x3AE95C0)
#define TMPRO_TMP_OFFSET_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3AE9580)
#define TMPRO_TMP_OFFSET_GET_BOTTOM_OFFSET UNITYSDK_OFFSET(0xB5A7F0)
#define TMPRO_TMP_OFFSET_GET_HORIZONTAL_OFFSET UNITYSDK_OFFSET(0x213E0)
#define TMPRO_TMP_OFFSET_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x213E0)
#define TMPRO_TMP_OFFSET_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x784700)
#define TMPRO_TMP_OFFSET_GET_TOP_OFFSET UNITYSDK_OFFSET(0xB5A200)
#define TMPRO_TMP_OFFSET_GET_VERTICAL_OFFSET UNITYSDK_OFFSET(0xB5A200)
#define TMPRO_TMP_OFFSET_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x18B5BDC0)
#define TMPRO_TMP_OFFSET_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x18B244D0)
#define TMPRO_TMP_OFFSET_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x18B5BE30)
#define TMPRO_TMP_OFFSET_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x18B5BE80)
#define TMPRO_TMP_OFFSET_SET_BOTTOM_OFFSET UNITYSDK_OFFSET(0x3A546C0)
#define TMPRO_TMP_OFFSET_SET_HORIZONTAL_OFFSET UNITYSDK_OFFSET(0x3AE9550)
#define TMPRO_TMP_OFFSET_SET_LEFT_OFFSET UNITYSDK_OFFSET(0x21240)
#define TMPRO_TMP_OFFSET_SET_RIGHT_OFFSET UNITYSDK_OFFSET(0x3A545E0)
#define TMPRO_TMP_OFFSET_SET_TOP_OFFSET UNITYSDK_OFFSET(0x3A546B0)
#define TMPRO_TMP_OFFSET_SET_VERTICAL_OFFSET UNITYSDK_OFFSET(0x3AE9560)
#define TMPRO_TMP_OFFSET__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B5BF80)
#define TMPRO_TMP_OFFSET__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3AE9570)
#define TMPRO_TMP_OFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x82E380)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Offset_TypeDefinitionIndex = 43351;

	struct alignas(4) TMP_Offset
	{
		static ::TMPro::TMP_Offset* StaticGet_k_ZeroOffset()
		{
			return (::TMPro::TMP_Offset*)Il2CppClass::FromTypeDefinitionIndex(TMP_Offset_TypeDefinitionIndex)->GetStaticField(0x1BA0);
		}
		::System::Single m_Left; // 0x10
		::System::Single m_Right; // 0x14
		::System::Single m_Top; // 0x18
		::System::Single m_Bottom; // 0x1C

		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET__CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET__CCTOR_OFFSET))();
		}

		::System::Single get_left()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_GET_LEFT_OFFSET))(this);
		}

		::System::Void set_left(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_SET_LEFT_OFFSET))(this, a1);
		}

		::System::Single get_right()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_GET_RIGHT_OFFSET))(this);
		}

		::System::Void set_right(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_SET_RIGHT_OFFSET))(this, a1);
		}

		::System::Single get_top()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_GET_TOP_OFFSET))(this);
		}

		::System::Void set_top(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_SET_TOP_OFFSET))(this, a1);
		}

		::System::Single get_bottom()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_GET_BOTTOM_OFFSET))(this);
		}

		::System::Void set_bottom(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_SET_BOTTOM_OFFSET))(this, a1);
		}

		::System::Single get_horizontal()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_GET_HORIZONTAL_OFFSET))(this);
		}

		::System::Void set_horizontal(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_SET_HORIZONTAL_OFFSET))(this, a1);
		}

		::System::Single get_vertical()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_GET_VERTICAL_OFFSET))(this);
		}

		::System::Void set_vertical(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_SET_VERTICAL_OFFSET))(this, a1);
		}

		static ::TMPro::TMP_Offset get_zero()
		{
			return ((::TMPro::TMP_Offset(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_GET_ZERO_OFFSET))();
		}

		static ::System::Boolean op_Equality(::TMPro::TMP_Offset a1, ::TMPro::TMP_Offset a2)
		{
			return ((::System::Boolean(*)(::TMPro::TMP_Offset, ::TMPro::TMP_Offset))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::TMPro::TMP_Offset a1, ::TMPro::TMP_Offset a2)
		{
			return ((::System::Boolean(*)(::TMPro::TMP_Offset, ::TMPro::TMP_Offset))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::TMPro::TMP_Offset op_Multiply(::TMPro::TMP_Offset a1, ::System::Single a2)
		{
			return ((::TMPro::TMP_Offset(*)(::TMPro::TMP_Offset, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_OP_MULTIPLY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::TMPro::TMP_Offset a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::TMPro::TMP_Offset))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_EQUALS_1_OFFSET))(this, a1);
		}
	};
}
