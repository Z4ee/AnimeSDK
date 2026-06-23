#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MarshalByRefObject.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::IO { class Stream; }
namespace System::Net { class WebHeaderCollection; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_NET_WEBRESPONSE_CLOSE_OFFSET UNITYSDK_OFFSET(0x1D5D89D0)
#define SYSTEM_NET_WEBRESPONSE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1D5D8A90)
#define SYSTEM_NET_WEBRESPONSE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D5D89E0)
#define SYSTEM_NET_WEBRESPONSE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1D5D89C0)
#define SYSTEM_NET_WEBRESPONSE_GETRESPONSESTREAM_OFFSET UNITYSDK_OFFSET(0x1D5D8C70)
#define SYSTEM_NET_WEBRESPONSE_GET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x1D5D8B30)
#define SYSTEM_NET_WEBRESPONSE_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1D5D8BD0)
#define SYSTEM_NET_WEBRESPONSE_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x1D5D8D10)
#define SYSTEM_NET_WEBRESPONSE_GET_ISCACHEFRESH_OFFSET UNITYSDK_OFFSET(0x1D5D8B00)
#define SYSTEM_NET_WEBRESPONSE_GET_ISFROMCACHE_OFFSET UNITYSDK_OFFSET(0x1D5D8AE0)
#define SYSTEM_NET_WEBRESPONSE_GET_ISMUTUALLYAUTHENTICATED_OFFSET UNITYSDK_OFFSET(0x1D5D8B20)
#define SYSTEM_NET_WEBRESPONSE_GET_RESPONSEURI_OFFSET UNITYSDK_OFFSET(0x1D5D8CC0)
#define SYSTEM_NET_WEBRESPONSE_GET_SUPPORTSHEADERS_OFFSET UNITYSDK_OFFSET(0x1D5D8D60)
#define SYSTEM_NET_WEBRESPONSE_SET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x1D5D8B80)
#define SYSTEM_NET_WEBRESPONSE_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1D5D8C20)
#define SYSTEM_NET_WEBRESPONSE_SET_INTERNALSETFROMCACHE_OFFSET UNITYSDK_OFFSET(0x1D5D8AF0)
#define SYSTEM_NET_WEBRESPONSE_SET_INTERNALSETISCACHEFRESH_OFFSET UNITYSDK_OFFSET(0x1D5D8B10)
#define SYSTEM_NET_WEBRESPONSE_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1D5D8990)
#define SYSTEM_NET_WEBRESPONSE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D5D8980)
#define SYSTEM_NET_WEBRESPONSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D8970)

namespace System::Net
{
	inline static constexpr unsigned int WebResponse_TypeDefinitionIndex = 3359;

	class WebResponse : public ::System::MarshalByRefObject
	{
	public:
		::System::Boolean m_IsCacheFresh; // 0x18
		::System::Boolean m_IsFromCache; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSE__CTOR_1_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSE_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSE_GETOBJECTDATA_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSE_CLOSE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSE_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Boolean get_IsFromCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSE_GET_ISFROMCACHE_OFFSET))(this);
		}

		::System::Void set_InternalSetFromCache(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSE_SET_INTERNALSETFROMCACHE_OFFSET))(this, value);
		}

		::System::Boolean get_IsCacheFresh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSE_GET_ISCACHEFRESH_OFFSET))(this);
		}

		::System::Void set_InternalSetIsCacheFresh(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSE_SET_INTERNALSETISCACHEFRESH_OFFSET))(this, value);
		}

		::System::Boolean get_IsMutuallyAuthenticated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSE_GET_ISMUTUALLYAUTHENTICATED_OFFSET))(this);
		}

		::System::Int64 get_ContentLength()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSE_GET_CONTENTLENGTH_OFFSET))(this);
		}

		::System::Void set_ContentLength(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSE_SET_CONTENTLENGTH_OFFSET))(this, value);
		}

		::System::String* get_ContentType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSE_GET_CONTENTTYPE_OFFSET))(this);
		}

		::System::Void set_ContentType(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSE_SET_CONTENTTYPE_OFFSET))(this, value);
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

		::System::Boolean get_SupportsHeaders()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSE_GET_SUPPORTSHEADERS_OFFSET))(this);
		}
	};
}
