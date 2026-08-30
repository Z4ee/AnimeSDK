#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System::Runtime::Serialization { class SerializationInfo; }

namespace System
{
	inline static constexpr unsigned int WeakReference_1_TypeDefinitionIndex = 456;

	template <typename T>
	class WeakReference_1 : public ::System::Object
	{
	public:
		::System::Runtime::InteropServices::GCHandle handle; // 0x0
		::System::Boolean trackResurrection; // 0x0
	};
}
