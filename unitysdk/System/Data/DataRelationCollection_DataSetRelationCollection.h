#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/DataRelationCollection.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Data { class DataRelation; }
namespace System::Data { class DataSet; }

#define SYSTEM_DATA_DATARELATIONCOLLECTION_DATASETRELATIONCOLLECTION_ADDCORE_OFFSET UNITYSDK_OFFSET(0x1EFBF870)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_DATASETRELATIONCOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x1EFBF540)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_DATASETRELATIONCOLLECTION_FINISHINITRELATIONS_OFFSET UNITYSDK_OFFSET(0x1EFC0880)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_DATASETRELATIONCOLLECTION_GETDATASET_OFFSET UNITYSDK_OFFSET(0x1EFBF580)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_DATASETRELATIONCOLLECTION_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1EFBF7B0)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_DATASETRELATIONCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1EFBF590)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_DATASETRELATIONCOLLECTION_GET_LIST_OFFSET UNITYSDK_OFFSET(0x1EFBF530)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_DATASETRELATIONCOLLECTION_REMOVECORE_OFFSET UNITYSDK_OFFSET(0x1EFC0450)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_DATASETRELATIONCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFBF2E0)

namespace System::Data
{
	inline static constexpr unsigned int DataRelationCollection_DataSetRelationCollection_TypeDefinitionIndex = 39250;

	class DataRelationCollection_DataSetRelationCollection : public ::System::Data::DataRelationCollection
	{
	public:
		::System::Collections::ArrayList* _relations; // 0x30
		::Il2CppArray<::System::Data::DataRelation*>* _delayLoadingRelations; // 0x38
		::System::Data::DataSet* _dataSet; // 0x40

		::System::Void _ctor(::System::Data::DataSet* dataSet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataSet*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_DATASETRELATIONCOLLECTION__CTOR_OFFSET))(this, dataSet);
		}

		::System::Collections::ArrayList* get_List()
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_DATASETRELATIONCOLLECTION_GET_LIST_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_DATASETRELATIONCOLLECTION_CLEAR_OFFSET))(this);
		}

		::System::Data::DataSet* GetDataSet()
		{
			return ((::System::Data::DataSet*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_DATASETRELATIONCOLLECTION_GETDATASET_OFFSET))(this);
		}

		::System::Data::DataRelation* get_Item(::System::Int32 index)
		{
			return ((::System::Data::DataRelation*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_DATASETRELATIONCOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Data::DataRelation* get_Item_1(::System::String* name)
		{
			return ((::System::Data::DataRelation*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_DATASETRELATIONCOLLECTION_GET_ITEM_1_OFFSET))(this, name);
		}

		::System::Void AddCore(::System::Data::DataRelation* relation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRelation*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_DATASETRELATIONCOLLECTION_ADDCORE_OFFSET))(this, relation);
		}

		::System::Void RemoveCore(::System::Data::DataRelation* relation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRelation*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_DATASETRELATIONCOLLECTION_REMOVECORE_OFFSET))(this, relation);
		}

		::System::Void FinishInitRelations()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_DATASETRELATIONCOLLECTION_FINISHINITRELATIONS_OFFSET))(this);
		}
	};
}
