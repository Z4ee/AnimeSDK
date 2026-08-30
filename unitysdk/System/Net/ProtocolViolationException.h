#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/InvalidOperationException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_NET_PROTOCOLVIOLATIONEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1B04E540)
#define SYSTEM_NET_PROTOCOLVIOLATIONEXCEPTION_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1B04E520)
#define SYSTEM_NET_PROTOCOLVIOLATIONEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B01A580)
#define SYSTEM_NET_PROTOCOLVIOLATIONEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B04E4D0)
#define SYSTEM_NET_PROTOCOLVIOLATIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B01F250)

namespace System::Net
{
	inline static constexpr unsigned int ProtocolViolationException_TypeDefinitionIndex = 2755;

	class ProtocolViolationException : public ::System::InvalidOperationException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_PROTOCOLVIOLATIONEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_PROTOCOLVIOLATIONEXCEPTION__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_PROTOCOLVIOLATIONEXCEPTION__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_PROTOCOLVIOLATIONEXCEPTION_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_PROTOCOLVIOLATIONEXCEPTION_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}
	};
}
