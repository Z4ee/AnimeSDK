#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/FileAccess.h"
#include "unitysdk/System/Net/CloseExState.h"
#include "unitysdk/System/Net/WebResponse.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::IO { class Stream; }
namespace System::Net { class FileWebRequest; }
namespace System::Net { class WebHeaderCollection; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_NET_FILEWEBRESPONSE_CHECKDISPOSED_OFFSET UNITYSDK_OFFSET(0x1C6D5690)
#define SYSTEM_NET_FILEWEBRESPONSE_CLOSE_OFFSET UNITYSDK_OFFSET(0x1C6D57B0)
#define SYSTEM_NET_FILEWEBRESPONSE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1C6D54C0)
#define SYSTEM_NET_FILEWEBRESPONSE_GETRESPONSESTREAM_OFFSET UNITYSDK_OFFSET(0x1C6D59D0)
#define SYSTEM_NET_FILEWEBRESPONSE_GET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x1C6D5670)
#define SYSTEM_NET_FILEWEBRESPONSE_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1C6D5720)
#define SYSTEM_NET_FILEWEBRESPONSE_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x1C6D5760)
#define SYSTEM_NET_FILEWEBRESPONSE_GET_RESPONSEURI_OFFSET UNITYSDK_OFFSET(0x1C6D5790)
#define SYSTEM_NET_FILEWEBRESPONSE_GET_SUPPORTSHEADERS_OFFSET UNITYSDK_OFFSET(0x1C6D5780)
#define SYSTEM_NET_FILEWEBRESPONSE_SYSTEM_NET_ICLOSEEX_CLOSEEX_OFFSET UNITYSDK_OFFSET(0x1C6D5870)
#define SYSTEM_NET_FILEWEBRESPONSE_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1C6D54A0)
#define SYSTEM_NET_FILEWEBRESPONSE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C6D52F0)
#define SYSTEM_NET_FILEWEBRESPONSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6D4F70)

namespace System::Net
{
	inline static constexpr unsigned int FileWebResponse_TypeDefinitionIndex = 3430;

	class FileWebResponse : public ::System::Net::WebResponse
	{
	public:
		// static const ::System::Int32 DefaultFileStreamBufferSize = 0x2000; // 0x0
		// static const ::System::String* DefaultFileContentType; // 0x0
		::System::Uri* m_uri; // 0x20
		::System::Net::WebHeaderCollection* m_headers; // 0x28
		::System::IO::Stream* m_stream; // 0x30
		::System::Int64 m_contentLength; // 0x38
		::System::IO::FileAccess m_fileAccess; // 0x40
		::System::Boolean m_closed; // 0x44

		::System::Void _ctor(::System::Net::FileWebRequest* request, ::System::Uri* uri, ::System::IO::FileAccess access, ::System::Boolean asyncHint)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::FileWebRequest*, ::System::Uri*, ::System::IO::FileAccess, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBRESPONSE__CTOR_OFFSET))(this, request, uri, access, asyncHint);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBRESPONSE__CTOR_1_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBRESPONSE_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBRESPONSE_GETOBJECTDATA_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Int64 get_ContentLength()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBRESPONSE_GET_CONTENTLENGTH_OFFSET))(this);
		}

		::System::String* get_ContentType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBRESPONSE_GET_CONTENTTYPE_OFFSET))(this);
		}

		::System::Net::WebHeaderCollection* get_Headers()
		{
			return ((::System::Net::WebHeaderCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBRESPONSE_GET_HEADERS_OFFSET))(this);
		}

		::System::Boolean get_SupportsHeaders()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBRESPONSE_GET_SUPPORTSHEADERS_OFFSET))(this);
		}

		::System::Uri* get_ResponseUri()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBRESPONSE_GET_RESPONSEURI_OFFSET))(this);
		}

		::System::Void CheckDisposed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBRESPONSE_CHECKDISPOSED_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBRESPONSE_CLOSE_OFFSET))(this);
		}

		::System::Void System_Net_ICloseEx_CloseEx(::System::Net::CloseExState closeState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::CloseExState))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBRESPONSE_SYSTEM_NET_ICLOSEEX_CLOSEEX_OFFSET))(this, closeState);
		}

		::System::IO::Stream* GetResponseStream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBRESPONSE_GETRESPONSESTREAM_OFFSET))(this);
		}
	};
}
