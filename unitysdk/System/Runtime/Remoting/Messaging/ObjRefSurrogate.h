#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System::Runtime::Serialization { class ISurrogateSelector; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_OBJREFSURROGATE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1C1AD5D0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_OBJREFSURROGATE_SETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1C1AD720)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_OBJREFSURROGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1AD770)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int ObjRefSurrogate_TypeDefinitionIndex = 1364;

	class ObjRefSurrogate : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_OBJREFSURROGATE__CTOR_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* si, ::System::Runtime::Serialization::StreamingContext sc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_OBJREFSURROGATE_GETOBJECTDATA_OFFSET))(this, obj, si, sc);
		}

		::System::Object* SetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* si, ::System::Runtime::Serialization::StreamingContext sc, ::System::Runtime::Serialization::ISurrogateSelector* selector)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::ISurrogateSelector*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_OBJREFSURROGATE_SETOBJECTDATA_OFFSET))(this, obj, si, sc, selector);
		}
	};
}
