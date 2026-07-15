#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DTSubStringType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define SYSTEM_DTSUBSTRING_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x39C7E50)

namespace System
{
	inline static constexpr unsigned int DTSubString_TypeDefinitionIndex = 259;

	struct alignas(8) DTSubString
	{
		::System::String* s; // 0x10
		::System::Int32 index; // 0x18
		::System::Int32 length; // 0x1C
		::System::DTSubStringType type; // 0x20
		::System::Int32 value; // 0x24

		::System::Char get_Item(::System::Int32 a1)
		{
			return ((::System::Char(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DTSUBSTRING_GET_ITEM_OFFSET))(this, a1);
		}
	};
}
