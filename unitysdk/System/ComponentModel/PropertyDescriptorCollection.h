#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { class String; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IComparer; }
namespace System::Collections { class IDictionary; }
namespace System::Collections { class IDictionaryEnumerator; }
namespace System::Collections { class IEnumerator; }
namespace System::ComponentModel { class PropertyDescriptor; }

#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1B3ECDC0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B3ED020)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1B3ED090)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1B3ED140)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_ENSUREPROPSOWNED_OFFSET UNITYSDK_OFFSET(0x1B3ECD10)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_ENSURESIZE_OFFSET UNITYSDK_OFFSET(0x1B3ECED0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_FIND_OFFSET UNITYSDK_OFFSET(0x1B3ED740)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B3EE350)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1B3ECBE0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1B3ECDA0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B3ECBF0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1B3ED0F0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_INSERT_OFFSET UNITYSDK_OFFSET(0x1B3EDDB0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_INTERNALSORT_1_OFFSET UNITYSDK_OFFSET(0x1B3EE210)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_INTERNALSORT_OFFSET UNITYSDK_OFFSET(0x1B3ED1F0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x1B3EDF90)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1B3EDED0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SORT_1_OFFSET UNITYSDK_OFFSET(0x1B3EE0C0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SORT_2_OFFSET UNITYSDK_OFFSET(0x1B3EE130)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SORT_3_OFFSET UNITYSDK_OFFSET(0x1B3EE1A0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SORT_OFFSET UNITYSDK_OFFSET(0x1B3EE050)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1B3EE5A0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1B3EE5B0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1B3EE5C0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_IDICTIONARY_ADD_OFFSET UNITYSDK_OFFSET(0x1B3EE5D0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_IDICTIONARY_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B3EE670)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_IDICTIONARY_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1B3EE6E0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_IDICTIONARY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B3EE720)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_IDICTIONARY_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x1B3EE770)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_IDICTIONARY_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1B3EE780)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_IDICTIONARY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B3EE790)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_IDICTIONARY_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x1B3EECB0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_IDICTIONARY_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x1B3EEE00)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_IDICTIONARY_REMOVE_OFFSET UNITYSDK_OFFSET(0x1B3EEF40)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_IDICTIONARY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B3EE7C0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B3EF050)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_ADD_OFFSET UNITYSDK_OFFSET(0x1B3EF060)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B3EF0E0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1B3EF150)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x1B3EF340)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1B3EF330)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B3EF3E0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1B3EF200)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_INSERT_OFFSET UNITYSDK_OFFSET(0x1B3EF2B0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x1B3EF3D0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x1B3EF350)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B3EF3F0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3EF650)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B3ECA20)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B3ECA90)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3EC9B0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int PropertyDescriptorCollection_TypeDefinitionIndex = 2963;

	class PropertyDescriptorCollection : public ::System::Object
	{
	public:
		static ::System::ComponentModel::PropertyDescriptorCollection** StaticGet_Empty()
		{
			return (::System::ComponentModel::PropertyDescriptorCollection**)Il2CppClass::FromTypeDefinitionIndex(PropertyDescriptorCollection_TypeDefinitionIndex)->GetStaticField(0x32E0);
		}
		::Il2CppArray<::System::ComponentModel::PropertyDescriptor*>* properties; // 0x10
		::Il2CppArray<::System::String*>* namedSort; // 0x18
		::System::Collections::IComparer* comparer; // 0x20
		::System::Collections::IDictionary* cachedFoundProperties; // 0x28
		::System::Boolean needSort; // 0x30
		::System::Boolean propsOwned; // 0x31
		::System::Boolean cachedIgnoreCase; // 0x32
		::System::Boolean readOnly; // 0x33
		::System::Int32 propCount; // 0x34

		::System::Void _ctor(::Il2CppArray<::System::ComponentModel::PropertyDescriptor*>* properties)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::ComponentModel::PropertyDescriptor*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION__CTOR_OFFSET))(this, properties);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::ComponentModel::PropertyDescriptor*>* properties, ::System::Boolean readOnly)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::ComponentModel::PropertyDescriptor*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION__CTOR_1_OFFSET))(this, properties, readOnly);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::ComponentModel::PropertyDescriptor*>* properties, ::System::Int32 propCount, ::Il2CppArray<::System::String*>* namedSort, ::System::Collections::IComparer* comparer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::ComponentModel::PropertyDescriptor*>*, ::System::Int32, ::Il2CppArray<::System::String*>*, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION__CTOR_2_OFFSET))(this, properties, propCount, namedSort, comparer);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION__CCTOR_OFFSET))();
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::ComponentModel::PropertyDescriptor* get_Item(::System::Int32 index)
		{
			return ((::System::ComponentModel::PropertyDescriptor*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::ComponentModel::PropertyDescriptor* get_Item_1(::System::String* name)
		{
			return ((::System::ComponentModel::PropertyDescriptor*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_GET_ITEM_1_OFFSET))(this, name);
		}

		::System::Int32 Add(::System::ComponentModel::PropertyDescriptor* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ComponentModel::PropertyDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_ADD_OFFSET))(this, value);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::ComponentModel::PropertyDescriptor* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::PropertyDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_CONTAINS_OFFSET))(this, value);
		}

		::System::Void CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Void EnsurePropsOwned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_ENSUREPROPSOWNED_OFFSET))(this);
		}

		::System::Void EnsureSize(::System::Int32 sizeNeeded)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_ENSURESIZE_OFFSET))(this, sizeNeeded);
		}

		::System::ComponentModel::PropertyDescriptor* Find(::System::String* name, ::System::Boolean ignoreCase)
		{
			return ((::System::ComponentModel::PropertyDescriptor*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_FIND_OFFSET))(this, name, ignoreCase);
		}

		::System::Int32 IndexOf(::System::ComponentModel::PropertyDescriptor* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ComponentModel::PropertyDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_INDEXOF_OFFSET))(this, value);
		}

		::System::Void Insert(::System::Int32 index, ::System::ComponentModel::PropertyDescriptor* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::ComponentModel::PropertyDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_INSERT_OFFSET))(this, index, value);
		}

		::System::Void Remove(::System::ComponentModel::PropertyDescriptor* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_REMOVE_OFFSET))(this, value);
		}

		::System::Void RemoveAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_REMOVEAT_OFFSET))(this, index);
		}

		::System::ComponentModel::PropertyDescriptorCollection* Sort()
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SORT_OFFSET))(this);
		}

		::System::ComponentModel::PropertyDescriptorCollection* Sort_1(::Il2CppArray<::System::String*>* names)
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SORT_1_OFFSET))(this, names);
		}

		::System::ComponentModel::PropertyDescriptorCollection* Sort_2(::Il2CppArray<::System::String*>* names, ::System::Collections::IComparer* comparer)
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SORT_2_OFFSET))(this, names, comparer);
		}

		::System::ComponentModel::PropertyDescriptorCollection* Sort_3(::System::Collections::IComparer* comparer)
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SORT_3_OFFSET))(this, comparer);
		}

		::System::Void InternalSort(::Il2CppArray<::System::String*>* names)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_INTERNALSORT_OFFSET))(this, names);
		}

		::System::Void InternalSort_1(::System::Collections::IComparer* sorter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_INTERNALSORT_1_OFFSET))(this, sorter);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Int32 System_Collections_ICollection_get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean System_Collections_ICollection_get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* System_Collections_ICollection_get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Void System_Collections_IDictionary_Add(::System::Object* key, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_IDICTIONARY_ADD_OFFSET))(this, key, value);
		}

		::System::Void System_Collections_IDictionary_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_IDICTIONARY_CLEAR_OFFSET))(this);
		}

		::System::Boolean System_Collections_IDictionary_Contains(::System::Object* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_IDICTIONARY_CONTAINS_OFFSET))(this, key);
		}

		::System::Collections::IDictionaryEnumerator* System_Collections_IDictionary_GetEnumerator()
		{
			return ((::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_IDICTIONARY_GETENUMERATOR_OFFSET))(this);
		}

		::System::Boolean System_Collections_IDictionary_get_IsFixedSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_IDICTIONARY_GET_ISFIXEDSIZE_OFFSET))(this);
		}

		::System::Boolean System_Collections_IDictionary_get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_IDICTIONARY_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Object* System_Collections_IDictionary_get_Item(::System::Object* key)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_IDICTIONARY_GET_ITEM_OFFSET))(this, key);
		}

		::System::Void System_Collections_IDictionary_set_Item(::System::Object* key, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_IDICTIONARY_SET_ITEM_OFFSET))(this, key, value);
		}

		::System::Collections::ICollection* System_Collections_IDictionary_get_Keys()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_IDICTIONARY_GET_KEYS_OFFSET))(this);
		}

		::System::Collections::ICollection* System_Collections_IDictionary_get_Values()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_IDICTIONARY_GET_VALUES_OFFSET))(this);
		}

		::System::Void System_Collections_IDictionary_Remove(::System::Object* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_IDICTIONARY_REMOVE_OFFSET))(this, key);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Int32 System_Collections_IList_Add(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_ADD_OFFSET))(this, value);
		}

		::System::Void System_Collections_IList_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_CLEAR_OFFSET))(this);
		}

		::System::Boolean System_Collections_IList_Contains(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_CONTAINS_OFFSET))(this, value);
		}

		::System::Int32 System_Collections_IList_IndexOf(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_INDEXOF_OFFSET))(this, value);
		}

		::System::Void System_Collections_IList_Insert(::System::Int32 index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_INSERT_OFFSET))(this, index, value);
		}

		::System::Boolean System_Collections_IList_get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean System_Collections_IList_get_IsFixedSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_GET_ISFIXEDSIZE_OFFSET))(this);
		}

		::System::Void System_Collections_IList_Remove(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_REMOVE_OFFSET))(this, value);
		}

		::System::Void System_Collections_IList_RemoveAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_REMOVEAT_OFFSET))(this, index);
		}

		::System::Object* System_Collections_IList_get_Item(::System::Int32 index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void System_Collections_IList_set_Item(::System::Int32 index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTORCOLLECTION_SYSTEM_COLLECTIONS_ILIST_SET_ITEM_OFFSET))(this, index, value);
		}
	};
}
