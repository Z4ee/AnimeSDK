#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace UnityEngine
{
	inline static constexpr unsigned int StreamInClipInfo_TypeDefinitionIndex = 6610;

	struct alignas(8) StreamInClipInfo
	{
		::System::String* Name; // 0x10
		::System::UInt64 Size; // 0x18
		::System::UInt64 Epoch; // 0x20
	};
}
