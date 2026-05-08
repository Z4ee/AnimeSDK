#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/DataViewRowState.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Data { class DataTable; }
namespace System::Data { class DataViewManager; }

#define SYSTEM_DATA_DATAVIEWSETTING_SETDATATABLE_OFFSET UNITYSDK_OFFSET(0x1B4FF210)
#define SYSTEM_DATA_DATAVIEWSETTING_SETDATAVIEWMANAGER_OFFSET UNITYSDK_OFFSET(0x1B4FF200)
#define SYSTEM_DATA_DATAVIEWSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4FF1E0)

namespace System::Data
{
	inline static constexpr unsigned int DataViewSetting_TypeDefinitionIndex = 37005;

	class DataViewSetting : public ::System::Object
	{
	public:
		::System::String* _rowFilter; // 0x10
		::System::String* _sort; // 0x18
		::System::Data::DataViewManager* _dataViewManager; // 0x20
		::System::Data::DataTable* _table; // 0x28
		::System::Boolean _applyDefaultSort; // 0x30
		::System::Data::DataViewRowState _rowStateFilter; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWSETTING__CTOR_OFFSET))(this);
		}

		::System::Void SetDataViewManager(::System::Data::DataViewManager* dataViewManager)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataViewManager*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWSETTING_SETDATAVIEWMANAGER_OFFSET))(this, dataViewManager);
		}

		::System::Void SetDataTable(::System::Data::DataTable* table)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWSETTING_SETDATATABLE_OFFSET))(this, table);
		}
	};
}
