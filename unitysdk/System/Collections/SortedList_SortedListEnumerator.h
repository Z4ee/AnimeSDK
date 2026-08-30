#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/DictionaryEntry.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class SortedList; }

#define SYSTEM_COLLECTIONS_SORTEDLIST_SORTEDLISTENUMERATOR_CLONE_OFFSET UNITYSDK_OFFSET(0x1BBC2DA0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SORTEDLISTENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BBC30B0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SORTEDLISTENUMERATOR_GET_ENTRY_OFFSET UNITYSDK_OFFSET(0x1BBC2FF0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SORTEDLISTENUMERATOR_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1BBC2E40)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SORTEDLISTENUMERATOR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1BBC3150)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SORTEDLISTENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BBC2F00)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SORTEDLISTENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1BBC3210)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SORTEDLISTENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBC1B70)

namespace System::Collections
{
	inline static constexpr unsigned int SortedList_SortedListEnumerator_TypeDefinitionIndex = 1500;

	class SortedList_SortedListEnumerator : public ::System::Object
	{
	public:
		::System::Collections::SortedList* sortedList; // 0x10
		::System::Object* key; // 0x18
		::System::Object* value; // 0x20
		::System::Int32 getObjectRetType; // 0x28
		::System::Int32 index; // 0x2C
		::System::Boolean current; // 0x30
		::System::Int32 endIndex; // 0x34
		::System::Int32 version; // 0x38
		::System::Int32 startIndex; // 0x3C

		::System::Void _ctor(::System::Collections::SortedList* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::SortedList*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SORTEDLISTENUMERATOR__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SORTEDLISTENUMERATOR_CLONE_OFFSET))(this);
		}

		::System::Object* get_Key()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SORTEDLISTENUMERATOR_GET_KEY_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SORTEDLISTENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Collections::DictionaryEntry get_Entry()
		{
			return ((::System::Collections::DictionaryEntry(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SORTEDLISTENUMERATOR_GET_ENTRY_OFFSET))(this);
		}

		::System::Object* get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SORTEDLISTENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SORTEDLISTENUMERATOR_GET_VALUE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SORTEDLISTENUMERATOR_RESET_OFFSET))(this);
		}
	};
}
