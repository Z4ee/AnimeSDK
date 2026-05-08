#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Mime/BaseWriter.h"

namespace System { class AsyncCallback; }
namespace System { class EventArgs; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Specialized { class NameValueCollection; }
namespace System::IO { class Stream; }
namespace System::Net::Mime { class MultiAsyncResult; }

#define SYSTEM_NET_MIME_MIMEWRITER_BEGINCLOSE_OFFSET UNITYSDK_OFFSET(0x1AFE4030)
#define SYSTEM_NET_MIME_MIMEWRITER_CHECKBOUNDARY_OFFSET UNITYSDK_OFFSET(0x1AFE4410)
#define SYSTEM_NET_MIME_MIMEWRITER_CLOSE_1_OFFSET UNITYSDK_OFFSET(0x1AFE4180)
#define SYSTEM_NET_MIME_MIMEWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1AFE4380)
#define SYSTEM_NET_MIME_MIMEWRITER_ENDCLOSE_OFFSET UNITYSDK_OFFSET(0x1AFE4340)
#define SYSTEM_NET_MIME_MIMEWRITER_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1AFE43C0)
#define SYSTEM_NET_MIME_MIMEWRITER_WRITEHEADERS_OFFSET UNITYSDK_OFFSET(0x1AFE3D20)
#define SYSTEM_NET_MIME_MIMEWRITER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AFE4580)
#define SYSTEM_NET_MIME_MIMEWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFE3BA0)

namespace System::Net::Mime
{
	inline static constexpr unsigned int MimeWriter_TypeDefinitionIndex = 3626;

	class MimeWriter : public ::System::Net::Mime::BaseWriter
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_DASHDASH()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(MimeWriter_TypeDefinitionIndex)->GetStaticField(0x31B0);
		}
		::Il2CppArray<::System::Byte>* boundaryBytes; // 0x38
		::System::Boolean writeBoundary; // 0x40

		::System::Void _ctor(::System::IO::Stream* stream, ::System::String* boundary)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEWRITER__CTOR_OFFSET))(this, stream, boundary);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEWRITER__CCTOR_OFFSET))();
		}

		::System::Void WriteHeaders(::System::Collections::Specialized::NameValueCollection* headers, ::System::Boolean allowUnicode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NameValueCollection*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEWRITER_WRITEHEADERS_OFFSET))(this, headers, allowUnicode);
		}

		::System::IAsyncResult* BeginClose(::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEWRITER_BEGINCLOSE_OFFSET))(this, callback, state);
		}

		::System::Void EndClose(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEWRITER_ENDCLOSE_OFFSET))(this, result);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEWRITER_CLOSE_OFFSET))(this);
		}

		::System::Void Close_1(::System::Net::Mime::MultiAsyncResult* multiResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mime::MultiAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEWRITER_CLOSE_1_OFFSET))(this, multiResult);
		}

		::System::Void OnClose(::System::Object* sender, ::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEWRITER_ONCLOSE_OFFSET))(this, sender, args);
		}

		::System::Void CheckBoundary()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEWRITER_CHECKBOUNDARY_OFFSET))(this);
		}
	};
}
