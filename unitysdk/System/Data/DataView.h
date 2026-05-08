#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/ListChangedType.h"
#include "unitysdk/System/ComponentModel/ListSortDirection.h"
#include "unitysdk/System/ComponentModel/MarshalByValueComponent.h"
#include "unitysdk/System/Data/DataViewRowState.h"

namespace System { class Array; }
namespace System { class EventHandler; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::ComponentModel { class CollectionChangeEventArgs; }
namespace System::ComponentModel { class ListChangedEventArgs; }
namespace System::ComponentModel { class ListChangedEventHandler; }
namespace System::ComponentModel { class ListSortDescriptionCollection; }
namespace System::ComponentModel { class PropertyDescriptor; }
namespace System::ComponentModel { class PropertyDescriptorCollection; }
namespace System::Data { class DataRow; }
namespace System::Data { class DataRowView; }
namespace System::Data { class DataTable; }
namespace System::Data { class DataViewListener; }
namespace System::Data { class DataViewManager; }
namespace System::Data { class IFilter; }
namespace System::Data { class Index; }

#define SYSTEM_DATA_DATAVIEW_ADDNEW_OFFSET UNITYSDK_OFFSET(0x1B338140)
#define SYSTEM_DATA_DATAVIEW_ADD_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x1B33A840)
#define SYSTEM_DATA_DATAVIEW_ADD_LISTCHANGED_OFFSET UNITYSDK_OFFSET(0x1B33A660)
#define SYSTEM_DATA_DATAVIEW_BEGININIT_OFFSET UNITYSDK_OFFSET(0x1B338730)
#define SYSTEM_DATA_DATAVIEW_CHECKOPEN_OFFSET UNITYSDK_OFFSET(0x1B3384C0)
#define SYSTEM_DATA_DATAVIEW_CHECKSORT_OFFSET UNITYSDK_OFFSET(0x1B337BB0)
#define SYSTEM_DATA_DATAVIEW_CHILDRELATIONCOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1B33D400)
#define SYSTEM_DATA_DATAVIEW_CLOSE_OFFSET UNITYSDK_OFFSET(0x1B3389D0)
#define SYSTEM_DATA_DATAVIEW_COLUMNCOLLECTIONCHANGEDINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B33DAF0)
#define SYSTEM_DATA_DATAVIEW_COLUMNCOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1B33D8A0)
#define SYSTEM_DATA_DATAVIEW_COPYTO_1_OFFSET UNITYSDK_OFFSET(0x1B338DF0)
#define SYSTEM_DATA_DATAVIEW_COPYTO_OFFSET UNITYSDK_OFFSET(0x1B338A30)
#define SYSTEM_DATA_DATAVIEW_CREATESORTSTRING_OFFSET UNITYSDK_OFFSET(0x1B33A9C0)
#define SYSTEM_DATA_DATAVIEW_DELETE_1_OFFSET UNITYSDK_OFFSET(0x1B339170)
#define SYSTEM_DATA_DATAVIEW_DELETE_OFFSET UNITYSDK_OFFSET(0x1B339150)
#define SYSTEM_DATA_DATAVIEW_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B3395F0)
#define SYSTEM_DATA_DATAVIEW_ENDINIT_OFFSET UNITYSDK_OFFSET(0x1B338740)
#define SYSTEM_DATA_DATAVIEW_FINISHADDNEW_OFFSET UNITYSDK_OFFSET(0x1B3393C0)
#define SYSTEM_DATA_DATAVIEW_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B339640)
#define SYSTEM_DATA_DATAVIEW_GETFILTER_OFFSET UNITYSDK_OFFSET(0x1B33BCE0)
#define SYSTEM_DATA_DATAVIEW_GETFINDINDEX_OFFSET UNITYSDK_OFFSET(0x1B339CF0)
#define SYSTEM_DATA_DATAVIEW_GETRECORD_OFFSET UNITYSDK_OFFSET(0x1B33BCF0)
#define SYSTEM_DATA_DATAVIEW_GETROWVIEW_1_OFFSET UNITYSDK_OFFSET(0x1B3380E0)
#define SYSTEM_DATA_DATAVIEW_GETROWVIEW_OFFSET UNITYSDK_OFFSET(0x1B338D50)
#define SYSTEM_DATA_DATAVIEW_GETROW_OFFSET UNITYSDK_OFFSET(0x1B338010)
#define SYSTEM_DATA_DATAVIEW_GETSORTDESCRIPTIONS_OFFSET UNITYSDK_OFFSET(0x1B33B8B0)
#define SYSTEM_DATA_DATAVIEW_GETSORTPROPERTY_OFFSET UNITYSDK_OFFSET(0x1B33A580)
#define SYSTEM_DATA_DATAVIEW_GET_COUNTFROMINDEX_OFFSET UNITYSDK_OFFSET(0x1B3375F0)
#define SYSTEM_DATA_DATAVIEW_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1B3375D0)
#define SYSTEM_DATA_DATAVIEW_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1B337620)
#define SYSTEM_DATA_DATAVIEW_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B337F60)
#define SYSTEM_DATA_DATAVIEW_GET_ROWFILTER_OFFSET UNITYSDK_OFFSET(0x1B337640)
#define SYSTEM_DATA_DATAVIEW_GET_SORT_OFFSET UNITYSDK_OFFSET(0x1B337990)
#define SYSTEM_DATA_DATAVIEW_INDEXLISTCHANGEDINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B33BEA0)
#define SYSTEM_DATA_DATAVIEW_INDEXLISTCHANGED_OFFSET UNITYSDK_OFFSET(0x1B33BE10)
#define SYSTEM_DATA_DATAVIEW_INDEXOFDATAROWVIEW_OFFSET UNITYSDK_OFFSET(0x1B3399D0)
#define SYSTEM_DATA_DATAVIEW_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1B338510)
#define SYSTEM_DATA_DATAVIEW_MAINTAINDATAVIEW_OFFSET UNITYSDK_OFFSET(0x1B33BF80)
#define SYSTEM_DATA_DATAVIEW_ONINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1B338950)
#define SYSTEM_DATA_DATAVIEW_ONLISTCHANGED_OFFSET UNITYSDK_OFFSET(0x1B33C7E0)
#define SYSTEM_DATA_DATAVIEW_PARENTRELATIONCOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1B33D650)
#define SYSTEM_DATA_DATAVIEW_REMOVE_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x1B33A8C0)
#define SYSTEM_DATA_DATAVIEW_REMOVE_LISTCHANGED_OFFSET UNITYSDK_OFFSET(0x1B33A750)
#define SYSTEM_DATA_DATAVIEW_RESETROWVIEWCACHE_OFFSET UNITYSDK_OFFSET(0x1B33C380)
#define SYSTEM_DATA_DATAVIEW_RESET_OFFSET UNITYSDK_OFFSET(0x1B33CC30)
#define SYSTEM_DATA_DATAVIEW_SETDATAVIEWMANAGER_OFFSET UNITYSDK_OFFSET(0x1B33CDB0)
#define SYSTEM_DATA_DATAVIEW_SETINDEX2_OFFSET UNITYSDK_OFFSET(0x1B337400)
#define SYSTEM_DATA_DATAVIEW_SETINDEX_OFFSET UNITYSDK_OFFSET(0x1B33CFF0)
#define SYSTEM_DATA_DATAVIEW_SET_ROWFILTER_OFFSET UNITYSDK_OFFSET(0x1B3376D0)
#define SYSTEM_DATA_DATAVIEW_SET_ROWSTATEFILTER_OFFSET UNITYSDK_OFFSET(0x1B337860)
#define SYSTEM_DATA_DATAVIEW_SET_SORT_OFFSET UNITYSDK_OFFSET(0x1B3379F0)
#define SYSTEM_DATA_DATAVIEW_SET_TABLE_OFFSET UNITYSDK_OFFSET(0x1B337C40)
#define SYSTEM_DATA_DATAVIEW_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1B337630)
#define SYSTEM_DATA_DATAVIEW_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1B337C30)
#define SYSTEM_DATA_DATAVIEW_SYSTEM_COLLECTIONS_ILIST_ADD_OFFSET UNITYSDK_OFFSET(0x1B339820)
#define SYSTEM_DATA_DATAVIEW_SYSTEM_COLLECTIONS_ILIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B339890)
#define SYSTEM_DATA_DATAVIEW_SYSTEM_COLLECTIONS_ILIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1B3398E0)
#define SYSTEM_DATA_DATAVIEW_SYSTEM_COLLECTIONS_ILIST_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x1B339810)
#define SYSTEM_DATA_DATAVIEW_SYSTEM_COLLECTIONS_ILIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1B339800)
#define SYSTEM_DATA_DATAVIEW_SYSTEM_COLLECTIONS_ILIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B337F00)
#define SYSTEM_DATA_DATAVIEW_SYSTEM_COLLECTIONS_ILIST_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1B339960)
#define SYSTEM_DATA_DATAVIEW_SYSTEM_COLLECTIONS_ILIST_INSERT_OFFSET UNITYSDK_OFFSET(0x1B339B50)
#define SYSTEM_DATA_DATAVIEW_SYSTEM_COLLECTIONS_ILIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x1B339CD0)
#define SYSTEM_DATA_DATAVIEW_SYSTEM_COLLECTIONS_ILIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x1B339BA0)
#define SYSTEM_DATA_DATAVIEW_SYSTEM_COLLECTIONS_ILIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B337FC0)
#define SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLISTVIEW_APPLYSORT_OFFSET UNITYSDK_OFFSET(0x1B33B200)
#define SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLISTVIEW_GET_FILTER_OFFSET UNITYSDK_OFFSET(0x1B33B880)
#define SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLISTVIEW_GET_SORTDESCRIPTIONS_OFFSET UNITYSDK_OFFSET(0x1B33B8A0)
#define SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLISTVIEW_GET_SUPPORTSADVANCEDSORTING_OFFSET UNITYSDK_OFFSET(0x1B33BB80)
#define SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLISTVIEW_GET_SUPPORTSFILTERING_OFFSET UNITYSDK_OFFSET(0x1B33BB90)
#define SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLISTVIEW_REMOVEFILTER_OFFSET UNITYSDK_OFFSET(0x1B33B7D0)
#define SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLISTVIEW_SET_FILTER_OFFSET UNITYSDK_OFFSET(0x1B33B890)
#define SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLIST_ADDINDEX_OFFSET UNITYSDK_OFFSET(0x1B33A940)
#define SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLIST_ADDNEW_OFFSET UNITYSDK_OFFSET(0x1B33A410)
#define SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLIST_APPLYSORT_OFFSET UNITYSDK_OFFSET(0x1B33A9A0)
#define SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLIST_FIND_OFFSET UNITYSDK_OFFSET(0x1B33ABA0)
#define SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_ALLOWEDIT_OFFSET UNITYSDK_OFFSET(0x1B33A420)
#define SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_ALLOWNEW_OFFSET UNITYSDK_OFFSET(0x1B33A400)
#define SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_ALLOWREMOVE_OFFSET UNITYSDK_OFFSET(0x1B33A430)
#define SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_ISSORTED_OFFSET UNITYSDK_OFFSET(0x1B33A470)
#define SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_SORTDIRECTION_OFFSET UNITYSDK_OFFSET(0x1B33A620)
#define SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_SORTPROPERTY_OFFSET UNITYSDK_OFFSET(0x1B33A4E0)
#define SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_SUPPORTSCHANGENOTIFICATION_OFFSET UNITYSDK_OFFSET(0x1B33A440)
#define SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_SUPPORTSSEARCHING_OFFSET UNITYSDK_OFFSET(0x1B33A450)
#define SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_SUPPORTSSORTING_OFFSET UNITYSDK_OFFSET(0x1B33A460)
#define SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLIST_REMOVEINDEX_OFFSET UNITYSDK_OFFSET(0x1B33B100)
#define SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLIST_REMOVESORT_OFFSET UNITYSDK_OFFSET(0x1B33B160)
#define SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_ITYPEDLIST_GETITEMPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B33BC00)
#define SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_ITYPEDLIST_GETLISTNAME_OFFSET UNITYSDK_OFFSET(0x1B33BBA0)
#define SYSTEM_DATA_DATAVIEW_UPDATEINDEX_1_OFFSET UNITYSDK_OFFSET(0x1B33D390)
#define SYSTEM_DATA_DATAVIEW_UPDATEINDEX_2_OFFSET UNITYSDK_OFFSET(0x1B33D010)
#define SYSTEM_DATA_DATAVIEW_UPDATEINDEX_OFFSET UNITYSDK_OFFSET(0x1B338A10)
#define SYSTEM_DATA_DATAVIEW__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B33DB00)
#define SYSTEM_DATA_DATAVIEW__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B337300)
#define SYSTEM_DATA_DATAVIEW__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B3373A0)
#define SYSTEM_DATA_DATAVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B336F80)

namespace System::Data
{
	inline static constexpr unsigned int DataView_TypeDefinitionIndex = 36999;

