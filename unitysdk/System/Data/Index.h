#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/ListChangedType.h"
#include "unitysdk/System/Data/DataViewRowState.h"
#include "unitysdk/System/Data/IndexField.h"
#include "unitysdk/System/Data/RBTree_1_RBTreeEnumerator.h"
#include "unitysdk/System/Data/Range.h"
#include "unitysdk/System/Object.h"

namespace System { class WeakReference; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::ComponentModel { class ListChangedEventArgs; }
namespace System::Data { class DataColumnCollection; }
namespace System::Data { class DataRow; }
namespace System::Data { class DataTable; }
namespace System::Data { class DataViewListener; }
namespace System::Data { class IFilter; }
namespace System::Data { class Index_IndexTree; }
namespace System::Data { template <typename T> class Listeners_1; }

#define SYSTEM_DATA_INDEX_ACCEPTRECORD_1_OFFSET UNITYSDK_OFFSET(0x1B33E530)
#define SYSTEM_DATA_INDEX_ACCEPTRECORD_OFFSET UNITYSDK_OFFSET(0x1B33E4A0)
#define SYSTEM_DATA_INDEX_ADDREF_OFFSET UNITYSDK_OFFSET(0x1B33A1B0)
#define SYSTEM_DATA_INDEX_APPLYCHANGEACTION_OFFSET UNITYSDK_OFFSET(0x1B33E7F0)
#define SYSTEM_DATA_INDEX_CHECKUNIQUE_OFFSET UNITYSDK_OFFSET(0x1B33EE40)
#define SYSTEM_DATA_INDEX_COMPAREDATAROWS_OFFSET UNITYSDK_OFFSET(0x1B33F180)
#define SYSTEM_DATA_INDEX_COMPAREDUPLICATERECORDS_OFFSET UNITYSDK_OFFSET(0x1B33F240)
#define SYSTEM_DATA_INDEX_COMPARERECORDS_OFFSET UNITYSDK_OFFSET(0x1B33EE60)
#define SYSTEM_DATA_INDEX_COMPARERECORDTOKEY_OFFSET UNITYSDK_OFFSET(0x1B33F3C0)
#define SYSTEM_DATA_INDEX_DELETERECORDFROMINDEX_OFFSET UNITYSDK_OFFSET(0x1B33F4E0)
#define SYSTEM_DATA_INDEX_DELETERECORD_1_OFFSET UNITYSDK_OFFSET(0x1B33F4F0)
#define SYSTEM_DATA_INDEX_DELETERECORD_OFFSET UNITYSDK_OFFSET(0x1B33EE30)
#define SYSTEM_DATA_INDEX_EQUAL_OFFSET UNITYSDK_OFFSET(0x1B33E370)
#define SYSTEM_DATA_INDEX_FINDNODEBYKEYRECORD_OFFSET UNITYSDK_OFFSET(0x1B340120)
#define SYSTEM_DATA_INDEX_FINDNODEBYKEYS_OFFSET UNITYSDK_OFFSET(0x1B33FE40)
#define SYSTEM_DATA_INDEX_FINDNODEBYKEY_OFFSET UNITYSDK_OFFSET(0x1B33FC00)
#define SYSTEM_DATA_INDEX_FINDRECORDS_1_OFFSET UNITYSDK_OFFSET(0x1B3402F0)
#define SYSTEM_DATA_INDEX_FINDRECORDS_OFFSET UNITYSDK_OFFSET(0x1B33B090)
#define SYSTEM_DATA_INDEX_FIRERESETEVENT_OFFSET UNITYSDK_OFFSET(0x1B340330)
#define SYSTEM_DATA_INDEX_GETALLFIELDS_OFFSET UNITYSDK_OFFSET(0x1B33DE60)
#define SYSTEM_DATA_INDEX_GETCHANGEACTION_OFFSET UNITYSDK_OFFSET(0x1B340630)
#define SYSTEM_DATA_INDEX_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B338CA0)
#define SYSTEM_DATA_INDEX_GETINDEX_1_OFFSET UNITYSDK_OFFSET(0x1B33EC90)
#define SYSTEM_DATA_INDEX_GETINDEX_OFFSET UNITYSDK_OFFSET(0x1B339AD0)
#define SYSTEM_DATA_INDEX_GETRANGEFROMNODE_OFFSET UNITYSDK_OFFSET(0x1B3401D0)
#define SYSTEM_DATA_INDEX_GETRECORD_OFFSET UNITYSDK_OFFSET(0x1B33B0D0)
#define SYSTEM_DATA_INDEX_GETREPLACEACTION_OFFSET UNITYSDK_OFFSET(0x1B340650)
#define SYSTEM_DATA_INDEX_GETROWS_1_OFFSET UNITYSDK_OFFSET(0x1B340730)
#define SYSTEM_DATA_INDEX_GETROWS_OFFSET UNITYSDK_OFFSET(0x1B3406F0)
#define SYSTEM_DATA_INDEX_GETROW_OFFSET UNITYSDK_OFFSET(0x1B340670)
#define SYSTEM_DATA_INDEX_GETUNIQUEKEYVALUES_1_OFFSET UNITYSDK_OFFSET(0x1B33F9C0)
#define SYSTEM_DATA_INDEX_GETUNIQUEKEYVALUES_OFFSET UNITYSDK_OFFSET(0x1B33F860)
#define SYSTEM_DATA_INDEX_GET_DOLISTCHANGED_OFFSET UNITYSDK_OFFSET(0x1B340450)
#define SYSTEM_DATA_INDEX_GET_HASDUPLICATES_OFFSET UNITYSDK_OFFSET(0x1B33E480)
#define SYSTEM_DATA_INDEX_GET_RECORDSTATES_OFFSET UNITYSDK_OFFSET(0x1B33E3F0)
#define SYSTEM_DATA_INDEX_GET_ROWFILTER_OFFSET UNITYSDK_OFFSET(0x1B33E400)
#define SYSTEM_DATA_INDEX_INITRECORDS_OFFSET UNITYSDK_OFFSET(0x1B33DF50)
#define SYSTEM_DATA_INDEX_INSERTRECORDTOINDEX_OFFSET UNITYSDK_OFFSET(0x1B3409B0)
#define SYSTEM_DATA_INDEX_INSERTRECORD_OFFSET UNITYSDK_OFFSET(0x1B33E970)
#define SYSTEM_DATA_INDEX_ISKEYININDEX_1_OFFSET UNITYSDK_OFFSET(0x1B340A80)
#define SYSTEM_DATA_INDEX_ISKEYININDEX_OFFSET UNITYSDK_OFFSET(0x1B340A60)
#define SYSTEM_DATA_INDEX_ISKEYRECORDININDEX_OFFSET UNITYSDK_OFFSET(0x1B340AA0)
#define SYSTEM_DATA_INDEX_LISTCHANGEDADD_OFFSET UNITYSDK_OFFSET(0x1B33E700)
#define SYSTEM_DATA_INDEX_LISTCHANGEDREMOVE_OFFSET UNITYSDK_OFFSET(0x1B33E790)
#define SYSTEM_DATA_INDEX_MAINTAINDATAVIEW_OFFSET UNITYSDK_OFFSET(0x1B33F640)
#define SYSTEM_DATA_INDEX_ONLISTCHANGED_1_OFFSET UNITYSDK_OFFSET(0x1B33F770)
#define SYSTEM_DATA_INDEX_ONLISTCHANGED_2_OFFSET UNITYSDK_OFFSET(0x1B3404B0)
#define SYSTEM_DATA_INDEX_ONLISTCHANGED_OFFSET UNITYSDK_OFFSET(0x1B340AC0)
#define SYSTEM_DATA_INDEX_RECORDCHANGED_1_OFFSET UNITYSDK_OFFSET(0x1B340D30)
#define SYSTEM_DATA_INDEX_RECORDCHANGED_OFFSET UNITYSDK_OFFSET(0x1B340BB0)
#define SYSTEM_DATA_INDEX_RECORDSTATECHANGED_1_OFFSET UNITYSDK_OFFSET(0x1B340F50)
#define SYSTEM_DATA_INDEX_RECORDSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1B340E50)
#define SYSTEM_DATA_INDEX_REMOVEREF_OFFSET UNITYSDK_OFFSET(0x1B339F60)
#define SYSTEM_DATA_INDEX_RESET_OFFSET UNITYSDK_OFFSET(0x1B33CC60)
#define SYSTEM_DATA_INDEX__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B33D3A0)
#define SYSTEM_DATA_INDEX__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B33DBD0)
#define SYSTEM_DATA_INDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1B33DBA0)

namespace System::Data
{
	inline static constexpr unsigned int Index_TypeDefinitionIndex = 37061;

