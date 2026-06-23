#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/ObjectModel/Collection_1.h"

namespace System::Net::Mail { class Attachment; }

#define SYSTEM_NET_MAIL_ATTACHMENTCOLLECTION_CLEARITEMS_OFFSET UNITYSDK_OFFSET(0x1D5D3D50)
#define SYSTEM_NET_MAIL_ATTACHMENTCOLLECTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D5D3CC0)
#define SYSTEM_NET_MAIL_ATTACHMENTCOLLECTION_INSERTITEM_OFFSET UNITYSDK_OFFSET(0x1D5D3D90)
#define SYSTEM_NET_MAIL_ATTACHMENTCOLLECTION_REMOVEITEM_OFFSET UNITYSDK_OFFSET(0x1D5D3DE0)
#define SYSTEM_NET_MAIL_ATTACHMENTCOLLECTION_SETITEM_OFFSET UNITYSDK_OFFSET(0x1D5D3E20)
#define SYSTEM_NET_MAIL_ATTACHMENTCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D3C80)

namespace System::Net::Mail
{
	inline static constexpr unsigned int AttachmentCollection_TypeDefinitionIndex = 3583;

	class AttachmentCollection : public ::System::Collections::ObjectModel::Collection_1<::System::Net::Mail::Attachment*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ATTACHMENTCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ATTACHMENTCOLLECTION_DISPOSE_OFFSET))(this);
		}

		::System::Void ClearItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ATTACHMENTCOLLECTION_CLEARITEMS_OFFSET))(this);
		}

		::System::Void InsertItem(::System::Int32 index, ::System::Net::Mail::Attachment* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Net::Mail::Attachment*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ATTACHMENTCOLLECTION_INSERTITEM_OFFSET))(this, index, item);
		}

		::System::Void RemoveItem(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ATTACHMENTCOLLECTION_REMOVEITEM_OFFSET))(this, index);
		}

		::System::Void SetItem(::System::Int32 index, ::System::Net::Mail::Attachment* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Net::Mail::Attachment*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ATTACHMENTCOLLECTION_SETITEM_OFFSET))(this, index, item);
		}
	};
}
