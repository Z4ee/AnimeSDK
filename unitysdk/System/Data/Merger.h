#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/DataKey.h"
#include "unitysdk/System/Data/MissingSchemaAction.h"
#include "unitysdk/System/Object.h"

namespace System::Data { class DataRelation; }
namespace System::Data { class DataSet; }
namespace System::Data { class DataTable; }
namespace System::Data { class PropertyCollection; }

#define SYSTEM_DATA_MERGER_GETSRCKEY_OFFSET UNITYSDK_OFFSET(0x1B31F990)
#define SYSTEM_DATA_MERGER_MERGECONSTRAINTS_1_OFFSET UNITYSDK_OFFSET(0x1B320920)
#define SYSTEM_DATA_MERGER_MERGECONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1B31DAE0)
#define SYSTEM_DATA_MERGER_MERGEDATASET_OFFSET UNITYSDK_OFFSET(0x1B31BD30)
#define SYSTEM_DATA_MERGER_MERGEEXTENDEDPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B31EB40)
#define SYSTEM_DATA_MERGER_MERGERELATION_OFFSET UNITYSDK_OFFSET(0x1B31DB70)
#define SYSTEM_DATA_MERGER_MERGESCHEMA_OFFSET UNITYSDK_OFFSET(0x1B31FB90)
#define SYSTEM_DATA_MERGER_MERGETABLEDATA_OFFSET UNITYSDK_OFFSET(0x1B31DA40)
#define SYSTEM_DATA_MERGER_MERGETABLE_1_OFFSET UNITYSDK_OFFSET(0x1B31F2B0)
#define SYSTEM_DATA_MERGER_MERGETABLE_OFFSET UNITYSDK_OFFSET(0x1B31EEA0)
#define SYSTEM_DATA_MERGER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B31BD10)
#define SYSTEM_DATA_MERGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B31BCF0)

namespace System::Data
{
	inline static constexpr unsigned int Merger_TypeDefinitionIndex = 37040;

	class Merger : public ::System::Object
	{
	public:
		::System::Data::DataTable* _dataTable; // 0x10
		::System::Data::DataSet* _dataSet; // 0x18
		::System::Data::MissingSchemaAction _missingSchemaAction; // 0x20
		::System::Boolean _preserveChanges; // 0x24
		::System::Boolean _IgnoreNSforTableLookup; // 0x25
		::System::Boolean _isStandAlonetable; // 0x26

		::System::Void _ctor(::System::Data::DataSet* dataSet, ::System::Boolean preserveChanges, ::System::Data::MissingSchemaAction missingSchemaAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataSet*, ::System::Boolean, ::System::Data::MissingSchemaAction))((::PBYTE)hIl2Cpp + SYSTEM_DATA_MERGER__CTOR_OFFSET))(this, dataSet, preserveChanges, missingSchemaAction);
		}

		::System::Void _ctor_1(::System::Data::DataTable* dataTable, ::System::Boolean preserveChanges, ::System::Data::MissingSchemaAction missingSchemaAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::System::Boolean, ::System::Data::MissingSchemaAction))((::PBYTE)hIl2Cpp + SYSTEM_DATA_MERGER__CTOR_1_OFFSET))(this, dataTable, preserveChanges, missingSchemaAction);
		}

		::System::Void MergeDataSet(::System::Data::DataSet* source)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataSet*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_MERGER_MERGEDATASET_OFFSET))(this, source);
		}

		::System::Void MergeTable(::System::Data::DataTable* src)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_MERGER_MERGETABLE_OFFSET))(this, src);
		}

		::System::Void MergeTable_1(::System::Data::DataTable* src, ::System::Data::DataTable* dst)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_MERGER_MERGETABLE_1_OFFSET))(this, src, dst);
		}

		::System::Data::DataTable* MergeSchema(::System::Data::DataTable* table)
		{
			return ((::System::Data::DataTable*(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_MERGER_MERGESCHEMA_OFFSET))(this, table);
		}

		::System::Void MergeTableData(::System::Data::DataTable* src)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_MERGER_MERGETABLEDATA_OFFSET))(this, src);
		}

		::System::Void MergeConstraints(::System::Data::DataSet* source)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataSet*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_MERGER_MERGECONSTRAINTS_OFFSET))(this, source);
		}

		::System::Void MergeConstraints_1(::System::Data::DataTable* table)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_MERGER_MERGECONSTRAINTS_1_OFFSET))(this, table);
		}

		::System::Void MergeRelation(::System::Data::DataRelation* relation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRelation*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_MERGER_MERGERELATION_OFFSET))(this, relation);
		}

		::System::Void MergeExtendedProperties(::System::Data::PropertyCollection* src, ::System::Data::PropertyCollection* dst)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::PropertyCollection*, ::System::Data::PropertyCollection*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_MERGER_MERGEEXTENDEDPROPERTIES_OFFSET))(this, src, dst);
		}

		::System::Data::DataKey GetSrcKey(::System::Data::DataTable* src, ::System::Data::DataTable* dst)
		{
			return ((::System::Data::DataKey(*)(::PVOID, ::System::Data::DataTable*, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_MERGER_GETSRCKEY_OFFSET))(this, src, dst);
		}
	};
}
