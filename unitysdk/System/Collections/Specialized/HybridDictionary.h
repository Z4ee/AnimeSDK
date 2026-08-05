#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IDictionaryEnumerator; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Specialized { class ListDictionary; }

#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_ADD_OFFSET UNITYSDK_OFFSET(0x1D225640)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_CHANGEOVER_OFFSET UNITYSDK_OFFSET(0x1D225040)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D225720)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1D225770)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_COPYTO_OFFSET UNITYSDK_OFFSET(0x1D225820)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D2258F0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1D225410)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x1D225530)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1D225520)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1D225540)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D224EB0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x1D225440)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_LIST_OFFSET UNITYSDK_OFFSET(0x1D225380)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1D225550)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x1D225560)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_REMOVE_OFFSET UNITYSDK_OFFSET(0x1D225AD0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D224F60)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D2259E0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D224D60)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D224EA0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D224DD0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D224D50)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int HybridDictionary_TypeDefinitionIndex = 3910;

	class HybridDictionary : public ::System::Object
	{
	public:
		// static const ::System::Int32 CutoverPoint = 0x9; // 0x0
		// static const ::System::Int32 InitialHashtableSize = 0xD; // 0x0
		// static const ::System::Int32 FixedSizeCutoverPoint = 0x6; // 0x0
		::System::Collections::Hashtable* hashtable; // 0x10
		::System::Collections::Specialized::ListDictionary* list; // 0x18
		::System::Boolean caseInsensitive; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 initialSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY__CTOR_1_OFFSET))(this, initialSize);
		}

		::System::Void _ctor_2(::System::Boolean caseInsensitive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY__CTOR_2_OFFSET))(this, caseInsensitive);
		}

		::System::Void _ctor_3(::System::Int32 initialSize, ::System::Boolean caseInsensitive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY__CTOR_3_OFFSET))(this, initialSize, caseInsensitive);
		}

		::System::Object* get_Item(::System::Object* key)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_ITEM_OFFSET))(this, key);
		}

		::System::Void set_Item(::System::Object* key, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_SET_ITEM_OFFSET))(this, key, value);
		}

		::System::Collections::Specialized::ListDictionary* get_List()
		{
			return ((::System::Collections::Specialized::ListDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_LIST_OFFSET))(this);
		}

		::System::Void ChangeOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_CHANGEOVER_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_COUNT_OFFSET))(this);
		}

		::System::Collections::ICollection* get_Keys()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_KEYS_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean get_IsFixedSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_ISFIXEDSIZE_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Collections::ICollection* get_Values()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_VALUES_OFFSET))(this);
		}

		::System::Void Add(::System::Object* key, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_ADD_OFFSET))(this, key, value);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Object* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_CONTAINS_OFFSET))(this, key);
		}

		::System::Void CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_COPYTO_OFFSET))(this, array, index);
		}

		::System::Collections::IDictionaryEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void Remove(::System::Object* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_REMOVE_OFFSET))(this, key);
		}
	};
}
