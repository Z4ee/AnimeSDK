#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System::Runtime::Serialization { class ISurrogateSelector; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_REMOTINGSURROGATE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x163B7540)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_REMOTINGSURROGATE_SETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x163B7730)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_REMOTINGSURROGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x163B7780)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int RemotingSurrogate_TypeDefinitionIndex = 1320;

	class RemotingSurrogate : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_REMOTINGSURROGATE__CTOR_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* si, ::System::Runtime::Serialization::StreamingContext sc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_REMOTINGSURROGATE_GETOBJECTDATA_OFFSET))(this, obj, si, sc);
		}

		::System::Object* SetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* si, ::System::Runtime::Serialization::StreamingContext sc, ::System::Runtime::Serialization::ISurrogateSelector* selector)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::ISurrogateSelector*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_REMOTINGSURROGATE_SETOBJECTDATA_OFFSET))(this, obj, si, sc, selector);
		}
	};
}
