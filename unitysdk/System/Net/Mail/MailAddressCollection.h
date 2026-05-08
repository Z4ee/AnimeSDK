#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/ObjectModel/Collection_1.h"

namespace System { class String; }
namespace System::Net::Mail { class MailAddress; }

#define SYSTEM_NET_MAIL_MAILADDRESSCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1921F690)
#define SYSTEM_NET_MAIL_MAILADDRESSCOLLECTION_INSERTITEM_OFFSET UNITYSDK_OFFSET(0x1921F7B0)
#define SYSTEM_NET_MAIL_MAILADDRESSCOLLECTION_SETITEM_OFFSET UNITYSDK_OFFSET(0x1921F830)
#define SYSTEM_NET_MAIL_MAILADDRESSCOLLECTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1921F8B0)
#define SYSTEM_NET_MAIL_MAILADDRESSCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1921FB50)

namespace System::Net::Mail
{
	inline static constexpr unsigned int MailAddressCollection_TypeDefinitionIndex = 3589;

	class MailAddressCollection : public ::System::Collections::ObjectModel::Collection_1<::System::Net::Mail::MailAddress*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILADDRESSCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void Add(::System::String* addresses)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILADDRESSCOLLECTION_ADD_OFFSET))(this, addresses);
		}

		::System::Void InsertItem(::System::Int32 index, ::System::Net::Mail::MailAddress* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Net::Mail::MailAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILADDRESSCOLLECTION_INSERTITEM_OFFSET))(this, index, item);
		}

		::System::Void SetItem(::System::Int32 index, ::System::Net::Mail::MailAddress* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Net::Mail::MailAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILADDRESSCOLLECTION_SETITEM_OFFSET))(this, index, item);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILADDRESSCOLLECTION_TOSTRING_OFFSET))(this);
		}
	};
}
