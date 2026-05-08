#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Specialized { class StringEnumerator; }

#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x1AA8FFB0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1AA8FF80)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x1AA90040)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1AA90070)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1AA900A0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AA900D0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1AA8FF30)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1AA90180)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1AA90190)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1AA8FEC0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1AA90200)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1AA90120)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_INSERT_OFFSET UNITYSDK_OFFSET(0x1AA90150)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x1AA901D0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1AA901A0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1AA8FF00)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1AA90450)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AA90480)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_SYSTEM_COLLECTIONS_ILIST_ADD_OFFSET UNITYSDK_OFFSET(0x1AA902C0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_SYSTEM_COLLECTIONS_ILIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1AA90310)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_SYSTEM_COLLECTIONS_ILIST_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x1AA8FF70)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_SYSTEM_COLLECTIONS_ILIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1AA8FF60)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_SYSTEM_COLLECTIONS_ILIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1AA90230)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_SYSTEM_COLLECTIONS_ILIST_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1AA90360)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_SYSTEM_COLLECTIONS_ILIST_INSERT_OFFSET UNITYSDK_OFFSET(0x1AA903B0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_SYSTEM_COLLECTIONS_ILIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x1AA90400)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_SYSTEM_COLLECTIONS_ILIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1AA90270)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA904B0)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int StringCollection_TypeDefinitionIndex = 3931;

	class StringCollection : public ::System::Object
	{
	public:
		::System::Collections::ArrayList* data; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::String* get_Item(::System::Int32 index)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean System_Collections_IList_get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_SYSTEM_COLLECTIONS_ILIST_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean System_Collections_IList_get_IsFixedSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_SYSTEM_COLLECTIONS_ILIST_GET_ISFIXEDSIZE_OFFSET))(this);
		}

		::System::Int32 Add(::System::String* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_ADD_OFFSET))(this, value);
		}

		::System::Void AddRange(::Il2CppArray<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_ADDRANGE_OFFSET))(this, value);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::String* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_CONTAINS_OFFSET))(this, value);
		}

		::System::Void CopyTo(::Il2CppArray<::System::String*>* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Collections::Specialized::StringEnumerator* GetEnumerator()
		{
			return ((::System::Collections::Specialized::StringEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Int32 IndexOf(::System::String* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_INDEXOF_OFFSET))(this, value);
		}

		::System::Void Insert(::System::Int32 index, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_INSERT_OFFSET))(this, index, value);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Void Remove(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_REMOVE_OFFSET))(this, value);
		}

		::System::Void RemoveAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_REMOVEAT_OFFSET))(this, index);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Object* System_Collections_IList_get_Item(::System::Int32 index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_SYSTEM_COLLECTIONS_ILIST_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void System_Collections_IList_set_Item(::System::Int32 index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_SYSTEM_COLLECTIONS_ILIST_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Int32 System_Collections_IList_Add(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_SYSTEM_COLLECTIONS_ILIST_ADD_OFFSET))(this, value);
		}

		::System::Boolean System_Collections_IList_Contains(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_SYSTEM_COLLECTIONS_ILIST_CONTAINS_OFFSET))(this, value);
		}

		::System::Int32 System_Collections_IList_IndexOf(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_SYSTEM_COLLECTIONS_ILIST_INDEXOF_OFFSET))(this, value);
		}

		::System::Void System_Collections_IList_Insert(::System::Int32 index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_SYSTEM_COLLECTIONS_ILIST_INSERT_OFFSET))(this, index, value);
		}

		::System::Void System_Collections_IList_Remove(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_SYSTEM_COLLECTIONS_ILIST_REMOVE_OFFSET))(this, value);
		}

		::System::Void System_Collections_ICollection_CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
