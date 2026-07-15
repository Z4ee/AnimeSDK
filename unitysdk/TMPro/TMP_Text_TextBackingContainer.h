#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define TMPRO_TMP_TEXT_TEXTBACKINGCONTAINER_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x6765A0)
#define TMPRO_TMP_TEXT_TEXTBACKINGCONTAINER_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x676EB0)
#define TMPRO_TMP_TEXT_TEXTBACKINGCONTAINER_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x38C2BE0)
#define TMPRO_TMP_TEXT_TEXTBACKINGCONTAINER_RESIZE_OFFSET UNITYSDK_OFFSET(0x38C2CB0)
#define TMPRO_TMP_TEXT_TEXTBACKINGCONTAINER_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x38C2BD0)
#define TMPRO_TMP_TEXT_TEXTBACKINGCONTAINER_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x38C2C10)
#define TMPRO_TMP_TEXT_TEXTBACKINGCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x38C2C80)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Text_TextBackingContainer_TypeDefinitionIndex = 41857;

	struct alignas(8) TMP_Text_TextBackingContainer
	{
		::Il2CppArray<::System::UInt32>* m_Array; // 0x10
		::System::Int32 m_Count; // 0x18

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXT_TEXTBACKINGCONTAINER__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_Capacity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXT_TEXTBACKINGCONTAINER_GET_CAPACITY_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXT_TEXTBACKINGCONTAINER_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_Count(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXT_TEXTBACKINGCONTAINER_SET_COUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_Item(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXT_TEXTBACKINGCONTAINER_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXT_TEXTBACKINGCONTAINER_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Void Resize(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXT_TEXTBACKINGCONTAINER_RESIZE_OFFSET))(this, a1);
		}
	};
}
