#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IComparer; }
namespace System::Collections { class IDictionaryEnumerator; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Specialized { class ListDictionary_DictionaryNode; }

#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_ADD_OFFSET UNITYSDK_OFFSET(0x1A23DB00)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A23DD20)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1A23DD40)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_COPYTO_OFFSET UNITYSDK_OFFSET(0x1A23DEE0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A23E120)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1A23DA00)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x1A23DA60)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1A23DA50)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1A23DA70)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A23D650)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x1A23DA10)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1A23DA80)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x1A23DAC0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_REMOVE_OFFSET UNITYSDK_OFFSET(0x1A23E1E0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A23D800)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A23E180)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A23D640)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A23D630)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int ListDictionary_TypeDefinitionIndex = 3914;

	class ListDictionary : public ::System::Object
	{
	public:
		::System::Object* _syncRoot; // 0x10
		::System::Collections::Specialized::ListDictionary_DictionaryNode* head; // 0x18
		::System::Collections::IComparer* comparer; // 0x20
		::System::Int32 count; // 0x28
		::System::Int32 version; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Collections::IComparer* comparer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY__CTOR_1_OFFSET))(this, comparer);
		}

		::System::Object* get_Item(::System::Object* key)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_GET_ITEM_OFFSET))(this, key);
		}

		::System::Void set_Item(::System::Object* key, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_SET_ITEM_OFFSET))(this, key, value);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_GET_COUNT_OFFSET))(this);
		}

		::System::Collections::ICollection* get_Keys()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_GET_KEYS_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean get_IsFixedSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_GET_ISFIXEDSIZE_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Collections::ICollection* get_Values()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_GET_VALUES_OFFSET))(this);
		}

		::System::Void Add(::System::Object* key, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_ADD_OFFSET))(this, key, value);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Object* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_CONTAINS_OFFSET))(this, key);
		}

		::System::Void CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_COPYTO_OFFSET))(this, array, index);
		}

		::System::Collections::IDictionaryEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void Remove(::System::Object* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_REMOVE_OFFSET))(this, key);
		}
	};
}
