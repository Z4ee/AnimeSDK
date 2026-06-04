#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/FileAccess.h"
#include "unitysdk/System/Net/CloseExState.h"
#include "unitysdk/System/Net/WebResponse.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Uri; }
namespace System::IO { class Stream; }
namespace System::Net { class FileWebRequest; }
namespace System::Net { class WebHeaderCollection; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_NET_FILEWEBRESPONSE_CHECKDISPOSED_OFFSET UNITYSDK_OFFSET(0x1AF726A0)
#define SYSTEM_NET_FILEWEBRESPONSE_CLOSE_OFFSET UNITYSDK_OFFSET(0x1AF72770)
#define SYSTEM_NET_FILEWEBRESPONSE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1AF72500)
#define SYSTEM_NET_FILEWEBRESPONSE_GETRESPONSESTREAM_OFFSET UNITYSDK_OFFSET(0x1AF72A10)
#define SYSTEM_NET_FILEWEBRESPONSE_GET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x1AF72680)
#define SYSTEM_NET_FILEWEBRESPONSE_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x1AF72730)
#define SYSTEM_NET_FILEWEBRESPONSE_GET_RESPONSEURI_OFFSET UNITYSDK_OFFSET(0x1AF72750)
#define SYSTEM_NET_FILEWEBRESPONSE_SYSTEM_NET_ICLOSEEX_CLOSEEX_OFFSET UNITYSDK_OFFSET(0x1AF72830)
#define SYSTEM_NET_FILEWEBRESPONSE_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1AF724E0)
#define SYSTEM_NET_FILEWEBRESPONSE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AF72390)
#define SYSTEM_NET_FILEWEBRESPONSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF71700)

namespace System::Net
{
	inline static constexpr unsigned int FileWebResponse_TypeDefinitionIndex = 2800;

	class FileWebResponse : public ::System::Net::WebResponse
	{
	public:
		::System::IO::Stream* m_stream; // 0x20
		::System::Net::WebHeaderCollection* m_headers; // 0x28
		::System::Uri* m_uri; // 0x30
		::System::Boolean m_closed; // 0x38
		::System::IO::FileAccess m_fileAccess; // 0x3C
		::System::Int64 m_contentLength; // 0x40

		::System::Void _ctor(::System::Net::FileWebRequest* a1, ::System::Uri* a2, ::System::IO::FileAccess a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::FileWebRequest*, ::System::Uri*, ::System::IO::FileAccess, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBRESPONSE__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBRESPONSE__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBRESPONSE_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBRESPONSE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Int64 get_ContentLength()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBRESPONSE_GET_CONTENTLENGTH_OFFSET))(this);
		}

		::System::Net::WebHeaderCollection* get_Headers()
		{
			return ((::System::Net::WebHeaderCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBRESPONSE_GET_HEADERS_OFFSET))(this);
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

		::System::Void System_Net_ICloseEx_CloseEx(::System::Net::CloseExState a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::CloseExState))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBRESPONSE_SYSTEM_NET_ICLOSEEX_CLOSEEX_OFFSET))(this, a1);
		}

		::System::IO::Stream* GetResponseStream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBRESPONSE_GETRESPONSESTREAM_OFFSET))(this);
		}
	};
}
