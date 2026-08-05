#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System { class EventArgs; }
namespace System { class EventHandler; }
namespace System { class IAsyncResult; }
namespace System { class String; }
namespace System::Collections::Specialized { class NameValueCollection; }
namespace System::IO { class Stream; }
namespace System::Net::Mail { class BufferBuilder; }
namespace System::Net::Mime { class MultiAsyncResult; }

#define SYSTEM_NET_MIME_BASEWRITER_BEGINGETCONTENTSTREAM_OFFSET UNITYSDK_OFFSET(0x1DEC33A0)
#define SYSTEM_NET_MIME_BASEWRITER_CHECKBOUNDARY_OFFSET UNITYSDK_OFFSET(0x1DEC3920)
#define SYSTEM_NET_MIME_BASEWRITER_ENDGETCONTENTSTREAM_OFFSET UNITYSDK_OFFSET(0x1DEC35B0)
#define SYSTEM_NET_MIME_BASEWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x1DEC3100)
#define SYSTEM_NET_MIME_BASEWRITER_GETCONTENTSTREAM_1_OFFSET UNITYSDK_OFFSET(0x1DEC2FB0)
#define SYSTEM_NET_MIME_BASEWRITER_GETCONTENTSTREAM_OFFSET UNITYSDK_OFFSET(0x1DEC2FA0)
#define SYSTEM_NET_MIME_BASEWRITER_ONWRITE_OFFSET UNITYSDK_OFFSET(0x1DEC3660)
#define SYSTEM_NET_MIME_BASEWRITER_WRITEANDFOLD_OFFSET UNITYSDK_OFFSET(0x1DEC2C90)
#define SYSTEM_NET_MIME_BASEWRITER_WRITEHEADER_OFFSET UNITYSDK_OFFSET(0x1DEC2AD0)
#define SYSTEM_NET_MIME_BASEWRITER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEC3930)
#define SYSTEM_NET_MIME_BASEWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC2970)

namespace System::Net::Mime
{
	inline static constexpr unsigned int BaseWriter_TypeDefinitionIndex = 3608;

	class BaseWriter : public ::System::Object
	{
	public:
		static ::System::AsyncCallback** StaticGet_onWrite()
		{
			return (::System::AsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(BaseWriter_TypeDefinitionIndex)->GetStaticField(0x27B0);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_CRLF()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(BaseWriter_TypeDefinitionIndex)->GetStaticField(0x27B8);
		}
		static ::System::Int32* StaticGet_DefaultLineLength()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BaseWriter_TypeDefinitionIndex)->GetStaticField(0x1020);
		}
		::System::IO::Stream* contentStream; // 0x10
		::System::IO::Stream* stream; // 0x18
		::System::Net::Mail::BufferBuilder* bufferBuilder; // 0x20
		::System::EventHandler* onCloseHandler; // 0x28
		::System::Int32 lineLength; // 0x30
		::System::Boolean isInContent; // 0x34
		::System::Boolean shouldEncodeLeadingDots; // 0x35

		::System::Void _ctor(::System::IO::Stream* stream, ::System::Boolean shouldEncodeLeadingDots)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_BASEWRITER__CTOR_OFFSET))(this, stream, shouldEncodeLeadingDots);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_BASEWRITER__CCTOR_OFFSET))();
		}

		::System::Void WriteHeader(::System::String* name, ::System::String* value, ::System::Boolean allowUnicode)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_BASEWRITER_WRITEHEADER_OFFSET))(this, name, value, allowUnicode);
		}

		::System::Void WriteAndFold(::System::String* value, ::System::Int32 charsAlreadyOnLine, ::System::Boolean allowUnicode)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_BASEWRITER_WRITEANDFOLD_OFFSET))(this, value, charsAlreadyOnLine, allowUnicode);
		}

		::System::IO::Stream* GetContentStream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_BASEWRITER_GETCONTENTSTREAM_OFFSET))(this);
		}

		::System::IO::Stream* GetContentStream_1(::System::Net::Mime::MultiAsyncResult* multiResult)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::Net::Mime::MultiAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_BASEWRITER_GETCONTENTSTREAM_1_OFFSET))(this, multiResult);
		}

		::System::IAsyncResult* BeginGetContentStream(::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_BASEWRITER_BEGINGETCONTENTSTREAM_OFFSET))(this, callback, state);
		}

		::System::IO::Stream* EndGetContentStream(::System::IAsyncResult* result)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_BASEWRITER_ENDGETCONTENTSTREAM_OFFSET))(this, result);
		}

		::System::Void Flush(::System::Net::Mime::MultiAsyncResult* multiResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mime::MultiAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_BASEWRITER_FLUSH_OFFSET))(this, multiResult);
		}

		static ::System::Void OnWrite(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_BASEWRITER_ONWRITE_OFFSET))(result);
		}

		::System::Void CheckBoundary()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_BASEWRITER_CHECKBOUNDARY_OFFSET))(this);
		}
	};
}
