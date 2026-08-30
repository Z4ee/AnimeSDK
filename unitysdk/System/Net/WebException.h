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

#define SYSTEM_NET_WEBEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1B985940)
#define SYSTEM_NET_WEBEXCEPTION_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1B985970)
#define SYSTEM_NET_WEBEXCEPTION_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1B985960)
#define SYSTEM_NET_WEBEXCEPTION_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1B985920)
#define SYSTEM_NET_WEBEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B9854D0)
#define SYSTEM_NET_WEBEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B985550)
#define SYSTEM_NET_WEBEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1B97E590)
#define SYSTEM_NET_WEBEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1B984C50)
#define SYSTEM_NET_WEBEXCEPTION__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1B97CD70)
#define SYSTEM_NET_WEBEXCEPTION__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1B9856B0)
#define SYSTEM_NET_WEBEXCEPTION__CTOR_7_OFFSET UNITYSDK_OFFSET(0x1B9855D0)
#define SYSTEM_NET_WEBEXCEPTION__CTOR_8_OFFSET UNITYSDK_OFFSET(0x1B9857B0)
#define SYSTEM_NET_WEBEXCEPTION__CTOR_9_OFFSET UNITYSDK_OFFSET(0x1B9858C0)
#define SYSTEM_NET_WEBEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B985420)

namespace System::Net
{
	inline static constexpr unsigned int WebException_TypeDefinitionIndex = 2758;

	class WebException : public ::System::InvalidOperationException
	{
	public:
		::System::Net::WebResponse* m_Response; // 0x88
		::System::Net::WebExceptionStatus m_Status; // 0x90
		::System::Net::WebExceptionInternalStatus m_InternalStatus; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTION__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTION__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::String* a1, ::System::Net::WebExceptionStatus a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Net::WebExceptionStatus))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTION__CTOR_3_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_4(::System::String* a1, ::System::Net::WebExceptionStatus a2, ::System::Net::WebExceptionInternalStatus a3, ::System::Exception* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Net::WebExceptionStatus, ::System::Net::WebExceptionInternalStatus, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTION__CTOR_4_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_5(::System::String* a1, ::System::Exception* a2, ::System::Net::WebExceptionStatus a3, ::System::Net::WebResponse* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*, ::System::Net::WebExceptionStatus, ::System::Net::WebResponse*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTION__CTOR_5_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_6(::System::String* a1, ::System::String* a2, ::System::Exception* a3, ::System::Net::WebExceptionStatus a4, ::System::Net::WebResponse* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Exception*, ::System::Net::WebExceptionStatus, ::System::Net::WebResponse*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTION__CTOR_6_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_7(::System::String* a1, ::System::Exception* a2, ::System::Net::WebExceptionStatus a3, ::System::Net::WebResponse* a4, ::System::Net::WebExceptionInternalStatus a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*, ::System::Net::WebExceptionStatus, ::System::Net::WebResponse*, ::System::Net::WebExceptionInternalStatus))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTION__CTOR_7_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_8(::System::String* a1, ::System::String* a2, ::System::Exception* a3, ::System::Net::WebExceptionStatus a4, ::System::Net::WebResponse* a5, ::System::Net::WebExceptionInternalStatus a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Exception*, ::System::Net::WebExceptionStatus, ::System::Net::WebResponse*, ::System::Net::WebExceptionInternalStatus))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTION__CTOR_8_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _ctor_9(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTION__CTOR_9_OFFSET))(this, a1, a2);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTION_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTION_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Net::WebExceptionStatus get_Status()
		{
			return ((::System::Net::WebExceptionStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTION_GET_STATUS_OFFSET))(this);
		}

		::System::Net::WebResponse* get_Response()
		{
			return ((::System::Net::WebResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTION_GET_RESPONSE_OFFSET))(this);
		}
	};
}
