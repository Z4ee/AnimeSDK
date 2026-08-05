#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class IEnumerator; }
namespace System::Data { class DataTable; }
namespace System::Data { class DataViewManager; }
namespace System::Data { class DataViewSetting; }

#define SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1F0B6A30)
#define SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F0B6C40)
#define SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1F0B6C90)
#define SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1F0B6CF0)
#define SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1F0B6890)
#define SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1F0B6D00)
#define SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1F0B6D10)
#define SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1F0B6990)
#define SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F0B6D40)
#define SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F0B67D0)

namespace System::Data
{
	inline static constexpr unsigned int DataViewSettingCollection_TypeDefinitionIndex = 39284;

	class DataViewSettingCollection : public ::System::Object
	{
	public:
		::System::Collections::Hashtable* _list; // 0x10
		::System::Data::DataViewManager* _dataViewManager; // 0x18

		::System::Void _ctor(::System::Data::DataViewManager* dataViewManager)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataViewManager*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION__CTOR_OFFSET))(this, dataViewManager);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION__CTOR_1_OFFSET))(this);
		}

		::System::Data::DataViewSetting* get_Item(::System::Data::DataTable* table)
		{
			return ((::System::Data::DataViewSetting*(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION_GET_ITEM_OFFSET))(this, table);
		}

		::System::Void set_Item(::System::Data::DataTable* table, ::System::Data::DataViewSetting* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::System::Data::DataViewSetting*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION_SET_ITEM_OFFSET))(this, table, value);
		}

		::System::Void CopyTo(::System::Array* ar, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION_COPYTO_OFFSET))(this, ar, index);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Void Remove(::System::Data::DataTable* table)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION_REMOVE_OFFSET))(this, table);
		}
	};
}
