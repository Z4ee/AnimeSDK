#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine
{
	inline static constexpr unsigned int TouchScreenKeyboard_InternalConstructorHelperArguments_TypeDefinitionIndex = 4383;

	struct alignas(4) TouchScreenKeyboard_InternalConstructorHelperArguments
	{
		::System::UInt32 keyboardType; // 0x10
		::System::UInt32 autocorrection; // 0x14
		::System::UInt32 multiline; // 0x18
		::System::UInt32 secure; // 0x1C
		::System::UInt32 alert; // 0x20
		::System::Int32 characterLimit; // 0x24
	};
}
