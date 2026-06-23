#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/ObjectModel/Collection_1.h"

namespace System::Net::Mail { class AlternateView; }

#define SYSTEM_NET_MAIL_ALTERNATEVIEWCOLLECTION_CLEARITEMS_OFFSET UNITYSDK_OFFSET(0x1C07D380)
#define SYSTEM_NET_MAIL_ALTERNATEVIEWCOLLECTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C07D370)
#define SYSTEM_NET_MAIL_ALTERNATEVIEWCOLLECTION_INSERTITEM_OFFSET UNITYSDK_OFFSET(0x1C07D3C0)
#define SYSTEM_NET_MAIL_ALTERNATEVIEWCOLLECTION_REMOVEITEM_OFFSET UNITYSDK_OFFSET(0x1C07D410)
#define SYSTEM_NET_MAIL_ALTERNATEVIEWCOLLECTION_SETITEM_OFFSET UNITYSDK_OFFSET(0x1C07D450)
#define SYSTEM_NET_MAIL_ALTERNATEVIEWCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C07D330)

namespace System::Net::Mail
{
	inline static constexpr unsigned int AlternateViewCollection_TypeDefinitionIndex = 3579;

	class AlternateViewCollection : public ::System::Collections::ObjectModel::Collection_1<::System::Net::Mail::AlternateView*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ALTERNATEVIEWCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ALTERNATEVIEWCOLLECTION_DISPOSE_OFFSET))(this);
		}

		::System::Void ClearItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ALTERNATEVIEWCOLLECTION_CLEARITEMS_OFFSET))(this);
		}

		::System::Void InsertItem(::System::Int32 index, ::System::Net::Mail::AlternateView* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Net::Mail::AlternateView*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ALTERNATEVIEWCOLLECTION_INSERTITEM_OFFSET))(this, index, item);
		}

		::System::Void RemoveItem(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ALTERNATEVIEWCOLLECTION_REMOVEITEM_OFFSET))(this, index);
		}

		::System::Void SetItem(::System::Int32 index, ::System::Net::Mail::AlternateView* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Net::Mail::AlternateView*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ALTERNATEVIEWCOLLECTION_SETITEM_OFFSET))(this, index, item);
		}
	};
}
