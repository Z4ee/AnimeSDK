#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class Hashtable; }

#define SYSTEM_NET_MAIL_ATTACHMENTBASE_MIMETYPES_GETMIMETYPE_OFFSET UNITYSDK_OFFSET(0x19AF9A20)
#define SYSTEM_NET_MAIL_ATTACHMENTBASE_MIMETYPES__CCTOR_OFFSET UNITYSDK_OFFSET(0x19AF3E20)
#define SYSTEM_NET_MAIL_ATTACHMENTBASE_MIMETYPES__CTOR_OFFSET UNITYSDK_OFFSET(0x19AF9B00)

namespace System::Net::Mail
{
	inline static constexpr unsigned int AttachmentBase_MimeTypes_TypeDefinitionIndex = 3583;

	class AttachmentBase_MimeTypes : public ::System::Object
	{
	public:
		static ::System::Collections::Hashtable** StaticGet_mimeTypes()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(AttachmentBase_MimeTypes_TypeDefinitionIndex)->GetStaticField(0x2EB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ATTACHMENTBASE_MIMETYPES__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ATTACHMENTBASE_MIMETYPES__CTOR_OFFSET))(this);
		}

		static ::System::String* GetMimeType(::System::String* fileName)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ATTACHMENTBASE_MIMETYPES_GETMIMETYPE_OFFSET))(fileName);
		}
	};
}
