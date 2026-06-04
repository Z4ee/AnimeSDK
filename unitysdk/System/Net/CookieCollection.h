#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Net/CookieCollection_Stamp.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class IEnumerator; }
namespace System::Net { class Cookie; }

#define SYSTEM_NET_COOKIECOLLECTION_ADD_1_OFFSET UNITYSDK_OFFSET(0x1AF5BC30)
#define SYSTEM_NET_COOKIECOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1AF5B740)
#define SYSTEM_NET_COOKIECOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1AF5C010)
#define SYSTEM_NET_COOKIECOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AF5BF60)
#define SYSTEM_NET_COOKIECOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1AF5BFC0)
#define SYSTEM_NET_COOKIECOLLECTION_GET_ISOTHERVERSIONSEEN_OFFSET UNITYSDK_OFFSET(0x1AF5C110)
#define SYSTEM_NET_COOKIECOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1AF5BFF0)
#define SYSTEM_NET_COOKIECOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1AF5B680)
#define SYSTEM_NET_COOKIECOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1AF5C000)
#define SYSTEM_NET_COOKIECOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1AF5B800)
#define SYSTEM_NET_COOKIECOLLECTION_INTERNALADD_OFFSET UNITYSDK_OFFSET(0x1AF5C120)
#define SYSTEM_NET_COOKIECOLLECTION_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x1AF5C650)
#define SYSTEM_NET_COOKIECOLLECTION_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1AF5C040)
#define SYSTEM_NET_COOKIECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF5B620)

namespace System::Net
{
	inline static constexpr unsigned int CookieCollection_TypeDefinitionIndex = 2789;

	class CookieCollection : public ::System::Object
	{
	public:
		::System::Collections::ArrayList* m_list; // 0x10
		::System::Int32 m_version; // 0x18
		::System::Boolean m_IsReadOnly; // 0x1C
		::System::Boolean m_has_other_versions; // 0x1D
		::System::DateTime m_TimeStamp; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Net::Cookie* get_Item(::System::Int32 a1)
		{
			return ((::System::Net::Cookie*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECOLLECTION_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void Add(::System::Net::Cookie* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Cookie*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECOLLECTION_ADD_OFFSET))(this, a1);
		}

		::System::Void Add_1(::System::Net::CookieCollection* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::CookieCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECOLLECTION_ADD_1_OFFSET))(this, a1);
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

		::System::Void CopyTo(::System::Array* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECOLLECTION_COPYTO_OFFSET))(this, a1, a2);
		}

		::System::DateTime TimeStamp(::System::Net::CookieCollection_Stamp a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Net::CookieCollection_Stamp))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECOLLECTION_TIMESTAMP_OFFSET))(this, a1);
		}

		::System::Boolean get_IsOtherVersionSeen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECOLLECTION_GET_ISOTHERVERSIONSEEN_OFFSET))(this);
		}

		::System::Int32 InternalAdd(::System::Net::Cookie* a1, ::System::Boolean a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Net::Cookie*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECOLLECTION_INTERNALADD_OFFSET))(this, a1, a2);
		}

		::System::Int32 IndexOf(::System::Net::Cookie* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Net::Cookie*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECOLLECTION_INDEXOF_OFFSET))(this, a1);
		}

		::System::Void RemoveAt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECOLLECTION_REMOVEAT_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECOLLECTION_GETENUMERATOR_OFFSET))(this);
		}
	};
}
