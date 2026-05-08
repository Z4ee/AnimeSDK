#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/ListSortDirection.h"
#include "unitysdk/System/ComponentModel/MarshalByValueComponent.h"

namespace System { class Array; }
namespace System { class NotSupportedException; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::ComponentModel { class CollectionChangeEventArgs; }
namespace System::ComponentModel { class ListChangedEventArgs; }
namespace System::ComponentModel { class ListChangedEventHandler; }
namespace System::ComponentModel { class PropertyDescriptor; }
namespace System::ComponentModel { class PropertyDescriptorCollection; }
namespace System::Data { class DataSet; }
namespace System::Data { class DataTable; }
namespace System::Data { class DataView; }
namespace System::Data { class DataViewManagerListItemTypeDescriptor; }
namespace System::Data { class DataViewSettingCollection; }

#define SYSTEM_DATA_DATAVIEWMANAGER_ADD_LISTCHANGED_OFFSET UNITYSDK_OFFSET(0x1AC69C70)
#define SYSTEM_DATA_DATAVIEWMANAGER_CREATEDATAVIEW_OFFSET UNITYSDK_OFFSET(0x1AC6A0A0)
#define SYSTEM_DATA_DATAVIEWMANAGER_ONLISTCHANGED_OFFSET UNITYSDK_OFFSET(0x1AC6A170)
#define SYSTEM_DATA_DATAVIEWMANAGER_RELATIONCOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1AC6A4E0)
#define SYSTEM_DATA_DATAVIEWMANAGER_REMOVE_LISTCHANGED_OFFSET UNITYSDK_OFFSET(0x1AC69CF0)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1AC69860)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COLLECTIONS_ICOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1AC69810)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1AC69830)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1AC69820)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AC69600)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COLLECTIONS_ILIST_ADD_OFFSET UNITYSDK_OFFSET(0x1AC69920)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COLLECTIONS_ILIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x1AC69970)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COLLECTIONS_ILIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1AC699C0)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COLLECTIONS_ILIST_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x1AC69850)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COLLECTIONS_ILIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1AC69840)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COLLECTIONS_ILIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1AC698C0)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COLLECTIONS_ILIST_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1AC699D0)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COLLECTIONS_ILIST_INSERT_OFFSET UNITYSDK_OFFSET(0x1AC699E0)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COLLECTIONS_ILIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x1AC69A80)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COLLECTIONS_ILIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x1AC69A30)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COLLECTIONS_ILIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1AC698D0)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COMPONENTMODEL_IBINDINGLIST_ADDINDEX_OFFSET UNITYSDK_OFFSET(0x1AC69D70)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COMPONENTMODEL_IBINDINGLIST_ADDNEW_OFFSET UNITYSDK_OFFSET(0x1AC69AE0)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COMPONENTMODEL_IBINDINGLIST_APPLYSORT_OFFSET UNITYSDK_OFFSET(0x1AC69D80)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COMPONENTMODEL_IBINDINGLIST_FIND_OFFSET UNITYSDK_OFFSET(0x1AC69DD0)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_ALLOWEDIT_OFFSET UNITYSDK_OFFSET(0x1AC69B30)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_ALLOWNEW_OFFSET UNITYSDK_OFFSET(0x1AC69AD0)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_ALLOWREMOVE_OFFSET UNITYSDK_OFFSET(0x1AC69B40)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_ISSORTED_OFFSET UNITYSDK_OFFSET(0x1AC69B80)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_SORTDIRECTION_OFFSET UNITYSDK_OFFSET(0x1AC69C20)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_SORTPROPERTY_OFFSET UNITYSDK_OFFSET(0x1AC69BD0)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_SUPPORTSCHANGENOTIFICATION_OFFSET UNITYSDK_OFFSET(0x1AC69B50)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_SUPPORTSSEARCHING_OFFSET UNITYSDK_OFFSET(0x1AC69B60)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_SUPPORTSSORTING_OFFSET UNITYSDK_OFFSET(0x1AC69B70)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COMPONENTMODEL_IBINDINGLIST_REMOVEINDEX_OFFSET UNITYSDK_OFFSET(0x1AC69E20)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COMPONENTMODEL_IBINDINGLIST_REMOVESORT_OFFSET UNITYSDK_OFFSET(0x1AC69E30)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COMPONENTMODEL_ITYPEDLIST_GETITEMPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1AC69F10)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COMPONENTMODEL_ITYPEDLIST_GETLISTNAME_OFFSET UNITYSDK_OFFSET(0x1AC69E80)
#define SYSTEM_DATA_DATAVIEWMANAGER_TABLECOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1AC6A290)
#define SYSTEM_DATA_DATAVIEWMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AC6A730)
#define SYSTEM_DATA_DATAVIEWMANAGER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AC69370)
#define SYSTEM_DATA_DATAVIEWMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC69360)

namespace System::Data
{
	inline static constexpr unsigned int DataViewManager_TypeDefinitionIndex = 37002;

