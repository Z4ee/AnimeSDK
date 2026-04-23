#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections { class SortedList; }

#define SYSTEM_NET_PATHLIST_GETCOOKIESCOUNT_OFFSET UNITYSDK_OFFSET(0x1A13A050)
#define SYSTEM_NET_PATHLIST_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A13A670)
#define SYSTEM_NET_PATHLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1A13A020)
#define SYSTEM_NET_PATHLIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A13A550)
#define SYSTEM_NET_PATHLIST_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1A13A4F0)
#define SYSTEM_NET_PATHLIST_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x1A13A520)
#define SYSTEM_NET_PATHLIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A13A580)
#define SYSTEM_NET_PATHLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1A139F70)

namespace System::Net
{
	inline static constexpr unsigned int PathList_TypeDefinitionIndex = 2794;

	class PathList : public ::System::Object
	{
	public:
		::System::Collections::SortedList* m_list; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_PATHLIST__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_PATHLIST_GET_COUNT_OFFSET))(this);
		}

		::System::Int32 GetCookiesCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_PATHLIST_GETCOOKIESCOUNT_OFFSET))(this);
		}

		::System::Collections::ICollection* get_Values()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_PATHLIST_GET_VALUES_OFFSET))(this);
		}

		::System::Object* get_Item(::System::String* s)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_PATHLIST_GET_ITEM_OFFSET))(this, s);
		}

		::System::Void set_Item(::System::String* s, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_PATHLIST_SET_ITEM_OFFSET))(this, s, value);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_PATHLIST_GETENUMERATOR_OFFSET))(this);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_PATHLIST_GET_SYNCROOT_OFFSET))(this);
		}
	};
}