	class Index : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_s_objectTypeCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Index_TypeDefinitionIndex)->GetStaticField(0x8DE0);
		}
		::System::Data::Listeners_1<::System::Data::DataViewListener*>* _listeners; // 0x10
		::System::WeakReference* _rowFilter; // 0x18
		::Il2CppArray<::System::Data::IndexField>* _indexFields; // 0x20
		::System::Data::Index_IndexTree* _records; // 0x28
		::System::Comparison_1<::System::Data::DataRow*>* _comparison; // 0x30
		::System::Data::DataTable* _table; // 0x38
		::System::Int32 _refCount; // 0x40
		::System::Data::DataViewRowState _recordStates; // 0x44
		::System::Int32 _objectID; // 0x48
		::System::Int32 _recordCount; // 0x4C
		::System::Boolean _isSharable; // 0x50
		::System::Boolean _hasRemoteAggregate; // 0x51
		::System::Boolean _suspendEvents; // 0x52

		::System::Void _ctor(::System::Data::DataTable* table, ::Il2CppArray<::System::Data::IndexField>* indexFields, ::System::Data::DataViewRowState recordStates, ::System::Data::IFilter* rowFilter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::Il2CppArray<::System::Data::IndexField>*, ::System::Data::DataViewRowState, ::System::Data::IFilter*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX__CTOR_OFFSET))(this, table, indexFields, recordStates, rowFilter);
		}

		::System::Void _ctor_1(::System::Data::DataTable* table, ::System::Comparison_1<::System::Data::DataRow*>* comparison, ::System::Data::DataViewRowState recordStates, ::System::Data::IFilter* rowFilter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::System::Comparison_1<::System::Data::DataRow*>*, ::System::Data::DataViewRowState, ::System::Data::IFilter*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX__CTOR_1_OFFSET))(this, table, comparison, recordStates, rowFilter);
		}

		::System::Void _ctor_2(::System::Data::DataTable* table, ::Il2CppArray<::System::Data::IndexField>* indexFields, ::System::Comparison_1<::System::Data::DataRow*>* comparison, ::System::Data::DataViewRowState recordStates, ::System::Data::IFilter* rowFilter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::Il2CppArray<::System::Data::IndexField>*, ::System::Comparison_1<::System::Data::DataRow*>*, ::System::Data::DataViewRowState, ::System::Data::IFilter*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX__CTOR_2_OFFSET))(this, table, indexFields, comparison, recordStates, rowFilter);
		}

		static ::Il2CppArray<::System::Data::IndexField>* GetAllFields(::System::Data::DataColumnCollection* columns)
		{
			return ((::Il2CppArray<::System::Data::IndexField>*(*)(::System::Data::DataColumnCollection*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_GETALLFIELDS_OFFSET))(columns);
		}

		::System::Boolean Equal(::Il2CppArray<::System::Data::IndexField>* indexDesc, ::System::Data::DataViewRowState recordStates, ::System::Data::IFilter* rowFilter)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Data::IndexField>*, ::System::Data::DataViewRowState, ::System::Data::IFilter*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_EQUAL_OFFSET))(this, indexDesc, recordStates, rowFilter);
		}

		::System::Data::DataViewRowState get_RecordStates()
		{
			return ((::System::Data::DataViewRowState(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_GET_RECORDSTATES_OFFSET))(this);
		}

		::System::Data::IFilter* get_RowFilter()
		{
			return ((::System::Data::IFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_GET_ROWFILTER_OFFSET))(this);
		}

		::System::Int32 GetRecord(::System::Int32 recordIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_GETRECORD_OFFSET))(this, recordIndex);
		}

		::System::Boolean get_HasDuplicates()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_GET_HASDUPLICATES_OFFSET))(this);
		}

		::System::Boolean AcceptRecord(::System::Int32 record)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_ACCEPTRECORD_OFFSET))(this, record);
		}

		::System::Boolean AcceptRecord_1(::System::Int32 record, ::System::Data::IFilter* filter)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Data::IFilter*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_ACCEPTRECORD_1_OFFSET))(this, record, filter);
		}

		::System::Void ListChangedAdd(::System::Data::DataViewListener* listener)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataViewListener*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_LISTCHANGEDADD_OFFSET))(this, listener);
		}

		::System::Void ListChangedRemove(::System::Data::DataViewListener* listener)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataViewListener*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_LISTCHANGEDREMOVE_OFFSET))(this, listener);
		}

		::System::Void AddRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_ADDREF_OFFSET))(this);
		}

		::System::Int32 RemoveRef()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_REMOVEREF_OFFSET))(this);
		}

		::System::Void ApplyChangeAction(::System::Int32 record, ::System::Int32 action, ::System::Int32 changeRecord)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_APPLYCHANGEACTION_OFFSET))(this, record, action, changeRecord);
		}

		::System::Boolean CheckUnique()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_CHECKUNIQUE_OFFSET))(this);
		}

		::System::Int32 CompareRecords(::System::Int32 record1, ::System::Int32 record2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_COMPARERECORDS_OFFSET))(this, record1, record2);
		}

		::System::Int32 CompareDataRows(::System::Int32 record1, ::System::Int32 record2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_COMPAREDATAROWS_OFFSET))(this, record1, record2);
		}

		::System::Int32 CompareDuplicateRecords(::System::Int32 record1, ::System::Int32 record2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_COMPAREDUPLICATERECORDS_OFFSET))(this, record1, record2);
		}

		::System::Int32 CompareRecordToKey(::System::Int32 record1, ::Il2CppArray<::System::Object*>* vals)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_COMPARERECORDTOKEY_OFFSET))(this, record1, vals);
		}

		::System::Void DeleteRecordFromIndex(::System::Int32 recordIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_DELETERECORDFROMINDEX_OFFSET))(this, recordIndex);
		}

		::System::Void DeleteRecord(::System::Int32 recordIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_DELETERECORD_OFFSET))(this, recordIndex);
		}

		::System::Void DeleteRecord_1(::System::Int32 recordIndex, ::System::Boolean fireEvent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_DELETERECORD_1_OFFSET))(this, recordIndex, fireEvent);
		}

		::System::Data::RBTree_1_RBTreeEnumerator<::System::Int32> GetEnumerator(::System::Int32 startIndex)
		{
			return ((::System::Data::RBTree_1_RBTreeEnumerator<::System::Int32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_GETENUMERATOR_OFFSET))(this, startIndex);
		}

		::System::Int32 GetIndex(::System::Int32 record)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_GETINDEX_OFFSET))(this, record);
		}

		::System::Int32 GetIndex_1(::System::Int32 record, ::System::Int32 changeRecord)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_GETINDEX_1_OFFSET))(this, record, changeRecord);
		}

		::Il2CppArray<::System::Object*>* GetUniqueKeyValues()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_GETUNIQUEKEYVALUES_OFFSET))(this);
		}

		::System::Int32 FindNodeByKey(::System::Object* originalKey)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_FINDNODEBYKEY_OFFSET))(this, originalKey);
		}

		::System::Int32 FindNodeByKeys(::Il2CppArray<::System::Object*>* originalKey)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_FINDNODEBYKEYS_OFFSET))(this, originalKey);
		}

		::System::Int32 FindNodeByKeyRecord(::System::Int32 record)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_FINDNODEBYKEYRECORD_OFFSET))(this, record);
		}

		::System::Data::Range GetRangeFromNode(::System::Int32 nodeId)
		{
			return ((::System::Data::Range(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_GETRANGEFROMNODE_OFFSET))(this, nodeId);
		}

		::System::Data::Range FindRecords(::System::Object* key)
		{
			return ((::System::Data::Range(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_FINDRECORDS_OFFSET))(this, key);
		}

		::System::Data::Range FindRecords_1(::Il2CppArray<::System::Object*>* key)
		{
			return ((::System::Data::Range(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_FINDRECORDS_1_OFFSET))(this, key);
		}

		::System::Void FireResetEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_FIRERESETEVENT_OFFSET))(this);
		}

		::System::Int32 GetChangeAction(::System::Data::DataViewRowState oldState, ::System::Data::DataViewRowState newState)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Data::DataViewRowState, ::System::Data::DataViewRowState))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_GETCHANGEACTION_OFFSET))(this, oldState, newState);
		}

		static ::System::Int32 GetReplaceAction(::System::Data::DataViewRowState oldState)
		{
			return ((::System::Int32(*)(::System::Data::DataViewRowState))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_GETREPLACEACTION_OFFSET))(oldState);
		}

		::System::Data::DataRow* GetRow(::System::Int32 i)
		{
			return ((::System::Data::DataRow*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_GETROW_OFFSET))(this, i);
		}

		::Il2CppArray<::System::Data::DataRow*>* GetRows(::Il2CppArray<::System::Object*>* values)
		{
			return ((::Il2CppArray<::System::Data::DataRow*>*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_GETROWS_OFFSET))(this, values);
		}

		::Il2CppArray<::System::Data::DataRow*>* GetRows_1(::System::Data::Range range)
		{
			return ((::Il2CppArray<::System::Data::DataRow*>*(*)(::PVOID, ::System::Data::Range))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_GETROWS_1_OFFSET))(this, range);
		}

		::System::Void InitRecords(::System::Data::IFilter* filter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::IFilter*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_INITRECORDS_OFFSET))(this, filter);
		}

		::System::Int32 InsertRecordToIndex(::System::Int32 record)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_INSERTRECORDTOINDEX_OFFSET))(this, record);
		}

		::System::Int32 InsertRecord(::System::Int32 record, ::System::Boolean fireEvent)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_INSERTRECORD_OFFSET))(this, record, fireEvent);
		}

		::System::Boolean IsKeyInIndex(::System::Object* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_ISKEYININDEX_OFFSET))(this, key);
		}

		::System::Boolean IsKeyInIndex_1(::Il2CppArray<::System::Object*>* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_ISKEYININDEX_1_OFFSET))(this, key);
		}

		::System::Boolean IsKeyRecordInIndex(::System::Int32 record)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_ISKEYRECORDININDEX_OFFSET))(this, record);
		}

		::System::Boolean get_DoListChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_GET_DOLISTCHANGED_OFFSET))(this);
		}

		::System::Void OnListChanged(::System::ComponentModel::ListChangedType changedType, ::System::Int32 newIndex, ::System::Int32 oldIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::ListChangedType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_ONLISTCHANGED_OFFSET))(this, changedType, newIndex, oldIndex);
		}

		::System::Void OnListChanged_1(::System::ComponentModel::ListChangedType changedType, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::ListChangedType, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_ONLISTCHANGED_1_OFFSET))(this, changedType, index);
		}

		::System::Void OnListChanged_2(::System::ComponentModel::ListChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::ListChangedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_ONLISTCHANGED_2_OFFSET))(this, e);
		}

		::System::Void MaintainDataView(::System::ComponentModel::ListChangedType changedType, ::System::Int32 record, ::System::Boolean trackAddRemove)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::ListChangedType, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_MAINTAINDATAVIEW_OFFSET))(this, changedType, record, trackAddRemove);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_RESET_OFFSET))(this);
		}

		::System::Void RecordChanged(::System::Int32 record)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_RECORDCHANGED_OFFSET))(this, record);
		}

		::System::Void RecordChanged_1(::System::Int32 oldIndex, ::System::Int32 newIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_RECORDCHANGED_1_OFFSET))(this, oldIndex, newIndex);
		}

		::System::Void RecordStateChanged(::System::Int32 record, ::System::Data::DataViewRowState oldState, ::System::Data::DataViewRowState newState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Data::DataViewRowState, ::System::Data::DataViewRowState))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_RECORDSTATECHANGED_OFFSET))(this, record, oldState, newState);
		}

		::System::Void RecordStateChanged_1(::System::Int32 oldRecord, ::System::Data::DataViewRowState oldOldState, ::System::Data::DataViewRowState oldNewState, ::System::Int32 newRecord, ::System::Data::DataViewRowState newOldState, ::System::Data::DataViewRowState newNewState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Data::DataViewRowState, ::System::Data::DataViewRowState, ::System::Int32, ::System::Data::DataViewRowState, ::System::Data::DataViewRowState))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_RECORDSTATECHANGED_1_OFFSET))(this, oldRecord, oldOldState, oldNewState, newRecord, newOldState, newNewState);
		}

		::System::Void GetUniqueKeyValues_1(::System::Collections::Generic::List_1<::Il2CppArray<::System::Object*>*>* list, ::System::Int32 curNodeId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Il2CppArray<::System::Object*>*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_GETUNIQUEKEYVALUES_1_OFFSET))(this, list, curNodeId);
		}
	};
}
