#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MarshalByRefObject.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Uri; }
namespace System::IO { class Stream; }
namespace System::Net { class WebHeaderCollection; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_NET_WEBRESPONSE_CLOSE_OFFSET UNITYSDK_OFFSET(0x1AFCDEE0)
#define SYSTEM_NET_WEBRESPONSE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1AFCDF70)
#define SYSTEM_NET_WEBRESPONSE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AFCDEF0)
#define SYSTEM_NET_WEBRESPONSE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1AFCDED0)
#define SYSTEM_NET_WEBRESPONSE_GETRESPONSESTREAM_OFFSET UNITYSDK_OFFSET(0x1AFCE010)
#define SYSTEM_NET_WEBRESPONSE_GET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x1AFCDFC0)
#define SYSTEM_NET_WEBRESPONSE_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x1AFCE0B0)
#define SYSTEM_NET_WEBRESPONSE_GET_RESPONSEURI_OFFSET UNITYSDK_OFFSET(0x1AFCE060)
#define SYSTEM_NET_WEBRESPONSE_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1AFCDEA0)
#define SYSTEM_NET_WEBRESPONSE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AFCDE90)
#define SYSTEM_NET_WEBRESPONSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFCDE80)

namespace System::Net
{
	inline static constexpr unsigned int WebResponse_TypeDefinitionIndex = 2761;

	class WebResponse : public ::System::MarshalByRefObject
	{
	public:
		::System::Boolean m_IsFromCache; // 0x18
		::System::Boolean m_IsCacheFresh; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSE__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSE_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSE_CLOSE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSE_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Int64 get_ContentLength()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSE_GET_CONTENTLENGTH_OFFSET))(this);
		}

		::System::IO::Stream* GetResponseStream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSE_GETRESPONSESTREAM_OFFSET))(this);
		}

		::System::Uri* get_ResponseUri()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSE_GET_RESPONSEURI_OFFSET))(this);
		}

		::System::Net::WebHeaderCollection* get_Headers()
		{
			return ((::System::Net::WebHeaderCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSE_GET_HEADERS_OFFSET))(this);
		}
	};
}
