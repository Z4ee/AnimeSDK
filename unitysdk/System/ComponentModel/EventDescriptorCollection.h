#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { class String; }
namespace System::Collections { class IComparer; }
namespace System::Collections { class IEnumerator; }
namespace System::ComponentModel { class EventDescriptor; }

#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1CAECB30)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CAECD90)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1CAECE00)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_ENSUREEVENTSOWNED_OFFSET UNITYSDK_OFFSET(0x1CAECA80)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_ENSURESIZE_OFFSET UNITYSDK_OFFSET(0x1CAECC40)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_FIND_OFFSET UNITYSDK_OFFSET(0x1CAED4B0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CAED950)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1CAEC950)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1CAECB10)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1CAEC960)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1CAECE60)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_INSERT_OFFSET UNITYSDK_OFFSET(0x1CAED6B0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_INTERNALSORT_1_OFFSET UNITYSDK_OFFSET(0x1CAEDCC0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_INTERNALSORT_OFFSET UNITYSDK_OFFSET(0x1CAECF60)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x1CAED890)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1CAED7D0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SORT_1_OFFSET UNITYSDK_OFFSET(0x1CAEDB70)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SORT_2_OFFSET UNITYSDK_OFFSET(0x1CAEDBE0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SORT_3_OFFSET UNITYSDK_OFFSET(0x1CAEDC50)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SORT_OFFSET UNITYSDK_OFFSET(0x1CAEDB00)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1CAECEB0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1CAEDD30)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1CAEDD40)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1CAEDD50)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CAEDD60)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_ADD_OFFSET UNITYSDK_OFFSET(0x1CAEE120)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CAEE1A0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1CAEE210)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x1CAEE490)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1CAEE480)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1CAEDF10)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1CAEE2C0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_INSERT_OFFSET UNITYSDK_OFFSET(0x1CAEE370)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x1CAEE470)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x1CAEE3F0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1CAEDF20)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CAEE4A0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CAEC790)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1CAEC800)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAEC720)

namespace System::ComponentModel
{
	inline static constexpr unsigned int EventDescriptorCollection_TypeDefinitionIndex = 2878;

	class EventDescriptorCollection : public ::System::Object
	{
	public:
		static ::System::ComponentModel::EventDescriptorCollection** StaticGet_Empty()
		{
			return (::System::ComponentModel::EventDescriptorCollection**)Il2CppClass::FromTypeDefinitionIndex(EventDescriptorCollection_TypeDefinitionIndex)->GetStaticField(0x2660);
		}
		::Il2CppArray<::System::ComponentModel::EventDescriptor*>* events; // 0x10
		::Il2CppArray<::System::String*>* namedSort; // 0x18
		::System::Collections::IComparer* comparer; // 0x20
		::System::Int32 eventCount; // 0x28
		::System::Boolean needSort; // 0x2C
		::System::Boolean readOnly; // 0x2D
		::System::Boolean eventsOwned; // 0x2E

