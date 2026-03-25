#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/Win32Exception.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_NET_HTTPLISTENEREXCEPTION_GET_ERRORCODE_OFFSET UNITYSDK_OFFSET(0x186E6AB0)
#define SYSTEM_NET_HTTPLISTENEREXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x186CC210)
#define SYSTEM_NET_HTTPLISTENEREXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x186E69F0)
#define SYSTEM_NET_HTTPLISTENEREXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x186E6900)

namespace System::Net
{
	inline static constexpr unsigned int HttpListenerException_TypeDefinitionIndex = 2721;

	class HttpListenerException : public ::System::ComponentModel::Win32Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENEREXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 errorCode, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENEREXCEPTION__CTOR_1_OFFSET))(this, errorCode, message);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENEREXCEPTION__CTOR_2_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Int32 get_ErrorCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENEREXCEPTION_GET_ERRORCODE_OFFSET))(this);
		}
	};
}
