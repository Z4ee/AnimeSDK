#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace Utf8Json::Internal
{
	inline static constexpr unsigned int ByteArrayStringHashTable_1_Entry_TypeDefinitionIndex = 85660;

	template <typename T>
	struct ByteArrayStringHashTable_1_Entry
	{
		::Il2CppArray<::System::Byte>* Key; // 0x0
		T Value; // 0x0
	};
}
