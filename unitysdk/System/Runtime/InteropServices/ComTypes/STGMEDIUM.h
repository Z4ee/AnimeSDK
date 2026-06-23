#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/InteropServices/ComTypes/TYMED.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace System::Runtime::InteropServices::ComTypes
{
	inline static constexpr unsigned int STGMEDIUM_TypeDefinitionIndex = 3134;

	struct alignas(8) STGMEDIUM
	{
		::System::Object* pUnkForRelease; // 0x10
		::System::Runtime::InteropServices::ComTypes::TYMED tymed; // 0x18
		::System::IntPtr unionmember; // 0x20
	};
}
