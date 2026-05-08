#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/DataRelationCollection.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::ComponentModel { class CollectionChangeEventHandler; }
namespace System::Data { class DataRelation; }
namespace System::Data { class DataSet; }
namespace System::Data { class DataTable; }

#define SYSTEM_DATA_DATARELATIONCOLLECTION_DATATABLERELATIONCOLLECTION_ADDCACHE_OFFSET UNITYSDK_OFFSET(0x1B31B740)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_DATATABLERELATIONCOLLECTION_ADDCORE_OFFSET UNITYSDK_OFFSET(0x1B31B790)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_DATATABLERELATIONCOLLECTION_ADD_RELATIONPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1B31B640)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_DATATABLERELATIONCOLLECTION_ENSUREDATASET_OFFSET UNITYSDK_OFFSET(0x1B31B3E0)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_DATATABLERELATIONCOLLECTION_GETDATASET_OFFSET UNITYSDK_OFFSET(0x1B31B440)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_DATATABLERELATIONCOLLECTION_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1B31B580)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_DATATABLERELATIONCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B31B4A0)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_DATATABLERELATIONCOLLECTION_GET_LIST_OFFSET UNITYSDK_OFFSET(0x1B31B3D0)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_DATATABLERELATIONCOLLECTION_REMOVECACHE_OFFSET UNITYSDK_OFFSET(0x1B31B8E0)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_DATATABLERELATIONCOLLECTION_REMOVECORE_OFFSET UNITYSDK_OFFSET(0x1B31B9D0)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_DATATABLERELATIONCOLLECTION_REMOVE_RELATIONPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1B31B6C0)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_DATATABLERELATIONCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B31B290)

namespace System::Data
{
	inline static constexpr unsigned int DataRelationCollection_DataTableRelationCollection_TypeDefinitionIndex = 36971;

	class DataRelationCollection_DataTableRelationCollection : public ::System::Data::DataRelationCollection
	{
	public:
		::System::Collections::ArrayList* _relations; // 0x30
		::System::Data::DataTable* _table; // 0x38
		::System::ComponentModel::CollectionChangeEventHandler* RelationPropertyChanged; // 0x40
		::System::Boolean _fParentCollection; // 0x48

		::System::Void _ctor(::System::Data::DataTable* table, ::System::Boolean fParentCollection)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_DATATABLERELATIONCOLLECTION__CTOR_OFFSET))(this, table, fParentCollection);
		}

		::System::Collections::ArrayList* get_List()
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_DATATABLERELATIONCOLLECTION_GET_LIST_OFFSET))(this);
		}

		::System::Void EnsureDataSet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_DATATABLERELATIONCOLLECTION_ENSUREDATASET_OFFSET))(this);
		}

		::System::Data::DataSet* GetDataSet()
		{
			return ((::System::Data::DataSet*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_DATATABLERELATIONCOLLECTION_GETDATASET_OFFSET))(this);
		}

		::System::Data::DataRelation* get_Item(::System::Int32 index)
		{
			return ((::System::Data::DataRelation*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_DATATABLERELATIONCOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Data::DataRelation* get_Item_1(::System::String* name)
		{
			return ((::System::Data::DataRelation*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_DATATABLERELATIONCOLLECTION_GET_ITEM_1_OFFSET))(this, name);
		}

		::System::Void add_RelationPropertyChanged(::System::ComponentModel::CollectionChangeEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::CollectionChangeEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_DATATABLERELATIONCOLLECTION_ADD_RELATIONPROPERTYCHANGED_OFFSET))(this, value);
		}

		::System::Void remove_RelationPropertyChanged(::System::ComponentModel::CollectionChangeEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::CollectionChangeEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_DATATABLERELATIONCOLLECTION_REMOVE_RELATIONPROPERTYCHANGED_OFFSET))(this, value);
		}

		::System::Void AddCache(::System::Data::DataRelation* relation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRelation*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_DATATABLERELATIONCOLLECTION_ADDCACHE_OFFSET))(this, relation);
		}

		::System::Void AddCore(::System::Data::DataRelation* relation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRelation*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_DATATABLERELATIONCOLLECTION_ADDCORE_OFFSET))(this, relation);
		}

		::System::Void RemoveCache(::System::Data::DataRelation* relation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRelation*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_DATATABLERELATIONCOLLECTION_REMOVECACHE_OFFSET))(this, relation);
		}

		::System::Void RemoveCore(::System::Data::DataRelation* relation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRelation*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_DATATABLERELATIONCOLLECTION_REMOVECORE_OFFSET))(this, relation);
		}
	};
}
