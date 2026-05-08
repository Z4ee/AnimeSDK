#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Mime/MimeBasePart.h"
#include "unitysdk/System/Net/Mime/MimeMultiPartType.h"

namespace System { class AsyncCallback; }
namespace System { class Exception; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::ObjectModel { template <typename T> class Collection_1; }
namespace System::Net::Mime { class BaseWriter; }

#define SYSTEM_NET_MIME_MIMEMULTIPART_BEGINSEND_OFFSET UNITYSDK_OFFSET(0x19A6A850)
#define SYSTEM_NET_MIME_MIMEMULTIPART_COMPLETE_OFFSET UNITYSDK_OFFSET(0x19A69450)
#define SYSTEM_NET_MIME_MIMEMULTIPART_CONTENTSTREAMCALLBACKHANDLER_OFFSET UNITYSDK_OFFSET(0x19A6A2B0)
#define SYSTEM_NET_MIME_MIMEMULTIPART_CONTENTSTREAMCALLBACK_OFFSET UNITYSDK_OFFSET(0x19A6A0B0)
#define SYSTEM_NET_MIME_MIMEMULTIPART_GETNEXTBOUNDARY_OFFSET UNITYSDK_OFFSET(0x19A69340)
#define SYSTEM_NET_MIME_MIMEMULTIPART_GET_PARTS_OFFSET UNITYSDK_OFFSET(0x19A693E0)
#define SYSTEM_NET_MIME_MIMEMULTIPART_MIMEPARTSENTCALLBACKHANDLER_OFFSET UNITYSDK_OFFSET(0x19A69B80)
#define SYSTEM_NET_MIME_MIMEMULTIPART_MIMEPARTSENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x19A69980)
#define SYSTEM_NET_MIME_MIMEMULTIPART_MIMEWRITERCLOSECALLBACKHANDLER_OFFSET UNITYSDK_OFFSET(0x19A69800)
#define SYSTEM_NET_MIME_MIMEMULTIPART_MIMEWRITERCLOSECALLBACK_OFFSET UNITYSDK_OFFSET(0x19A69610)
#define SYSTEM_NET_MIME_MIMEMULTIPART_SEND_OFFSET UNITYSDK_OFFSET(0x19A6AAC0)
#define SYSTEM_NET_MIME_MIMEMULTIPART_SETTYPE_OFFSET UNITYSDK_OFFSET(0x19A690F0)
#define SYSTEM_NET_MIME_MIMEMULTIPART_SET_MIMEMULTIPARTTYPE_OFFSET UNITYSDK_OFFSET(0x19A69040)
#define SYSTEM_NET_MIME_MIMEMULTIPART__CTOR_OFFSET UNITYSDK_OFFSET(0x19A69030)

namespace System::Net::Mime
{
	inline static constexpr unsigned int MimeMultiPart_TypeDefinitionIndex = 3621;

	class MimeMultiPart : public ::System::Net::Mime::MimeBasePart
	{
	public:
		static ::System::Int32* StaticGet_boundary()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MimeMultiPart_TypeDefinitionIndex)->GetStaticField(0x13E0);
		}
		::System::Collections::ObjectModel::Collection_1<::System::Net::Mime::MimeBasePart*>* parts; // 0x28
		::System::AsyncCallback* mimePartSentCallback; // 0x30
		::System::Boolean allowUnicode; // 0x38

		::System::Void _ctor(::System::Net::Mime::MimeMultiPartType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mime::MimeMultiPartType))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEMULTIPART__CTOR_OFFSET))(this, type);
		}

		::System::Void set_MimeMultiPartType(::System::Net::Mime::MimeMultiPartType value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mime::MimeMultiPartType))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEMULTIPART_SET_MIMEMULTIPARTTYPE_OFFSET))(this, value);
		}

		::System::Void SetType(::System::Net::Mime::MimeMultiPartType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mime::MimeMultiPartType))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEMULTIPART_SETTYPE_OFFSET))(this, type);
		}

		::System::Collections::ObjectModel::Collection_1<::System::Net::Mime::MimeBasePart*>* get_Parts()
		{
			return ((::System::Collections::ObjectModel::Collection_1<::System::Net::Mime::MimeBasePart*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEMULTIPART_GET_PARTS_OFFSET))(this);
		}

		::System::Void Complete(::System::IAsyncResult* result, ::System::Exception* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEMULTIPART_COMPLETE_OFFSET))(this, result, e);
		}

		::System::Void MimeWriterCloseCallback(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEMULTIPART_MIMEWRITERCLOSECALLBACK_OFFSET))(this, result);
		}

		::System::Void MimeWriterCloseCallbackHandler(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEMULTIPART_MIMEWRITERCLOSECALLBACKHANDLER_OFFSET))(this, result);
		}

		::System::Void MimePartSentCallback(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEMULTIPART_MIMEPARTSENTCALLBACK_OFFSET))(this, result);
		}

		::System::Void MimePartSentCallbackHandler(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEMULTIPART_MIMEPARTSENTCALLBACKHANDLER_OFFSET))(this, result);
		}

		::System::Void ContentStreamCallback(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEMULTIPART_CONTENTSTREAMCALLBACK_OFFSET))(this, result);
		}

		::System::Void ContentStreamCallbackHandler(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEMULTIPART_CONTENTSTREAMCALLBACKHANDLER_OFFSET))(this, result);
		}

		::System::IAsyncResult* BeginSend(::System::Net::Mime::BaseWriter* writer, ::System::AsyncCallback* callback, ::System::Boolean allowUnicode, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Net::Mime::BaseWriter*, ::System::AsyncCallback*, ::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEMULTIPART_BEGINSEND_OFFSET))(this, writer, callback, allowUnicode, state);
		}

		::System::Void Send(::System::Net::Mime::BaseWriter* writer, ::System::Boolean allowUnicode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mime::BaseWriter*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEMULTIPART_SEND_OFFSET))(this, writer, allowUnicode);
		}

		::System::String* GetNextBoundary()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEMULTIPART_GETNEXTBOUNDARY_OFFSET))(this);
		}
	};
}
