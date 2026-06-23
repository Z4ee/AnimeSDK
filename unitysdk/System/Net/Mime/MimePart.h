#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Mime/MimeBasePart.h"
#include "unitysdk/System/Net/Mime/TransferEncoding.h"

namespace System { class AsyncCallback; }
namespace System { class Exception; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Net::Mime { class BaseWriter; }
namespace System::Net::Mime { class ContentDisposition; }
namespace System::Net::Mime { class ContentType; }

#define SYSTEM_NET_MIME_MIMEPART_BEGINSEND_OFFSET UNITYSDK_OFFSET(0x1C6D9410)
#define SYSTEM_NET_MIME_MIMEPART_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1C6D83C0)
#define SYSTEM_NET_MIME_MIMEPART_CONTENTSTREAMCALLBACKHANDLER_OFFSET UNITYSDK_OFFSET(0x1C6D8F80)
#define SYSTEM_NET_MIME_MIMEPART_CONTENTSTREAMCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C6D9210)
#define SYSTEM_NET_MIME_MIMEPART_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C6D77C0)
#define SYSTEM_NET_MIME_MIMEPART_GETENCODEDSTREAM_OFFSET UNITYSDK_OFFSET(0x1C6D8E00)
#define SYSTEM_NET_MIME_MIMEPART_GET_CONTENTDISPOSITION_OFFSET UNITYSDK_OFFSET(0x1C6D77F0)
#define SYSTEM_NET_MIME_MIMEPART_GET_STREAM_OFFSET UNITYSDK_OFFSET(0x1C6D77E0)
#define SYSTEM_NET_MIME_MIMEPART_GET_TRANSFERENCODING_OFFSET UNITYSDK_OFFSET(0x1C6D79C0)
#define SYSTEM_NET_MIME_MIMEPART_READCALLBACKHANDLER_OFFSET UNITYSDK_OFFSET(0x1C6D8780)
#define SYSTEM_NET_MIME_MIMEPART_READCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C6D8580)
#define SYSTEM_NET_MIME_MIMEPART_RESETSTREAM_OFFSET UNITYSDK_OFFSET(0x1C6D9640)
#define SYSTEM_NET_MIME_MIMEPART_SEND_OFFSET UNITYSDK_OFFSET(0x1C6D96F0)
#define SYSTEM_NET_MIME_MIMEPART_SETCONTENT_1_OFFSET UNITYSDK_OFFSET(0x1C6D80B0)
#define SYSTEM_NET_MIME_MIMEPART_SETCONTENT_2_OFFSET UNITYSDK_OFFSET(0x1C6D82F0)
#define SYSTEM_NET_MIME_MIMEPART_SETCONTENT_OFFSET UNITYSDK_OFFSET(0x1C6D8010)
#define SYSTEM_NET_MIME_MIMEPART_SET_CONTENTDISPOSITION_OFFSET UNITYSDK_OFFSET(0x1C6D7800)
#define SYSTEM_NET_MIME_MIMEPART_SET_TRANSFERENCODING_OFFSET UNITYSDK_OFFSET(0x1C6D7B70)
#define SYSTEM_NET_MIME_MIMEPART_WRITECALLBACKHANDLER_OFFSET UNITYSDK_OFFSET(0x1C6D89D0)
#define SYSTEM_NET_MIME_MIMEPART_WRITECALLBACK_OFFSET UNITYSDK_OFFSET(0x1C6D8C00)
#define SYSTEM_NET_MIME_MIMEPART__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6D77B0)

namespace System::Net::Mime
{
	inline static constexpr unsigned int MimePart_TypeDefinitionIndex = 3623;

	class MimePart : public ::System::Net::Mime::MimeBasePart
	{
	public:
		// static const ::System::Int32 maxBufferSize = 0x4400; // 0x0
		::System::IO::Stream* stream; // 0x28
		::System::AsyncCallback* writeCallback; // 0x30
		::System::AsyncCallback* readCallback; // 0x38
		::System::Boolean streamSet; // 0x40
		::System::Boolean streamUsedOnce; // 0x41

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEPART__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEPART_DISPOSE_OFFSET))(this);
		}

		::System::IO::Stream* get_Stream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEPART_GET_STREAM_OFFSET))(this);
		}

		::System::Net::Mime::ContentDisposition* get_ContentDisposition()
		{
			return ((::System::Net::Mime::ContentDisposition*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEPART_GET_CONTENTDISPOSITION_OFFSET))(this);
		}

		::System::Void set_ContentDisposition(::System::Net::Mime::ContentDisposition* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mime::ContentDisposition*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEPART_SET_CONTENTDISPOSITION_OFFSET))(this, value);
		}

		::System::Net::Mime::TransferEncoding get_TransferEncoding()
		{
			return ((::System::Net::Mime::TransferEncoding(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEPART_GET_TRANSFERENCODING_OFFSET))(this);
		}

		::System::Void set_TransferEncoding(::System::Net::Mime::TransferEncoding value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mime::TransferEncoding))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEPART_SET_TRANSFERENCODING_OFFSET))(this, value);
		}

		::System::Void SetContent(::System::IO::Stream* stream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEPART_SETCONTENT_OFFSET))(this, stream);
		}

		::System::Void SetContent_1(::System::IO::Stream* stream, ::System::String* name, ::System::String* mimeType)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEPART_SETCONTENT_1_OFFSET))(this, stream, name, mimeType);
		}

		::System::Void SetContent_2(::System::IO::Stream* stream, ::System::Net::Mime::ContentType* contentType)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Net::Mime::ContentType*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEPART_SETCONTENT_2_OFFSET))(this, stream, contentType);
		}

		::System::Void Complete(::System::IAsyncResult* result, ::System::Exception* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEPART_COMPLETE_OFFSET))(this, result, e);
		}

		::System::Void ReadCallback(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEPART_READCALLBACK_OFFSET))(this, result);
		}

		::System::Void ReadCallbackHandler(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEPART_READCALLBACKHANDLER_OFFSET))(this, result);
		}

		::System::Void WriteCallback(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEPART_WRITECALLBACK_OFFSET))(this, result);
		}

		::System::Void WriteCallbackHandler(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEPART_WRITECALLBACKHANDLER_OFFSET))(this, result);
		}

		::System::IO::Stream* GetEncodedStream(::System::IO::Stream* stream)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEPART_GETENCODEDSTREAM_OFFSET))(this, stream);
		}

		::System::Void ContentStreamCallbackHandler(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEPART_CONTENTSTREAMCALLBACKHANDLER_OFFSET))(this, result);
		}

		::System::Void ContentStreamCallback(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEPART_CONTENTSTREAMCALLBACK_OFFSET))(this, result);
		}

		::System::IAsyncResult* BeginSend(::System::Net::Mime::BaseWriter* writer, ::System::AsyncCallback* callback, ::System::Boolean allowUnicode, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Net::Mime::BaseWriter*, ::System::AsyncCallback*, ::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEPART_BEGINSEND_OFFSET))(this, writer, callback, allowUnicode, state);
		}

		::System::Void Send(::System::Net::Mime::BaseWriter* writer, ::System::Boolean allowUnicode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mime::BaseWriter*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEPART_SEND_OFFSET))(this, writer, allowUnicode);
		}

		::System::Void ResetStream()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEPART_RESETSTREAM_OFFSET))(this);
		}
	};
}