	class DataView : public ::System::ComponentModel::MarshalByValueComponent
	{
	public:
		static ::System::ComponentModel::ListChangedEventArgs** StaticGet_s_resetEventArgs()
		{
			return (::System::ComponentModel::ListChangedEventArgs**)Il2CppClass::FromTypeDefinitionIndex(DataView_TypeDefinitionIndex)->GetStaticField(0x27580);
		}
		static ::System::Int32* StaticGet_s_objectTypeCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DataView_TypeDefinitionIndex)->GetStaticField(0x8DD0);
		}
		::System::Collections::Generic::Dictionary_2<::System::Data::DataRow*, ::System::Data::DataRowView*>* _rowViewCache; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Data::DataRow*, ::System::Data::DataRowView*>* _rowViewBuffer; // 0x28
		::System::Comparison_1<::System::Data::DataRow*>* _comparison; // 0x30
		::System::EventHandler* Initialized; // 0x38
		::System::Data::DataViewListener* _dvListener; // 0x40
		::System::ComponentModel::ListChangedEventArgs* _addNewMoved; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Data::Index*>* _findIndexes; // 0x50
		::System::Data::IFilter* _rowFilter; // 0x58
		::System::Data::Index* _index; // 0x60
		::System::ComponentModel::ListChangedEventHandler* _onListChanged; // 0x68
		::System::Data::DataTable* _delayedTable; // 0x70
		::System::String* _sort; // 0x78
		::System::Data::DataViewManager* _dataViewManager; // 0x80
		::System::String* _delayedRowFilter; // 0x88
		::System::Data::DataTable* _table; // 0x90
		::System::String* _delayedSort; // 0x98
		::System::Data::DataRow* _addNewRow; // 0xA0
		::System::Boolean _fEndInitInProgress; // 0xA8
		::System::Boolean _allowNew; // 0xA9
		::System::Boolean _locked; // 0xAA
		::System::Boolean _applyDefaultSort; // 0xAB
		::System::Boolean _open; // 0xAC
		::System::Boolean _allowDelete; // 0xAD
		::System::Boolean _shouldOpen; // 0xAE
		::System::Int32 _objectID; // 0xB0
		::System::Boolean _fInitInProgress; // 0xB4
		::System::Boolean _allowEdit; // 0xB5
		::System::Data::DataViewRowState _recordStates; // 0xB8
		::System::Data::DataViewRowState _delayedRecordStates; // 0xBC

