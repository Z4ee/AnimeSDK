#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { class String; }
namespace System::Collections { class IComparer; }
namespace System::Collections { class IEnumerator; }
namespace System::ComponentModel { class EventDescriptor; }

#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x18688EC0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x18689120)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x18689190)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_ENSUREEVENTSOWNED_OFFSET UNITYSDK_OFFSET(0x18688E30)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_ENSURESIZE_OFFSET UNITYSDK_OFFSET(0x18688FD0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18689980)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x18688D00)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x18688D10)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x186891F0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_INSERT_OFFSET UNITYSDK_OFFSET(0x186896E0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_INTERNALSORT_1_OFFSET UNITYSDK_OFFSET(0x18689B10)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_INTERNALSORT_OFFSET UNITYSDK_OFFSET(0x186892F0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x186898C0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x18689800)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x18689240)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x18689CD0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x18689CE0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x18689CF0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18689D00)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_ADD_OFFSET UNITYSDK_OFFSET(0x1868A0A0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x1868A120)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1868A190)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x1868A410)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1868A400)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x18689E90)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1868A240)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_INSERT_OFFSET UNITYSDK_OFFSET(0x1868A2F0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x1868A3F0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x1868A370)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x18689EA0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1868A420)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18688C90)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18688C20)

namespace System::ComponentModel
{
	inline static constexpr unsigned int EventDescriptorCollection_TypeDefinitionIndex = 2581;

	class EventDescriptorCollection : public ::System::Object
	{
	public:
		static ::System::ComponentModel::EventDescriptorCollection** StaticGet_Empty()
		{
			return (::System::ComponentModel::EventDescriptorCollection**)Il2CppClass::FromTypeDefinitionIndex(EventDescriptorCollection_TypeDefinitionIndex)->GetStaticField(0x10C00);
		}
		::Il2CppArray<::System::String*>* namedSort; // 0x10
		::System::Collections::IComparer* comparer; // 0x18
		::Il2CppArray<::System::ComponentModel::EventDescriptor*>* events; // 0x20
		::System::Int32 eventCount; // 0x28
		::System::Boolean eventsOwned; // 0x2C
		::System::Boolean readOnly; // 0x2D
		::System::Boolean needSort; // 0x2E

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
