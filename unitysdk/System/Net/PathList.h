#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections { class SortedList; }

#define SYSTEM_NET_PATHLIST_GETCOOKIESCOUNT_OFFSET UNITYSDK_OFFSET(0x1A10E3E0)
#define SYSTEM_NET_PATHLIST_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A10EA30)
#define SYSTEM_NET_PATHLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1A10E3B0)
#define SYSTEM_NET_PATHLIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A10E910)
#define SYSTEM_NET_PATHLIST_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1A10E8B0)
#define SYSTEM_NET_PATHLIST_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x1A10E8E0)
#define SYSTEM_NET_PATHLIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A10E940)
#define SYSTEM_NET_PATHLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1A10E300)

namespace System::Net
{
	inline static constexpr unsigned int PathList_TypeDefinitionIndex = 3425;

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
