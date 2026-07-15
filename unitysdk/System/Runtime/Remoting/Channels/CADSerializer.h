#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::IO { class MemoryStream; }
namespace System::Runtime::Remoting::Messaging { class IMessage; }
namespace System::Runtime::Remoting::Messaging { class IMethodCallMessage; }

#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CADSERIALIZER_DESERIALIZEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A82CB20)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CADSERIALIZER_DESERIALIZEOBJECTSAFE_OFFSET UNITYSDK_OFFSET(0x1A82CCB0)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CADSERIALIZER_DESERIALIZEOBJECT_OFFSET UNITYSDK_OFFSET(0x1A82CD80)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CADSERIALIZER_SERIALIZEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A82CB70)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CADSERIALIZER_SERIALIZEOBJECT_OFFSET UNITYSDK_OFFSET(0x1A82CE60)

namespace System::Runtime::Remoting::Channels
{
	inline static constexpr unsigned int CADSerializer_TypeDefinitionIndex = 1260;

	class CADSerializer : public ::System::Object
	{
	public:
		static ::System::Runtime::Remoting::Messaging::IMessage* DeserializeMessage(::System::IO::MemoryStream* a1, ::System::Runtime::Remoting::Messaging::IMethodCallMessage* a2)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessage*(*)(::System::IO::MemoryStream*, ::System::Runtime::Remoting::Messaging::IMethodCallMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CADSERIALIZER_DESERIALIZEMESSAGE_OFFSET))(a1, a2);
		}

		static ::System::IO::MemoryStream* SerializeMessage(::System::Runtime::Remoting::Messaging::IMessage* a1)
		{
			return ((::System::IO::MemoryStream*(*)(::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CADSERIALIZER_SERIALIZEMESSAGE_OFFSET))(a1);
		}

		static ::System::Object* DeserializeObjectSafe(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Object*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CADSERIALIZER_DESERIALIZEOBJECTSAFE_OFFSET))(a1);
		}

		static ::System::IO::MemoryStream* SerializeObject(::System::Object* a1)
		{
			return ((::System::IO::MemoryStream*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CADSERIALIZER_SERIALIZEOBJECT_OFFSET))(a1);
		}

		static ::System::Object* DeserializeObject(::System::IO::MemoryStream* a1)
		{
			return ((::System::Object*(*)(::System::IO::MemoryStream*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CADSERIALIZER_DESERIALIZEOBJECT_OFFSET))(a1);
		}
	};
}
