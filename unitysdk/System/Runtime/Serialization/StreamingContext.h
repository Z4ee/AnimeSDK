#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContextStates.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT_EQUALS_OFFSET UNITYSDK_OFFSET(0x20DA8D0)
#define SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xD250)
#define SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x5580)
#define SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT_GET_STATE_OFFSET UNITYSDK_OFFSET(0xD250)
#define SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1594CC0)
#define SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x20DA8C0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int StreamingContext_TypeDefinitionIndex = 1124;

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

		::System::Object* get_Context()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT_GET_CONTEXT_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT_GETHASHCODE_OFFSET))(this);
		}

		::System::Runtime::Serialization::StreamingContextStates get_State()
		{
			return ((::System::Runtime::Serialization::StreamingContextStates(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT_GET_STATE_OFFSET))(this);
		}
	};
}
