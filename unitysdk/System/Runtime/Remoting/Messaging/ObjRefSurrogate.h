#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System::Runtime::Serialization { class ISurrogateSelector; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_OBJREFSURROGATE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1BDE9870)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_OBJREFSURROGATE_SETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1BDE9A10)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_OBJREFSURROGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDE9A60)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int ObjRefSurrogate_TypeDefinitionIndex = 1331;

	class ObjRefSurrogate : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_OBJREFSURROGATE__CTOR_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Object* a1, ::System::Runtime::Serialization::SerializationInfo* a2, ::System::Runtime::Serialization::StreamingContext a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_OBJREFSURROGATE_GETOBJECTDATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* SetObjectData(::System::Object* a1, ::System::Runtime::Serialization::SerializationInfo* a2, ::System::Runtime::Serialization::StreamingContext a3, ::System::Runtime::Serialization::ISurrogateSelector* a4)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::ISurrogateSelector*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_OBJREFSURROGATE_SETOBJECTDATA_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
