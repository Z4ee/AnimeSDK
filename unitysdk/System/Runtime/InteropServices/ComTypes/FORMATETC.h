#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/InteropServices/ComTypes/DVASPECT.h"
#include "unitysdk/System/Runtime/InteropServices/ComTypes/TYMED.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::InteropServices::ComTypes
{
	inline static constexpr unsigned int FORMATETC_TypeDefinitionIndex = 3128;

	struct alignas(8) FORMATETC
	{
		::System::Int16 cfFormat; // 0x10
		::System::Runtime::InteropServices::ComTypes::DVASPECT dwAspect; // 0x14
		::System::Int32 lindex; // 0x18
		::System::IntPtr ptd; // 0x20
		::System::Runtime::InteropServices::ComTypes::TYMED tymed; // 0x28
	};
}
