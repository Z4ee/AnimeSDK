#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/InteropServices/ComTypes/ADVF.h"
#include "unitysdk/System/Runtime/InteropServices/ComTypes/FORMATETC.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::InteropServices::ComTypes { class IAdviseSink; }

namespace System::Runtime::InteropServices::ComTypes
{
	inline static constexpr unsigned int STATDATA_TypeDefinitionIndex = 3133;

	struct alignas(8) STATDATA
	{
		::System::Runtime::InteropServices::ComTypes::ADVF advf; // 0x10
		::System::Runtime::InteropServices::ComTypes::IAdviseSink* advSink; // 0x18
		::System::Int32 connection; // 0x20
		::System::Runtime::InteropServices::ComTypes::FORMATETC formatetc; // 0x28
	};
}
