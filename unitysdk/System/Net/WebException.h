#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/InvalidOperationException.h"
#include "unitysdk/System/Net/WebExceptionInternalStatus.h"
#include "unitysdk/System/Net/WebExceptionStatus.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Net { class WebResponse; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_NET_WEBEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1B7730C0)
#define SYSTEM_NET_WEBEXCEPTION_GET_INTERNALSTATUS_OFFSET UNITYSDK_OFFSET(0x1B773100)
#define SYSTEM_NET_WEBEXCEPTION_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1B7730F0)
#define SYSTEM_NET_WEBEXCEPTION_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1B7730E0)
#define SYSTEM_NET_WEBEXCEPTION_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1B7730A0)
#define SYSTEM_NET_WEBEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B772B90)
#define SYSTEM_NET_WEBEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B772C30)
#define SYSTEM_NET_WEBEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1B76D960)
#define SYSTEM_NET_WEBEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1B772720)
#define SYSTEM_NET_WEBEXCEPTION__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1B76C3B0)
#define SYSTEM_NET_WEBEXCEPTION__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1B772DF0)
#define SYSTEM_NET_WEBEXCEPTION__CTOR_7_OFFSET UNITYSDK_OFFSET(0x1B772CD0)
#define SYSTEM_NET_WEBEXCEPTION__CTOR_8_OFFSET UNITYSDK_OFFSET(0x1B772F10)
#define SYSTEM_NET_WEBEXCEPTION__CTOR_9_OFFSET UNITYSDK_OFFSET(0x1B773040)
#define SYSTEM_NET_WEBEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B772AC0)

namespace System::Net
{
	inline static constexpr unsigned int WebException_TypeDefinitionIndex = 3336;

	class WebException : public ::System::InvalidOperationException
	{
	public:
		::System::Net::WebResponse* m_Response; // 0x88
		::System::Net::WebExceptionInternalStatus m_InternalStatus; // 0x90
		::System::Net::WebExceptionStatus m_Status; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::String* message, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTION__CTOR_2_OFFSET))(this, message, innerException);
		}

		::System::Void _ctor_3(::System::String* message, ::System::Net::WebExceptionStatus status)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Net::WebExceptionStatus))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTION__CTOR_3_OFFSET))(this, message, status);
		}

		::System::Void _ctor_4(::System::String* message, ::System::Net::WebExceptionStatus status, ::System::Net::WebExceptionInternalStatus internalStatus, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Net::WebExceptionStatus, ::System::Net::WebExceptionInternalStatus, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTION__CTOR_4_OFFSET))(this, message, status, internalStatus, innerException);
		}

		::System::Void _ctor_5(::System::String* message, ::System::Exception* innerException, ::System::Net::WebExceptionStatus status, ::System::Net::WebResponse* response)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*, ::System::Net::WebExceptionStatus, ::System::Net::WebResponse*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTION__CTOR_5_OFFSET))(this, message, innerException, status, response);
		}

		::System::Void _ctor_6(::System::String* message, ::System::String* data, ::System::Exception* innerException, ::System::Net::WebExceptionStatus status, ::System::Net::WebResponse* response)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Exception*, ::System::Net::WebExceptionStatus, ::System::Net::WebResponse*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTION__CTOR_6_OFFSET))(this, message, data, innerException, status, response);
		}

		::System::Void _ctor_7(::System::String* message, ::System::Exception* innerException, ::System::Net::WebExceptionStatus status, ::System::Net::WebResponse* response, ::System::Net::WebExceptionInternalStatus internalStatus)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*, ::System::Net::WebExceptionStatus, ::System::Net::WebResponse*, ::System::Net::WebExceptionInternalStatus))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTION__CTOR_7_OFFSET))(this, message, innerException, status, response, internalStatus);
		}

		::System::Void _ctor_8(::System::String* message, ::System::String* data, ::System::Exception* innerException, ::System::Net::WebExceptionStatus status, ::System::Net::WebResponse* response, ::System::Net::WebExceptionInternalStatus internalStatus)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Exception*, ::System::Net::WebExceptionStatus, ::System::Net::WebResponse*, ::System::Net::WebExceptionInternalStatus))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTION__CTOR_8_OFFSET))(this, message, data, innerException, status, response, internalStatus);
		}

		::System::Void _ctor_9(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTION__CTOR_9_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTION_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTION_GETOBJECTDATA_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Net::WebExceptionStatus get_Status()
		{
			return ((::System::Net::WebExceptionStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTION_GET_STATUS_OFFSET))(this);
		}

		::System::Net::WebResponse* get_Response()
		{
			return ((::System::Net::WebResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTION_GET_RESPONSE_OFFSET))(this);
		}

		::System::Net::WebExceptionInternalStatus get_InternalStatus()
		{
			return ((::System::Net::WebExceptionInternalStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTION_GET_INTERNALSTATUS_OFFSET))(this);
		}
	};
}
