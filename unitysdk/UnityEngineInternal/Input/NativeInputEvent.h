#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngineInternal/Input/NativeInputEventType.h"

namespace UnityEngineInternal::Input
{
	inline static constexpr unsigned int NativeInputEvent_TypeDefinitionIndex = 28027;

	struct alignas(1) NativeInputEvent
	{
		::UnityEngineInternal::Input::NativeInputEventType type; // 0x10
		::System::UInt16 sizeInBytes; // 0x14
		::System::UInt16 deviceId; // 0x16
		::System::Double time; // 0x18
		::System::Int32 eventId; // 0x20
	};
}
