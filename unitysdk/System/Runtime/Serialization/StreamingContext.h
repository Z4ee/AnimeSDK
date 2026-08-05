#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContextStates.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT_EQUALS_OFFSET UNITYSDK_OFFSET(0xA1B9D0)
#define SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x32EEE0)
#define SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x351440)
#define SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA1B9C0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int StreamingContext_TypeDefinitionIndex = 1173;

	struct alignas(8) StreamingContext
	{
		::System::Object* m_additionalContext; // 0x10
		::System::Runtime::Serialization::StreamingContextStates m_state; // 0x18

		::System::Void _ctor(::System::Runtime::Serialization::StreamingContextStates state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContextStates))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT__CTOR_OFFSET))(this, state);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::StreamingContextStates state, ::System::Object* additional)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContextStates, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT__CTOR_1_OFFSET))(this, state, additional);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT_GETHASHCODE_OFFSET))(this);
		}
	};
}
