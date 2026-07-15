#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int StandaloneWebResources_IndexEntry_TypeDefinitionIndex = 37408;

	struct alignas(8) StandaloneWebResources_IndexEntry
	{
		::System::String* name; // 0x10
		::System::Int64 offset; // 0x18
		::System::Int32 length; // 0x20
	};
}
