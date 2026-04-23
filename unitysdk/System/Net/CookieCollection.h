#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Net/CookieCollection_Stamp.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class IEnumerator; }
namespace System::Net { class Cookie; }

#define SYSTEM_NET_COOKIECOLLECTION_ADD_1_OFFSET UNITYSDK_OFFSET(0x1A0F5A50)
#define SYSTEM_NET_COOKIECOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1A0F5590)
#define SYSTEM_NET_COOKIECOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1A0F5E00)
#define SYSTEM_NET_COOKIECOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A0F5D50)
#define SYSTEM_NET_COOKIECOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1A0F5DB0)
#define SYSTEM_NET_COOKIECOLLECTION_GET_ISOTHERVERSIONSEEN_OFFSET UNITYSDK_OFFSET(0x1A0F5F00)
#define SYSTEM_NET_COOKIECOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1A0F5DE0)
#define SYSTEM_NET_COOKIECOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A0F54D0)
#define SYSTEM_NET_COOKIECOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1A0F5DF0)
#define SYSTEM_NET_COOKIECOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1A0F5650)
#define SYSTEM_NET_COOKIECOLLECTION_INTERNALADD_OFFSET UNITYSDK_OFFSET(0x1A0F5F10)
#define SYSTEM_NET_COOKIECOLLECTION_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x1A0F6400)
#define SYSTEM_NET_COOKIECOLLECTION_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1A0F5E30)
#define SYSTEM_NET_COOKIECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0F5470)

namespace System::Net
{
	inline static constexpr unsigned int CookieCollection_TypeDefinitionIndex = 2789;

	class CookieCollection : public ::System::Object
	{
	public:
		::System::Collections::ArrayList* m_list; // 0x10
		::System::Boolean m_IsReadOnly; // 0x18
		::System::Boolean m_has_other_versions; // 0x19
		::System::Int32 m_version; // 0x1C
		::System::DateTime m_TimeStamp; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Net::Cookie* get_Item(::System::Int32 index)
		{
			return ((::System::Net::Cookie*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void Add(::System::Net::Cookie* cookie)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Cookie*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECOLLECTION_ADD_OFFSET))(this, cookie);
		}

		::System::Void Add_1(::System::Net::CookieCollection* cookies)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::CookieCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECOLLECTION_ADD_1_OFFSET))(this, cookies);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECOLLECTION_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Void CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::DateTime TimeStamp(::System::Net::CookieCollection_Stamp how)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Net::CookieCollection_Stamp))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECOLLECTION_TIMESTAMP_OFFSET))(this, how);
		}

		::System::Boolean get_IsOtherVersionSeen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECOLLECTION_GET_ISOTHERVERSIONSEEN_OFFSET))(this);
		}

		::System::Int32 InternalAdd(::System::Net::Cookie* cookie, ::System::Boolean isStrict)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Net::Cookie*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECOLLECTION_INTERNALADD_OFFSET))(this, cookie, isStrict);
		}

		::System::Int32 IndexOf(::System::Net::Cookie* cookie)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Net::Cookie*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECOLLECTION_INDEXOF_OFFSET))(this, cookie);
		}

		::System::Void RemoveAt(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECOLLECTION_REMOVEAT_OFFSET))(this, idx);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECOLLECTION_GETENUMERATOR_OFFSET))(this);
		}
	};
}
