#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Mime/TransferEncoding.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Net::Mime { class ContentType; }

#define SYSTEM_NET_MAIL_ATTACHMENTBASE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1A254EB0)
#define SYSTEM_NET_MAIL_ATTACHMENTBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A254E90)
#define SYSTEM_NET_MAIL_ATTACHMENTBASE_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x1A254DC0)
#define SYSTEM_NET_MAIL_ATTACHMENTBASE_GET_CONTENTSTREAM_OFFSET UNITYSDK_OFFSET(0x1A254E40)
#define SYSTEM_NET_MAIL_ATTACHMENTBASE_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1A254E50)
#define SYSTEM_NET_MAIL_ATTACHMENTBASE_GET_TRANSFERENCODING_OFFSET UNITYSDK_OFFSET(0x1A254E70)
#define SYSTEM_NET_MAIL_ATTACHMENTBASE_SET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x1A254DD0)
#define SYSTEM_NET_MAIL_ATTACHMENTBASE_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1A254E60)
#define SYSTEM_NET_MAIL_ATTACHMENTBASE_SET_TRANSFERENCODING_OFFSET UNITYSDK_OFFSET(0x1A254E80)
#define SYSTEM_NET_MAIL_ATTACHMENTBASE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A254770)
#define SYSTEM_NET_MAIL_ATTACHMENTBASE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A254860)
#define SYSTEM_NET_MAIL_ATTACHMENTBASE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1A254950)
#define SYSTEM_NET_MAIL_ATTACHMENTBASE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1A254AF0)
#define SYSTEM_NET_MAIL_ATTACHMENTBASE__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1A254C50)
#define SYSTEM_NET_MAIL_ATTACHMENTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A254650)

namespace System::Net::Mail
{
	inline static constexpr unsigned int AttachmentBase_TypeDefinitionIndex = 3582;

	class AttachmentBase : public ::System::Object
	{
	public:
		::System::Net::Mime::ContentType* contentType; // 0x10
		::System::String* id; // 0x18
		::System::IO::Stream* contentStream; // 0x20
		::System::Net::Mime::TransferEncoding transferEncoding; // 0x28

		::System::Void _ctor(::System::IO::Stream* contentStream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ATTACHMENTBASE__CTOR_OFFSET))(this, contentStream);
		}

		::System::Void _ctor_1(::System::IO::Stream* contentStream, ::System::Net::Mime::ContentType* contentType)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Net::Mime::ContentType*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ATTACHMENTBASE__CTOR_1_OFFSET))(this, contentStream, contentType);
		}

		::System::Void _ctor_2(::System::IO::Stream* contentStream, ::System::String* mediaType)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ATTACHMENTBASE__CTOR_2_OFFSET))(this, contentStream, mediaType);
		}

		::System::Void _ctor_3(::System::String* fileName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ATTACHMENTBASE__CTOR_3_OFFSET))(this, fileName);
		}

		::System::Void _ctor_4(::System::String* fileName, ::System::Net::Mime::ContentType* contentType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Net::Mime::ContentType*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ATTACHMENTBASE__CTOR_4_OFFSET))(this, fileName, contentType);
		}

		::System::Void _ctor_5(::System::String* fileName, ::System::String* mediaType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ATTACHMENTBASE__CTOR_5_OFFSET))(this, fileName, mediaType);
		}

		::System::String* get_ContentId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ATTACHMENTBASE_GET_CONTENTID_OFFSET))(this);
		}

		::System::Void set_ContentId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ATTACHMENTBASE_SET_CONTENTID_OFFSET))(this, value);
		}

		::System::IO::Stream* get_ContentStream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ATTACHMENTBASE_GET_CONTENTSTREAM_OFFSET))(this);
		}

		::System::Net::Mime::ContentType* get_ContentType()
		{
			return ((::System::Net::Mime::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ATTACHMENTBASE_GET_CONTENTTYPE_OFFSET))(this);
		}

		::System::Void set_ContentType(::System::Net::Mime::ContentType* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mime::ContentType*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ATTACHMENTBASE_SET_CONTENTTYPE_OFFSET))(this, value);
		}

		::System::Net::Mime::TransferEncoding get_TransferEncoding()
		{
			return ((::System::Net::Mime::TransferEncoding(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ATTACHMENTBASE_GET_TRANSFERENCODING_OFFSET))(this);
		}

		::System::Void set_TransferEncoding(::System::Net::Mime::TransferEncoding value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mime::TransferEncoding))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ATTACHMENTBASE_SET_TRANSFERENCODING_OFFSET))(this, value);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ATTACHMENTBASE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ATTACHMENTBASE_DISPOSE_1_OFFSET))(this, disposing);
		}
	};
}