		::System::Void _ctor(::Il2CppArray<::System::ComponentModel::EventDescriptor*>* events)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::ComponentModel::EventDescriptor*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION__CTOR_OFFSET))(this, events);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::ComponentModel::EventDescriptor*>* events, ::System::Boolean readOnly)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::ComponentModel::EventDescriptor*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION__CTOR_1_OFFSET))(this, events, readOnly);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::ComponentModel::EventDescriptor*>* events, ::System::Int32 eventCount, ::Il2CppArray<::System::String*>* namedSort, ::System::Collections::IComparer* comparer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::ComponentModel::EventDescriptor*>*, ::System::Int32, ::Il2CppArray<::System::String*>*, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION__CTOR_2_OFFSET))(this, events, eventCount, namedSort, comparer);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION__CCTOR_OFFSET))();
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::ComponentModel::EventDescriptor* get_Item(::System::Int32 index)
		{
			return ((::System::ComponentModel::EventDescriptor*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::ComponentModel::EventDescriptor* get_Item_1(::System::String* name)
		{
			return ((::System::ComponentModel::EventDescriptor*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_GET_ITEM_1_OFFSET))(this, name);
		}

		::System::Int32 Add(::System::ComponentModel::EventDescriptor* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ComponentModel::EventDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_ADD_OFFSET))(this, value);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::ComponentModel::EventDescriptor* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::EventDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_CONTAINS_OFFSET))(this, value);
		}

		::System::Void System_Collections_ICollection_CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Void EnsureEventsOwned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_ENSUREEVENTSOWNED_OFFSET))(this);
		}

		::System::Void EnsureSize(::System::Int32 sizeNeeded)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_ENSURESIZE_OFFSET))(this, sizeNeeded);
		}

		::System::ComponentModel::EventDescriptor* Find(::System::String* name, ::System::Boolean ignoreCase)
		{
			return ((::System::ComponentModel::EventDescriptor*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_FIND_OFFSET))(this, name, ignoreCase);
		}

		::System::Int32 IndexOf(::System::ComponentModel::EventDescriptor* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ComponentModel::EventDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_INDEXOF_OFFSET))(this, value);
		}

		::System::Void Insert(::System::Int32 index, ::System::ComponentModel::EventDescriptor* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::ComponentModel::EventDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_INSERT_OFFSET))(this, index, value);
		}

		::System::Void Remove(::System::ComponentModel::EventDescriptor* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::EventDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_REMOVE_OFFSET))(this, value);
		}

		::System::Void RemoveAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_REMOVEAT_OFFSET))(this, index);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::ComponentModel::EventDescriptorCollection* Sort()
		{
			return ((::System::ComponentModel::EventDescriptorCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SORT_OFFSET))(this);
		}

		::System::ComponentModel::EventDescriptorCollection* Sort_1(::Il2CppArray<::System::String*>* names)
		{
			return ((::System::ComponentModel::EventDescriptorCollection*(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SORT_1_OFFSET))(this, names);
		}

		::System::ComponentModel::EventDescriptorCollection* Sort_2(::Il2CppArray<::System::String*>* names, ::System::Collections::IComparer* comparer)
		{
			return ((::System::ComponentModel::EventDescriptorCollection*(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SORT_2_OFFSET))(this, names, comparer);
		}

		::System::ComponentModel::EventDescriptorCollection* Sort_3(::System::Collections::IComparer* comparer)
		{
			return ((::System::ComponentModel::EventDescriptorCollection*(*)(::PVOID, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SORT_3_OFFSET))(this, comparer);
		}

		::System::Void InternalSort(::Il2CppArray<::System::String*>* names)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_INTERNALSORT_OFFSET))(this, names);
		}

		::System::Void InternalSort_1(::System::Collections::IComparer* sorter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_INTERNALSORT_1_OFFSET))(this, sorter);
		}

		::System::Int32 System_Collections_ICollection_get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean System_Collections_ICollection_get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* System_Collections_ICollection_get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Object* System_Collections_IList_get_Item(::System::Int32 index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void System_Collections_IList_set_Item(::System::Int32 index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Int32 System_Collections_IList_Add(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_ADD_OFFSET))(this, value);
		}

		::System::Void System_Collections_IList_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_CLEAR_OFFSET))(this);
		}

		::System::Boolean System_Collections_IList_Contains(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_CONTAINS_OFFSET))(this, value);
		}

		::System::Int32 System_Collections_IList_IndexOf(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_INDEXOF_OFFSET))(this, value);
		}

		::System::Void System_Collections_IList_Insert(::System::Int32 index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_INSERT_OFFSET))(this, index, value);
		}

		::System::Void System_Collections_IList_Remove(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_REMOVE_OFFSET))(this, value);
		}

		::System::Void System_Collections_IList_RemoveAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_REMOVEAT_OFFSET))(this, index);
		}

		::System::Boolean System_Collections_IList_get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean System_Collections_IList_get_IsFixedSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_GET_ISFIXEDSIZE_OFFSET))(this);
		}
	};
}
