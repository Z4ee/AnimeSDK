#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class Hashtable; }
namespace System::Collections { class IDictionary; }
namespace System::Collections { class SortedList; }

#define SYSTEM_COLLECTIONS_SPECIALIZED_COLLECTIONSUTIL_CREATECASEINSENSITIVEHASHTABLE_1_OFFSET UNITYSDK_OFFSET(0x1B1E2560)
#define SYSTEM_COLLECTIONS_SPECIALIZED_COLLECTIONSUTIL_CREATECASEINSENSITIVEHASHTABLE_2_OFFSET UNITYSDK_OFFSET(0x1B1E25F0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_COLLECTIONSUTIL_CREATECASEINSENSITIVEHASHTABLE_OFFSET UNITYSDK_OFFSET(0x1B1E2490)
#define SYSTEM_COLLECTIONS_SPECIALIZED_COLLECTIONSUTIL_CREATECASEINSENSITIVESORTEDLIST_OFFSET UNITYSDK_OFFSET(0x1B1E2680)
#define SYSTEM_COLLECTIONS_SPECIALIZED_COLLECTIONSUTIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1E26E0)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int CollectionsUtil_TypeDefinitionIndex = 3910;

	class CollectionsUtil : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_COLLECTIONSUTIL__CTOR_OFFSET))(this);
		}

		static ::System::Collections::Hashtable* CreateCaseInsensitiveHashtable()
		{
			return ((::System::Collections::Hashtable*(*)())((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_COLLECTIONSUTIL_CREATECASEINSENSITIVEHASHTABLE_OFFSET))();
		}

		static ::System::Collections::Hashtable* CreateCaseInsensitiveHashtable_1(::System::Int32 capacity)
		{
			return ((::System::Collections::Hashtable*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_COLLECTIONSUTIL_CREATECASEINSENSITIVEHASHTABLE_1_OFFSET))(capacity);
		}

		static ::System::Collections::Hashtable* CreateCaseInsensitiveHashtable_2(::System::Collections::IDictionary* d)
		{
			return ((::System::Collections::Hashtable*(*)(::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_COLLECTIONSUTIL_CREATECASEINSENSITIVEHASHTABLE_2_OFFSET))(d);
		}

		static ::System::Collections::SortedList* CreateCaseInsensitiveSortedList()
		{
			return ((::System::Collections::SortedList*(*)())((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_COLLECTIONSUTIL_CREATECASEINSENSITIVESORTEDLIST_OFFSET))();
		}
	};
}
