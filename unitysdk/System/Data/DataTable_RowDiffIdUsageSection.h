#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Data { class DataTable; }

#define SYSTEM_DATA_DATATABLE_ROWDIFFIDUSAGESECTION_PREPARE_OFFSET UNITYSDK_OFFSET(0x9B74D0)

namespace System::Data
{
	inline static constexpr unsigned int DataTable_RowDiffIdUsageSection_TypeDefinitionIndex = 36990;

	struct alignas(8) DataTable_RowDiffIdUsageSection
	{
		::System::Data::DataTable* _targetTable; // 0x10

		::System::Void Prepare(::System::Data::DataTable* table)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_ROWDIFFIDUSAGESECTION_PREPARE_OFFSET))(this, table);
		}
	};
}
