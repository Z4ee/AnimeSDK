#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::IO { class MemoryStream; }
namespace System::Runtime::Remoting::Messaging { class IMessage; }
namespace System::Runtime::Remoting::Messaging { class IMethodCallMessage; }

#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CADSERIALIZER_DESERIALIZEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A6C0890)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CADSERIALIZER_DESERIALIZEOBJECTSAFE_OFFSET UNITYSDK_OFFSET(0x1A6C0A80)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CADSERIALIZER_DESERIALIZEOBJECT_OFFSET UNITYSDK_OFFSET(0x1A6C0B00)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CADSERIALIZER_SERIALIZEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A6C08E0)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CADSERIALIZER_SERIALIZEOBJECT_OFFSET UNITYSDK_OFFSET(0x1A6C0BB0)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CADSERIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6C0D10)

namespace System::Runtime::Remoting::Channels
{
	inline static constexpr unsigned int CADSerializer_TypeDefinitionIndex = 1300;

	class CADSerializer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CADSERIALIZER__CTOR_OFFSET))(this);
		}

		static ::System::Runtime::Remoting::Messaging::IMessage* DeserializeMessage(::System::IO::MemoryStream* mem, ::System::Runtime::Remoting::Messaging::IMethodCallMessage* msg)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessage*(*)(::System::IO::MemoryStream*, ::System::Runtime::Remoting::Messaging::IMethodCallMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CADSERIALIZER_DESERIALIZEMESSAGE_OFFSET))(mem, msg);
		}

		static ::System::IO::MemoryStream* SerializeMessage(::System::Runtime::Remoting::Messaging::IMessage* msg)
		{
			return ((::System::IO::MemoryStream*(*)(::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CADSERIALIZER_SERIALIZEMESSAGE_OFFSET))(msg);
		}

		static ::System::Object* DeserializeObjectSafe(::Il2CppArray<::System::Byte>* mem)
		{
			return ((::System::Object*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CADSERIALIZER_DESERIALIZEOBJECTSAFE_OFFSET))(mem);
		}

		static ::System::IO::MemoryStream* SerializeObject(::System::Object* obj)
		{
			return ((::System::IO::MemoryStream*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CADSERIALIZER_SERIALIZEOBJECT_OFFSET))(obj);
		}

		static ::System::Object* DeserializeObject(::System::IO::MemoryStream* mem)
		{
			return ((::System::Object*(*)(::System::IO::MemoryStream*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CADSERIALIZER_DESERIALIZEOBJECT_OFFSET))(mem);
		}
	};
}
