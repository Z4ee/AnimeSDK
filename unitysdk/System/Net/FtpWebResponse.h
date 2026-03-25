#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Net/FtpStatusCode.h"
#include "unitysdk/System/Net/WebResponse.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::IO { class Stream; }
namespace System::Net { class FtpStatus; }
namespace System::Net { class FtpWebRequest; }
namespace System::Net { class WebHeaderCollection; }

#define SYSTEM_NET_FTPWEBRESPONSE_CHECKDISPOSED_OFFSET UNITYSDK_OFFSET(0x186DC210)
#define SYSTEM_NET_FTPWEBRESPONSE_CLOSE_OFFSET UNITYSDK_OFFSET(0x186DC000)
#define SYSTEM_NET_FTPWEBRESPONSE_GETRESPONSESTREAM_OFFSET UNITYSDK_OFFSET(0x186DC140)
#define SYSTEM_NET_FTPWEBRESPONSE_GET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x186DBF40)
#define SYSTEM_NET_FTPWEBRESPONSE_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x186DBF50)
#define SYSTEM_NET_FTPWEBRESPONSE_GET_RESPONSEURI_OFFSET UNITYSDK_OFFSET(0x186DBFB0)
#define SYSTEM_NET_FTPWEBRESPONSE_ISFINAL_OFFSET UNITYSDK_OFFSET(0x186D8360)
#define SYSTEM_NET_FTPWEBRESPONSE_SET_BANNERMESSAGE_OFFSET UNITYSDK_OFFSET(0x186DBFD0)
#define SYSTEM_NET_FTPWEBRESPONSE_SET_LASTMODIFIED_OFFSET UNITYSDK_OFFSET(0x186DBFC0)
#define SYSTEM_NET_FTPWEBRESPONSE_SET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0x186DBFF0)
#define SYSTEM_NET_FTPWEBRESPONSE_SET_STREAM_OFFSET UNITYSDK_OFFSET(0x186DC2A0)
#define SYSTEM_NET_FTPWEBRESPONSE_SET_WELCOMEMESSAGE_OFFSET UNITYSDK_OFFSET(0x186DBFE0)
#define SYSTEM_NET_FTPWEBRESPONSE_UPDATESTATUS_OFFSET UNITYSDK_OFFSET(0x186D74B0)
#define SYSTEM_NET_FTPWEBRESPONSE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x186D67C0)
#define SYSTEM_NET_FTPWEBRESPONSE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x186DB560)
#define SYSTEM_NET_FTPWEBRESPONSE__CTOR_OFFSET UNITYSDK_OFFSET(0x186D7800)

namespace System::Net
{
	inline static constexpr unsigned int FtpWebResponse_TypeDefinitionIndex = 2833;

	class FtpWebResponse : public ::System::Net::WebResponse
	{
	public:
		::System::String* exitMessage; // 0x20
		::System::IO::Stream* stream; // 0x28
		::System::String* bannerMessage; // 0x30
		::System::String* method; // 0x38
		::System::String* statusDescription; // 0x40
		::System::String* welcomeMessage; // 0x48
		::System::Net::FtpWebRequest* request; // 0x50
		::System::Uri* uri; // 0x58
		::System::Boolean disposed; // 0x60
		::System::Net::FtpStatusCode statusCode; // 0x64
		::System::DateTime lastModified; // 0x68
		::System::Int64 contentLength; // 0x70

		::System::Void _ctor(::System::Net::FtpWebRequest* request, ::System::Uri* uri, ::System::String* method, ::System::Boolean keepAlive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::FtpWebRequest*, ::System::Uri*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBRESPONSE__CTOR_OFFSET))(this, request, uri, method, keepAlive);
		}

		::System::Void _ctor_1(::System::Net::FtpWebRequest* request, ::System::Uri* uri, ::System::String* method, ::System::Net::FtpStatusCode statusCode, ::System::String* statusDescription)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::FtpWebRequest*, ::System::Uri*, ::System::String*, ::System::Net::FtpStatusCode, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBRESPONSE__CTOR_1_OFFSET))(this, request, uri, method, statusCode, statusDescription);
		}

		::System::Void _ctor_2(::System::Net::FtpWebRequest* request, ::System::Uri* uri, ::System::String* method, ::System::Net::FtpStatus* status)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::FtpWebRequest*, ::System::Uri*, ::System::String*, ::System::Net::FtpStatus*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBRESPONSE__CTOR_2_OFFSET))(this, request, uri, method, status);
		}

		::System::Int64 get_ContentLength()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBRESPONSE_GET_CONTENTLENGTH_OFFSET))(this);
		}

		::System::Net::WebHeaderCollection* get_Headers()
		{
			return ((::System::Net::WebHeaderCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBRESPONSE_GET_HEADERS_OFFSET))(this);
		}

		::System::Uri* get_ResponseUri()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBRESPONSE_GET_RESPONSEURI_OFFSET))(this);
		}

		::System::Void set_LastModified(::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBRESPONSE_SET_LASTMODIFIED_OFFSET))(this, value);
		}

		::System::Void set_BannerMessage(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBRESPONSE_SET_BANNERMESSAGE_OFFSET))(this, value);
		}

		::System::Void set_WelcomeMessage(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBRESPONSE_SET_WELCOMEMESSAGE_OFFSET))(this, value);
		}

		::System::Void set_StatusCode(::System::Net::FtpStatusCode value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::FtpStatusCode))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBRESPONSE_SET_STATUSCODE_OFFSET))(this, value);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBRESPONSE_CLOSE_OFFSET))(this);
		}

		::System::IO::Stream* GetResponseStream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBRESPONSE_GETRESPONSESTREAM_OFFSET))(this);
		}

		::System::Void set_Stream(::System::IO::Stream* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBRESPONSE_SET_STREAM_OFFSET))(this, value);
		}

		::System::Void UpdateStatus(::System::Net::FtpStatus* status)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::FtpStatus*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBRESPONSE_UPDATESTATUS_OFFSET))(this, status);
		}

		::System::Void CheckDisposed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBRESPONSE_CHECKDISPOSED_OFFSET))(this);
		}

		::System::Boolean IsFinal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBRESPONSE_ISFINAL_OFFSET))(this);
		}
	};
}
