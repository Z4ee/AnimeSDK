#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/Win32Exception.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_NET_HTTPLISTENEREXCEPTION_GET_ERRORCODE_OFFSET UNITYSDK_OFFSET(0x1BED15B0)
#define SYSTEM_NET_HTTPLISTENEREXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BED1370)
#define SYSTEM_NET_HTTPLISTENEREXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1BED13D0)
#define SYSTEM_NET_HTTPLISTENEREXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1BED14D0)
#define SYSTEM_NET_HTTPLISTENEREXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BED12C0)

namespace System::Net
{
	inline static constexpr unsigned int HttpListenerException_TypeDefinitionIndex = 3274;

	class HttpListenerException : public ::System::ComponentModel::Win32Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENEREXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 errorCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENEREXCEPTION__CTOR_1_OFFSET))(this, errorCode);
		}

		::System::Void _ctor_2(::System::Int32 errorCode, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENEREXCEPTION__CTOR_2_OFFSET))(this, errorCode, message);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENEREXCEPTION__CTOR_3_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Int32 get_ErrorCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENEREXCEPTION_GET_ERRORCODE_OFFSET))(this);
		}
	};
}