		::System::Void _ctor(::System::Data::DataTable* table, ::System::Boolean locked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW__CTOR_OFFSET))(this, table, locked);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW__CTOR_1_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::Data::DataTable* table)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW__CTOR_2_OFFSET))(this, table);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW__CCTOR_OFFSET))();
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_GET_COUNT_OFFSET))(this);
		}

		::System::Int32 get_CountFromIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_GET_COUNTFROMINDEX_OFFSET))(this);
		}

		::System::Boolean get_IsInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_GET_ISINITIALIZED_OFFSET))(this);
		}

		::System::Boolean System_Collections_ICollection_get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::String* get_RowFilter()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_GET_ROWFILTER_OFFSET))(this);
		}

		::System::Void set_RowFilter(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SET_ROWFILTER_OFFSET))(this, value);
		}

		::System::Void set_RowStateFilter(::System::Data::DataViewRowState value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataViewRowState))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SET_ROWSTATEFILTER_OFFSET))(this, value);
		}

		::System::String* get_Sort()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_GET_SORT_OFFSET))(this);
		}

		::System::Void set_Sort(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SET_SORT_OFFSET))(this, value);
		}

		::System::Object* System_Collections_ICollection_get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Void set_Table(::System::Data::DataTable* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SET_TABLE_OFFSET))(this, value);
		}

		::System::Object* System_Collections_IList_get_Item(::System::Int32 recordIndex)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SYSTEM_COLLECTIONS_ILIST_GET_ITEM_OFFSET))(this, recordIndex);
		}

		::System::Void System_Collections_IList_set_Item(::System::Int32 recordIndex, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SYSTEM_COLLECTIONS_ILIST_SET_ITEM_OFFSET))(this, recordIndex, value);
		}

		::System::Data::DataRowView* get_Item(::System::Int32 recordIndex)
		{
			return ((::System::Data::DataRowView*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_GET_ITEM_OFFSET))(this, recordIndex);
		}

		::System::Data::DataRowView* AddNew()
		{
			return ((::System::Data::DataRowView*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_ADDNEW_OFFSET))(this);
		}

		::System::Void BeginInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_BEGININIT_OFFSET))(this);
		}

		::System::Void EndInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_ENDINIT_OFFSET))(this);
		}

		::System::Void CheckOpen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_CHECKOPEN_OFFSET))(this);
		}

		::System::Void CheckSort(::System::String* sort)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_CHECKSORT_OFFSET))(this, sort);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_CLOSE_OFFSET))(this);
		}

		::System::Void CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_COPYTO_OFFSET))(this, array, index);
		}

		::System::Void CopyTo_1(::Il2CppArray<::System::Data::DataRowView*>* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Data::DataRowView*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_COPYTO_1_OFFSET))(this, array, index);
		}

		::System::Void Delete(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_DELETE_OFFSET))(this, index);
		}

		::System::Void Delete_1(::System::Data::DataRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_DELETE_1_OFFSET))(this, row);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void FinishAddNew(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_FINISHADDNEW_OFFSET))(this, success);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_GETENUMERATOR_OFFSET))(this);
		}

		::System::Boolean System_Collections_IList_get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SYSTEM_COLLECTIONS_ILIST_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean System_Collections_IList_get_IsFixedSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SYSTEM_COLLECTIONS_ILIST_GET_ISFIXEDSIZE_OFFSET))(this);
		}

		::System::Int32 System_Collections_IList_Add(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SYSTEM_COLLECTIONS_ILIST_ADD_OFFSET))(this, value);
		}

		::System::Void System_Collections_IList_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SYSTEM_COLLECTIONS_ILIST_CLEAR_OFFSET))(this);
		}

		::System::Boolean System_Collections_IList_Contains(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SYSTEM_COLLECTIONS_ILIST_CONTAINS_OFFSET))(this, value);
		}

		::System::Int32 System_Collections_IList_IndexOf(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SYSTEM_COLLECTIONS_ILIST_INDEXOF_OFFSET))(this, value);
		}

		::System::Int32 IndexOf(::System::Data::DataRowView* rowview)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Data::DataRowView*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_INDEXOF_OFFSET))(this, rowview);
		}

		::System::Int32 IndexOfDataRowView(::System::Data::DataRowView* rowview)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Data::DataRowView*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_INDEXOFDATAROWVIEW_OFFSET))(this, rowview);
		}

		::System::Void System_Collections_IList_Insert(::System::Int32 index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SYSTEM_COLLECTIONS_ILIST_INSERT_OFFSET))(this, index, value);
		}

		::System::Void System_Collections_IList_Remove(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SYSTEM_COLLECTIONS_ILIST_REMOVE_OFFSET))(this, value);
		}

		::System::Void System_Collections_IList_RemoveAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SYSTEM_COLLECTIONS_ILIST_REMOVEAT_OFFSET))(this, index);
		}

		::System::Data::Index* GetFindIndex(::System::String* column, ::System::Boolean keepIndex)
		{
			return ((::System::Data::Index*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_GETFINDINDEX_OFFSET))(this, column, keepIndex);
		}

		::System::Boolean System_ComponentModel_IBindingList_get_AllowNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_ALLOWNEW_OFFSET))(this);
		}

		::System::Object* System_ComponentModel_IBindingList_AddNew()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLIST_ADDNEW_OFFSET))(this);
		}

		::System::Boolean System_ComponentModel_IBindingList_get_AllowEdit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_ALLOWEDIT_OFFSET))(this);
		}

		::System::Boolean System_ComponentModel_IBindingList_get_AllowRemove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_ALLOWREMOVE_OFFSET))(this);
		}

		::System::Boolean System_ComponentModel_IBindingList_get_SupportsChangeNotification()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_SUPPORTSCHANGENOTIFICATION_OFFSET))(this);
		}

		::System::Boolean System_ComponentModel_IBindingList_get_SupportsSearching()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_SUPPORTSSEARCHING_OFFSET))(this);
		}

		::System::Boolean System_ComponentModel_IBindingList_get_SupportsSorting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_SUPPORTSSORTING_OFFSET))(this);
		}

		::System::Boolean System_ComponentModel_IBindingList_get_IsSorted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_ISSORTED_OFFSET))(this);
		}

		::System::ComponentModel::PropertyDescriptor* System_ComponentModel_IBindingList_get_SortProperty()
		{
			return ((::System::ComponentModel::PropertyDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_SORTPROPERTY_OFFSET))(this);
		}

		::System::ComponentModel::PropertyDescriptor* GetSortProperty()
		{
			return ((::System::ComponentModel::PropertyDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_GETSORTPROPERTY_OFFSET))(this);
		}

		::System::ComponentModel::ListSortDirection System_ComponentModel_IBindingList_get_SortDirection()
		{
			return ((::System::ComponentModel::ListSortDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_SORTDIRECTION_OFFSET))(this);
		}

		::System::Void add_ListChanged(::System::ComponentModel::ListChangedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::ListChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_ADD_LISTCHANGED_OFFSET))(this, value);
		}

		::System::Void remove_ListChanged(::System::ComponentModel::ListChangedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::ListChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_REMOVE_LISTCHANGED_OFFSET))(this, value);
		}

		::System::Void add_Initialized(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_ADD_INITIALIZED_OFFSET))(this, value);
		}

		::System::Void remove_Initialized(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_REMOVE_INITIALIZED_OFFSET))(this, value);
		}

		::System::Void System_ComponentModel_IBindingList_AddIndex(::System::ComponentModel::PropertyDescriptor* property)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLIST_ADDINDEX_OFFSET))(this, property);
		}

		::System::Void System_ComponentModel_IBindingList_ApplySort(::System::ComponentModel::PropertyDescriptor* property, ::System::ComponentModel::ListSortDirection direction)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyDescriptor*, ::System::ComponentModel::ListSortDirection))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLIST_APPLYSORT_OFFSET))(this, property, direction);
		}

		::System::Int32 System_ComponentModel_IBindingList_Find(::System::ComponentModel::PropertyDescriptor* property, ::System::Object* key)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ComponentModel::PropertyDescriptor*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLIST_FIND_OFFSET))(this, property, key);
		}

		::System::Void System_ComponentModel_IBindingList_RemoveIndex(::System::ComponentModel::PropertyDescriptor* property)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLIST_REMOVEINDEX_OFFSET))(this, property);
		}

		::System::Void System_ComponentModel_IBindingList_RemoveSort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLIST_REMOVESORT_OFFSET))(this);
		}

		::System::Void System_ComponentModel_IBindingListView_ApplySort(::System::ComponentModel::ListSortDescriptionCollection* sorts)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::ListSortDescriptionCollection*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLISTVIEW_APPLYSORT_OFFSET))(this, sorts);
		}

		::System::String* CreateSortString(::System::ComponentModel::PropertyDescriptor* property, ::System::ComponentModel::ListSortDirection direction)
		{
			return ((::System::String*(*)(::PVOID, ::System::ComponentModel::PropertyDescriptor*, ::System::ComponentModel::ListSortDirection))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_CREATESORTSTRING_OFFSET))(this, property, direction);
		}

		::System::Void System_ComponentModel_IBindingListView_RemoveFilter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLISTVIEW_REMOVEFILTER_OFFSET))(this);
		}

		::System::String* System_ComponentModel_IBindingListView_get_Filter()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLISTVIEW_GET_FILTER_OFFSET))(this);
		}

		::System::Void System_ComponentModel_IBindingListView_set_Filter(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLISTVIEW_SET_FILTER_OFFSET))(this, value);
		}

		::System::ComponentModel::ListSortDescriptionCollection* System_ComponentModel_IBindingListView_get_SortDescriptions()
		{
			return ((::System::ComponentModel::ListSortDescriptionCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLISTVIEW_GET_SORTDESCRIPTIONS_OFFSET))(this);
		}

		::System::ComponentModel::ListSortDescriptionCollection* GetSortDescriptions()
		{
			return ((::System::ComponentModel::ListSortDescriptionCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_GETSORTDESCRIPTIONS_OFFSET))(this);
		}

		::System::Boolean System_ComponentModel_IBindingListView_get_SupportsAdvancedSorting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLISTVIEW_GET_SUPPORTSADVANCEDSORTING_OFFSET))(this);
		}

		::System::Boolean System_ComponentModel_IBindingListView_get_SupportsFiltering()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_IBINDINGLISTVIEW_GET_SUPPORTSFILTERING_OFFSET))(this);
		}

		::System::String* System_ComponentModel_ITypedList_GetListName(::Il2CppArray<::System::ComponentModel::PropertyDescriptor*>* listAccessors)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::ComponentModel::PropertyDescriptor*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_ITYPEDLIST_GETLISTNAME_OFFSET))(this, listAccessors);
		}

		::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ITypedList_GetItemProperties(::Il2CppArray<::System::ComponentModel::PropertyDescriptor*>* listAccessors)
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID, ::Il2CppArray<::System::ComponentModel::PropertyDescriptor*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SYSTEM_COMPONENTMODEL_ITYPEDLIST_GETITEMPROPERTIES_OFFSET))(this, listAccessors);
		}

		::System::Data::IFilter* GetFilter()
		{
			return ((::System::Data::IFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_GETFILTER_OFFSET))(this);
		}

		::System::Int32 GetRecord(::System::Int32 recordIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_GETRECORD_OFFSET))(this, recordIndex);
		}

		::System::Data::DataRow* GetRow(::System::Int32 index)
		{
			return ((::System::Data::DataRow*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_GETROW_OFFSET))(this, index);
		}

		::System::Data::DataRowView* GetRowView(::System::Int32 record)
		{
			return ((::System::Data::DataRowView*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_GETROWVIEW_OFFSET))(this, record);
		}

		::System::Data::DataRowView* GetRowView_1(::System::Data::DataRow* dr)
		{
			return ((::System::Data::DataRowView*(*)(::PVOID, ::System::Data::DataRow*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_GETROWVIEW_1_OFFSET))(this, dr);
		}

		::System::Void IndexListChanged(::System::Object* sender, ::System::ComponentModel::ListChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::ListChangedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_INDEXLISTCHANGED_OFFSET))(this, sender, e);
		}

		::System::Void IndexListChangedInternal(::System::ComponentModel::ListChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::ListChangedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_INDEXLISTCHANGEDINTERNAL_OFFSET))(this, e);
		}

		::System::Void MaintainDataView(::System::ComponentModel::ListChangedType changedType, ::System::Data::DataRow* row, ::System::Boolean trackAddRemove)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::ListChangedType, ::System::Data::DataRow*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_MAINTAINDATAVIEW_OFFSET))(this, changedType, row, trackAddRemove);
		}

		::System::Void OnListChanged(::System::ComponentModel::ListChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::ListChangedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_ONLISTCHANGED_OFFSET))(this, e);
		}

		::System::Void OnInitialized()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_ONINITIALIZED_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_RESET_OFFSET))(this);
		}

		::System::Void ResetRowViewCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_RESETROWVIEWCACHE_OFFSET))(this);
		}

		::System::Void SetDataViewManager(::System::Data::DataViewManager* dataViewManager)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataViewManager*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SETDATAVIEWMANAGER_OFFSET))(this, dataViewManager);
		}

		::System::Void SetIndex(::System::String* newSort, ::System::Data::DataViewRowState newRowStates, ::System::Data::IFilter* newRowFilter)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Data::DataViewRowState, ::System::Data::IFilter*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SETINDEX_OFFSET))(this, newSort, newRowStates, newRowFilter);
		}

		::System::Void SetIndex2(::System::String* newSort, ::System::Data::DataViewRowState newRowStates, ::System::Data::IFilter* newRowFilter, ::System::Boolean fireEvent)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Data::DataViewRowState, ::System::Data::IFilter*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_SETINDEX2_OFFSET))(this, newSort, newRowStates, newRowFilter, fireEvent);
		}

		::System::Void UpdateIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_UPDATEINDEX_OFFSET))(this);
		}

		::System::Void UpdateIndex_1(::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_UPDATEINDEX_1_OFFSET))(this, force);
		}

		::System::Void UpdateIndex_2(::System::Boolean force, ::System::Boolean fireEvent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_UPDATEINDEX_2_OFFSET))(this, force, fireEvent);
		}

		::System::Void ChildRelationCollectionChanged(::System::Object* sender, ::System::ComponentModel::CollectionChangeEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::CollectionChangeEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_CHILDRELATIONCOLLECTIONCHANGED_OFFSET))(this, sender, e);
		}

		::System::Void ParentRelationCollectionChanged(::System::Object* sender, ::System::ComponentModel::CollectionChangeEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::CollectionChangeEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_PARENTRELATIONCOLLECTIONCHANGED_OFFSET))(this, sender, e);
		}

		::System::Void ColumnCollectionChanged(::System::Object* sender, ::System::ComponentModel::CollectionChangeEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::CollectionChangeEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_COLUMNCOLLECTIONCHANGED_OFFSET))(this, sender, e);
		}

		::System::Void ColumnCollectionChangedInternal(::System::Object* sender, ::System::ComponentModel::CollectionChangeEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::CollectionChangeEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_COLUMNCOLLECTIONCHANGEDINTERNAL_OFFSET))(this, sender, e);
		}
	};
}
