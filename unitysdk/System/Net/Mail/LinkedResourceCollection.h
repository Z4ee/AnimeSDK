#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/ObjectModel/Collection_1.h"

namespace System::Net::Mail { class LinkedResource; }

#define SYSTEM_NET_MAIL_LINKEDRESOURCECOLLECTION_CLEARITEMS_OFFSET UNITYSDK_OFFSET(0x19AF9BC0)
#define SYSTEM_NET_MAIL_LINKEDRESOURCECOLLECTION_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x19AF9BB0)
#define SYSTEM_NET_MAIL_LINKEDRESOURCECOLLECTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19AF9B50)
#define SYSTEM_NET_MAIL_LINKEDRESOURCECOLLECTION_INSERTITEM_OFFSET UNITYSDK_OFFSET(0x19AF9C00)
#define SYSTEM_NET_MAIL_LINKEDRESOURCECOLLECTION_REMOVEITEM_OFFSET UNITYSDK_OFFSET(0x19AF9C50)
#define SYSTEM_NET_MAIL_LINKEDRESOURCECOLLECTION_SETITEM_OFFSET UNITYSDK_OFFSET(0x19AF9C90)
#define SYSTEM_NET_MAIL_LINKEDRESOURCECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19AF9B10)

namespace System::Net::Mail
{
	inline static constexpr unsigned int LinkedResourceCollection_TypeDefinitionIndex = 3587;

	class LinkedResourceCollection : public ::System::Collections::ObjectModel::Collection_1<::System::Net::Mail::LinkedResource*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_LINKEDRESOURCECOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_LINKEDRESOURCECOLLECTION_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_LINKEDRESOURCECOLLECTION_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void ClearItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_LINKEDRESOURCECOLLECTION_CLEARITEMS_OFFSET))(this);
		}

		::System::Void InsertItem(::System::Int32 index, ::System::Net::Mail::LinkedResource* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Net::Mail::LinkedResource*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_LINKEDRESOURCECOLLECTION_INSERTITEM_OFFSET))(this, index, item);
		}

		::System::Void RemoveItem(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_LINKEDRESOURCECOLLECTION_REMOVEITEM_OFFSET))(this, index);
		}

		::System::Void SetItem(::System::Int32 index, ::System::Net::Mail::LinkedResource* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Net::Mail::LinkedResource*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_LINKEDRESOURCECOLLECTION_SETITEM_OFFSET))(this, index, item);
		}
	};
}
