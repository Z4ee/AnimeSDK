#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/InvalidOperationException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_NET_PROTOCOLVIOLATIONEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1DD28A90)
#define SYSTEM_NET_PROTOCOLVIOLATIONEXCEPTION_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1DD28A70)
#define SYSTEM_NET_PROTOCOLVIOLATIONEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DD28990)
#define SYSTEM_NET_PROTOCOLVIOLATIONEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1DD28A20)
#define SYSTEM_NET_PROTOCOLVIOLATIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD288D0)

namespace System::Net
{
	inline static constexpr unsigned int ProtocolViolationException_TypeDefinitionIndex = 3331;

	class ProtocolViolationException : public ::System::InvalidOperationException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_PROTOCOLVIOLATIONEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_PROTOCOLVIOLATIONEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_PROTOCOLVIOLATIONEXCEPTION__CTOR_2_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_PROTOCOLVIOLATIONEXCEPTION_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_PROTOCOLVIOLATIONEXCEPTION_GETOBJECTDATA_OFFSET))(this, serializationInfo, streamingContext);
		}
	};
}
