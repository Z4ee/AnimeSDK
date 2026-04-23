#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { class String; }
namespace System::Collections { class IComparer; }
namespace System::Collections { class IEnumerator; }
namespace System::ComponentModel { class EventDescriptor; }

#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1A0C34B0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A0C3710)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1A0C3780)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_ENSUREEVENTSOWNED_OFFSET UNITYSDK_OFFSET(0x1A0C3420)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_ENSURESIZE_OFFSET UNITYSDK_OFFSET(0x1A0C35C0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A0C3F70)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1A0C32F0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A0C3300)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1A0C37E0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_INSERT_OFFSET UNITYSDK_OFFSET(0x1A0C3CD0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_INTERNALSORT_1_OFFSET UNITYSDK_OFFSET(0x1A0C4100)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_INTERNALSORT_OFFSET UNITYSDK_OFFSET(0x1A0C38E0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x1A0C3EB0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1A0C3DF0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1A0C3830)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1A0C42C0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1A0C42D0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1A0C42E0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A0C42F0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_ADD_OFFSET UNITYSDK_OFFSET(0x1A0C4690)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A0C4710)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1A0C4780)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x1A0C4A00)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1A0C49F0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A0C4480)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1A0C4830)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_INSERT_OFFSET UNITYSDK_OFFSET(0x1A0C48E0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x1A0C49E0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x1A0C4960)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A0C4490)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0C4A10)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A0C3280)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0C3210)

namespace System::ComponentModel
{
	inline static constexpr unsigned int EventDescriptorCollection_TypeDefinitionIndex = 2582;

	class EventDescriptorCollection : public ::System::Object
	{
	public:
		static ::System::ComponentModel::EventDescriptorCollection** StaticGet_Empty()
		{
			return (::System::ComponentModel::EventDescriptorCollection**)Il2CppClass::FromTypeDefinitionIndex(EventDescriptorCollection_TypeDefinitionIndex)->GetStaticField(0x123F0);
		}
		::System::Collections::IComparer* comparer; // 0x10
		::Il2CppArray<::System::String*>* namedSort; // 0x18
		::Il2CppArray<::System::ComponentModel::EventDescriptor*>* events; // 0x20
		::System::Boolean readOnly; // 0x28
		::System::Boolean needSort; // 0x29
		::System::Boolean eventsOwned; // 0x2A
		::System::Int32 eventCount; // 0x2C

		::System::Void _ctor(::Il2CppArray<::System::ComponentModel::EventDescriptor*>* events)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::ComponentModel::EventDescriptor*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION__CTOR_OFFSET))(this, events);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::ComponentModel::EventDescriptor*>* events, ::System::Boolean readOnly)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::ComponentModel::EventDescriptor*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION__CTOR_1_OFFSET))(this, events, readOnly);
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
