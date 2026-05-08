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

#define SYSTEM_NET_FTPWEBRESPONSE_CHECKDISPOSED_OFFSET UNITYSDK_OFFSET(0x18FB3F30)
#define SYSTEM_NET_FTPWEBRESPONSE_CLOSE_OFFSET UNITYSDK_OFFSET(0x18FB3CF0)
#define SYSTEM_NET_FTPWEBRESPONSE_GETRESPONSESTREAM_OFFSET UNITYSDK_OFFSET(0x18FB3E60)
#define SYSTEM_NET_FTPWEBRESPONSE_GET_BANNERMESSAGE_OFFSET UNITYSDK_OFFSET(0x18FB3C40)
#define SYSTEM_NET_FTPWEBRESPONSE_GET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x18FB3B30)
#define SYSTEM_NET_FTPWEBRESPONSE_GET_EXITMESSAGE_OFFSET UNITYSDK_OFFSET(0x18FB3C80)
#define SYSTEM_NET_FTPWEBRESPONSE_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x18FB3B40)
#define SYSTEM_NET_FTPWEBRESPONSE_GET_LASTMODIFIED_OFFSET UNITYSDK_OFFSET(0x18FB3C20)
#define SYSTEM_NET_FTPWEBRESPONSE_GET_RESPONSEURI_OFFSET UNITYSDK_OFFSET(0x18FB3C10)
#define SYSTEM_NET_FTPWEBRESPONSE_GET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0x18FB3CA0)
#define SYSTEM_NET_FTPWEBRESPONSE_GET_STATUSDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x18FB3CD0)
#define SYSTEM_NET_FTPWEBRESPONSE_GET_STREAM_OFFSET UNITYSDK_OFFSET(0x18FB3FD0)
#define SYSTEM_NET_FTPWEBRESPONSE_GET_SUPPORTSHEADERS_OFFSET UNITYSDK_OFFSET(0x18FB3CC0)
#define SYSTEM_NET_FTPWEBRESPONSE_GET_WELCOMEMESSAGE_OFFSET UNITYSDK_OFFSET(0x18FB3C60)
#define SYSTEM_NET_FTPWEBRESPONSE_ISFINAL_OFFSET UNITYSDK_OFFSET(0x18FB4010)
#define SYSTEM_NET_FTPWEBRESPONSE_SET_BANNERMESSAGE_OFFSET UNITYSDK_OFFSET(0x18FB3C50)
#define SYSTEM_NET_FTPWEBRESPONSE_SET_EXITMESSAGE_OFFSET UNITYSDK_OFFSET(0x18FB3C90)
#define SYSTEM_NET_FTPWEBRESPONSE_SET_LASTMODIFIED_OFFSET UNITYSDK_OFFSET(0x18FB3C30)
#define SYSTEM_NET_FTPWEBRESPONSE_SET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0x18FB3CB0)
#define SYSTEM_NET_FTPWEBRESPONSE_SET_STATUSDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x18FB3CE0)
#define SYSTEM_NET_FTPWEBRESPONSE_SET_STREAM_OFFSET UNITYSDK_OFFSET(0x18FB3FC0)
#define SYSTEM_NET_FTPWEBRESPONSE_SET_WELCOMEMESSAGE_OFFSET UNITYSDK_OFFSET(0x18FB3C70)
#define SYSTEM_NET_FTPWEBRESPONSE_UPDATESTATUS_OFFSET UNITYSDK_OFFSET(0x18FB3FE0)
#define SYSTEM_NET_FTPWEBRESPONSE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18FB3A70)
#define SYSTEM_NET_FTPWEBRESPONSE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x18FB3AC0)
#define SYSTEM_NET_FTPWEBRESPONSE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x18FB4020)
#define SYSTEM_NET_FTPWEBRESPONSE__CTOR_OFFSET UNITYSDK_OFFSET(0x18FB3A30)

namespace System::Net
{
	inline static constexpr unsigned int FtpWebResponse_TypeDefinitionIndex = 3519;

	class FtpWebResponse : public ::System::Net::WebResponse
	{
	public:
		::System::Uri* uri; // 0x20
		::System::String* bannerMessage; // 0x28
		::System::String* welcomeMessage; // 0x30
		::System::String* statusDescription; // 0x38
		::System::Net::FtpWebRequest* request; // 0x40
		::System::IO::Stream* stream; // 0x48
		::System::String* method; // 0x50
		::System::String* exitMessage; // 0x58
		::System::DateTime lastModified; // 0x60
		::System::Net::FtpStatusCode statusCode; // 0x68
		::System::Boolean disposed; // 0x6C
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

		::System::Void _ctor_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBRESPONSE__CTOR_3_OFFSET))(this);
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

		::System::DateTime get_LastModified()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBRESPONSE_GET_LASTMODIFIED_OFFSET))(this);
		}

		::System::Void set_LastModified(::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBRESPONSE_SET_LASTMODIFIED_OFFSET))(this, value);
		}

		::System::String* get_BannerMessage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBRESPONSE_GET_BANNERMESSAGE_OFFSET))(this);
		}

		::System::Void set_BannerMessage(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBRESPONSE_SET_BANNERMESSAGE_OFFSET))(this, value);
		}

		::System::String* get_WelcomeMessage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBRESPONSE_GET_WELCOMEMESSAGE_OFFSET))(this);
		}

		::System::Void set_WelcomeMessage(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBRESPONSE_SET_WELCOMEMESSAGE_OFFSET))(this, value);
		}

		::System::String* get_ExitMessage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBRESPONSE_GET_EXITMESSAGE_OFFSET))(this);
		}

		::System::Void set_ExitMessage(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBRESPONSE_SET_EXITMESSAGE_OFFSET))(this, value);
		}

		::System::Net::FtpStatusCode get_StatusCode()
		{
			return ((::System::Net::FtpStatusCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBRESPONSE_GET_STATUSCODE_OFFSET))(this);
		}

		::System::Void set_StatusCode(::System::Net::FtpStatusCode value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::FtpStatusCode))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBRESPONSE_SET_STATUSCODE_OFFSET))(this, value);
		}

		::System::Boolean get_SupportsHeaders()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBRESPONSE_GET_SUPPORTSHEADERS_OFFSET))(this);
		}

		::System::String* get_StatusDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBRESPONSE_GET_STATUSDESCRIPTION_OFFSET))(this);
		}

		::System::Void set_StatusDescription(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBRESPONSE_SET_STATUSDESCRIPTION_OFFSET))(this, value);
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

		::System::IO::Stream* get_Stream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBRESPONSE_GET_STREAM_OFFSET))(this);
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
