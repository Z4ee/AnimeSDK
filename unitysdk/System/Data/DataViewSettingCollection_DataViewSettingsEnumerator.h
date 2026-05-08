#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Data { class DataViewManager; }
namespace System::Data { class DataViewSettingCollection; }

#define SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION_DATAVIEWSETTINGSENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BA044E0)
#define SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION_DATAVIEWSETTINGSENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BA04320)
#define SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION_DATAVIEWSETTINGSENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1BA04400)
#define SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION_DATAVIEWSETTINGSENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA04150)

namespace System::Data
{
	inline static constexpr unsigned int DataViewSettingCollection_DataViewSettingsEnumerator_TypeDefinitionIndex = 37007;

	class DataViewSettingCollection_DataViewSettingsEnumerator : public ::System::Object
	{
	public:
		::System::Collections::IEnumerator* _tableEnumerator; // 0x10
		::System::Data::DataViewSettingCollection* _dataViewSettings; // 0x18

		::System::Void _ctor(::System::Data::DataViewManager* dvm)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataViewManager*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION_DATAVIEWSETTINGSENUMERATOR__CTOR_OFFSET))(this, dvm);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION_DATAVIEWSETTINGSENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION_DATAVIEWSETTINGSENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION_DATAVIEWSETTINGSENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
