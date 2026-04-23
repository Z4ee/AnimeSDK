#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define TMPRO_TMP_TEXT_TEXTBACKINGCONTAINER_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x16753E0)
#define TMPRO_TMP_TEXT_TEXTBACKINGCONTAINER_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xD240)
#define TMPRO_TMP_TEXT_TEXTBACKINGCONTAINER_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x22DF110)
#define TMPRO_TMP_TEXT_TEXTBACKINGCONTAINER_RESIZE_OFFSET UNITYSDK_OFFSET(0x22DF200)
#define TMPRO_TMP_TEXT_TEXTBACKINGCONTAINER_SET_COUNT_OFFSET UNITYSDK_OFFSET(0xD250)
#define TMPRO_TMP_TEXT_TEXTBACKINGCONTAINER_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x22DF150)
#define TMPRO_TMP_TEXT_TEXTBACKINGCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x22DF1D0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Text_TextBackingContainer_TypeDefinitionIndex = 40215;

	struct alignas(8) TMP_Text_TextBackingContainer
	{
		::Il2CppArray<::System::UInt32>* m_Array; // 0x10
		::System::Int32 m_Count; // 0x18

		::System::Void _ctor(::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXT_TEXTBACKINGCONTAINER__CTOR_OFFSET))(this, size);
		}

		::System::Int32 get_Capacity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXT_TEXTBACKINGCONTAINER_GET_CAPACITY_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXT_TEXTBACKINGCONTAINER_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_Count(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXT_TEXTBACKINGCONTAINER_SET_COUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_Item(::System::Int32 index)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXT_TEXTBACKINGCONTAINER_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXT_TEXTBACKINGCONTAINER_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Void Resize(::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXT_TEXTBACKINGCONTAINER_RESIZE_OFFSET))(this, size);
		}
	};
}