	class DataViewManager : public ::System::ComponentModel::MarshalByValueComponent
	{
	public:
		static ::System::NotSupportedException** StaticGet_s_notSupported()
		{
			return (::System::NotSupportedException**)Il2CppClass::FromTypeDefinitionIndex(DataViewManager_TypeDefinitionIndex)->GetStaticField(0x27620);
		}
		::System::Data::DataViewManagerListItemTypeDescriptor* _item; // 0x20
		::System::ComponentModel::ListChangedEventHandler* ListChanged; // 0x28
		::System::Data::DataSet* _dataSet; // 0x30
		::System::Data::DataViewSettingCollection* _dataViewSettingsCollection; // 0x38
		::System::Int32 _nViews; // 0x40
		::System::Boolean _locked; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Data::DataSet* dataSet, ::System::Boolean locked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataSet*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER__CTOR_1_OFFSET))(this, dataSet, locked);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER__CCTOR_OFFSET))();
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Int32 System_Collections_ICollection_get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COLLECTIONS_ICOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Object* System_Collections_ICollection_get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Boolean System_Collections_ICollection_get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Boolean System_Collections_IList_get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COLLECTIONS_ILIST_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean System_Collections_IList_get_IsFixedSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COLLECTIONS_ILIST_GET_ISFIXEDSIZE_OFFSET))(this);
		}

		::System::Void System_Collections_ICollection_CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Object* System_Collections_IList_get_Item(::System::Int32 index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COLLECTIONS_ILIST_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void System_Collections_IList_set_Item(::System::Int32 index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COLLECTIONS_ILIST_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Int32 System_Collections_IList_Add(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COLLECTIONS_ILIST_ADD_OFFSET))(this, value);
		}

		::System::Void System_Collections_IList_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COLLECTIONS_ILIST_CLEAR_OFFSET))(this);
		}

		::System::Boolean System_Collections_IList_Contains(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COLLECTIONS_ILIST_CONTAINS_OFFSET))(this, value);
		}

		::System::Int32 System_Collections_IList_IndexOf(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COLLECTIONS_ILIST_INDEXOF_OFFSET))(this, value);
		}

		::System::Void System_Collections_IList_Insert(::System::Int32 index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COLLECTIONS_ILIST_INSERT_OFFSET))(this, index, value);
		}

		::System::Void System_Collections_IList_Remove(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COLLECTIONS_ILIST_REMOVE_OFFSET))(this, value);
		}

		::System::Void System_Collections_IList_RemoveAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COLLECTIONS_ILIST_REMOVEAT_OFFSET))(this, index);
		}

		::System::Boolean System_ComponentModel_IBindingList_get_AllowNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_ALLOWNEW_OFFSET))(this);
		}

		::System::Object* System_ComponentModel_IBindingList_AddNew()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COMPONENTMODEL_IBINDINGLIST_ADDNEW_OFFSET))(this);
		}

		::System::Boolean System_ComponentModel_IBindingList_get_AllowEdit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_ALLOWEDIT_OFFSET))(this);
		}

		::System::Boolean System_ComponentModel_IBindingList_get_AllowRemove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_ALLOWREMOVE_OFFSET))(this);
		}

		::System::Boolean System_ComponentModel_IBindingList_get_SupportsChangeNotification()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_SUPPORTSCHANGENOTIFICATION_OFFSET))(this);
		}

		::System::Boolean System_ComponentModel_IBindingList_get_SupportsSearching()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_SUPPORTSSEARCHING_OFFSET))(this);
		}

		::System::Boolean System_ComponentModel_IBindingList_get_SupportsSorting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_SUPPORTSSORTING_OFFSET))(this);
		}

		::System::Boolean System_ComponentModel_IBindingList_get_IsSorted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_ISSORTED_OFFSET))(this);
		}

		::System::ComponentModel::PropertyDescriptor* System_ComponentModel_IBindingList_get_SortProperty()
		{
			return ((::System::ComponentModel::PropertyDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_SORTPROPERTY_OFFSET))(this);
		}

		::System::ComponentModel::ListSortDirection System_ComponentModel_IBindingList_get_SortDirection()
		{
			return ((::System::ComponentModel::ListSortDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_SORTDIRECTION_OFFSET))(this);
		}

		::System::Void add_ListChanged(::System::ComponentModel::ListChangedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::ListChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_ADD_LISTCHANGED_OFFSET))(this, value);
		}

		::System::Void remove_ListChanged(::System::ComponentModel::ListChangedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::ListChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_REMOVE_LISTCHANGED_OFFSET))(this, value);
		}

		::System::Void System_ComponentModel_IBindingList_AddIndex(::System::ComponentModel::PropertyDescriptor* property)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COMPONENTMODEL_IBINDINGLIST_ADDINDEX_OFFSET))(this, property);
		}

		::System::Void System_ComponentModel_IBindingList_ApplySort(::System::ComponentModel::PropertyDescriptor* property, ::System::ComponentModel::ListSortDirection direction)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyDescriptor*, ::System::ComponentModel::ListSortDirection))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COMPONENTMODEL_IBINDINGLIST_APPLYSORT_OFFSET))(this, property, direction);
		}

		::System::Int32 System_ComponentModel_IBindingList_Find(::System::ComponentModel::PropertyDescriptor* property, ::System::Object* key)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ComponentModel::PropertyDescriptor*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COMPONENTMODEL_IBINDINGLIST_FIND_OFFSET))(this, property, key);
		}

		::System::Void System_ComponentModel_IBindingList_RemoveIndex(::System::ComponentModel::PropertyDescriptor* property)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COMPONENTMODEL_IBINDINGLIST_REMOVEINDEX_OFFSET))(this, property);
		}

		::System::Void System_ComponentModel_IBindingList_RemoveSort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COMPONENTMODEL_IBINDINGLIST_REMOVESORT_OFFSET))(this);
		}

		::System::String* System_ComponentModel_ITypedList_GetListName(::Il2CppArray<::System::ComponentModel::PropertyDescriptor*>* listAccessors)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::ComponentModel::PropertyDescriptor*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COMPONENTMODEL_ITYPEDLIST_GETLISTNAME_OFFSET))(this, listAccessors);
		}

		::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ITypedList_GetItemProperties(::Il2CppArray<::System::ComponentModel::PropertyDescriptor*>* listAccessors)
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID, ::Il2CppArray<::System::ComponentModel::PropertyDescriptor*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM_COMPONENTMODEL_ITYPEDLIST_GETITEMPROPERTIES_OFFSET))(this, listAccessors);
		}

		::System::Data::DataView* CreateDataView(::System::Data::DataTable* table)
		{
			return ((::System::Data::DataView*(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_CREATEDATAVIEW_OFFSET))(this, table);
		}

		::System::Void OnListChanged(::System::ComponentModel::ListChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::ListChangedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_ONLISTCHANGED_OFFSET))(this, e);
		}

		::System::Void TableCollectionChanged(::System::Object* sender, ::System::ComponentModel::CollectionChangeEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::CollectionChangeEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_TABLECOLLECTIONCHANGED_OFFSET))(this, sender, e);
		}

		::System::Void RelationCollectionChanged(::System::Object* sender, ::System::ComponentModel::CollectionChangeEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::CollectionChangeEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_RELATIONCOLLECTIONCHANGED_OFFSET))(this, sender, e);
		}
	};
}
