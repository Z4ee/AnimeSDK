#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Data { class DataSet; }

#define SYSTEM_DATA_DATATABLE_DSROWDIFFIDUSAGESECTION_PREPARE_OFFSET UNITYSDK_OFFSET(0xA58680)

namespace System::Data
{
	inline static constexpr unsigned int DataTable_DSRowDiffIdUsageSection_TypeDefinitionIndex = 38608;

	struct alignas(8) DataTable_DSRowDiffIdUsageSection
	{
		::System::Data::DataSet* _targetDS; // 0x10

		::System::Void Prepare(::System::Data::DataSet* ds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataSet*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_DSROWDIFFIDUSAGESECTION_PREPARE_OFFSET))(this, ds);
		}
	};
}
