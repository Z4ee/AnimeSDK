#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x162CC510)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x162D5260)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x162CAE90)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x162D5120)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventSourceException_TypeDefinitionIndex = 1701;

	class EventSourceException : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEEXCEPTION__CTOR_1_OFFSET))(this, message, innerException);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEEXCEPTION__CTOR_2_OFFSET))(this, info, context);
		}

		::System::Void _ctor_3(::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEEXCEPTION__CTOR_3_OFFSET))(this, innerException);
		}
	};
}
