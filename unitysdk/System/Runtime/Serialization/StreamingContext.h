#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContextStates.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT_EQUALS_OFFSET UNITYSDK_OFFSET(0x397BE90)
#define SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x676EB0)
#define SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1651A0)
#define SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT_GET_STATE_OFFSET UNITYSDK_OFFSET(0x676EB0)
#define SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x6E5850)
#define SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x397BE80)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int StreamingContext_TypeDefinitionIndex = 1127;

	struct alignas(8) StreamingContext
	{
		::System::Object* m_additionalContext; // 0x10
		::System::Runtime::Serialization::StreamingContextStates m_state; // 0x18

		::System::Void _ctor(::System::Runtime::Serialization::StreamingContextStates a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContextStates))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::StreamingContextStates a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContextStates, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Object* get_Context()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT_GET_CONTEXT_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT_EQUALS_OFFSET))(this, a1);
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
