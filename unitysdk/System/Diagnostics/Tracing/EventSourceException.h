#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x186B0A90)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x186B8510)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x186AF390)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x186B83D0)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventSourceException_TypeDefinitionIndex = 1700;

	class EventSourceException : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEEXCEPTION__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEEXCEPTION__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEEXCEPTION__CTOR_3_OFFSET))(this, a1);
		}
	};
}
