#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Data { class DataRow; }
namespace System::Data { class DataTable; }

#define SYSTEM_DATA_RECORDMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1EAB7170)
#define SYSTEM_DATA_RECORDMANAGER_COPYRECORD_OFFSET UNITYSDK_OFFSET(0x1EAB7420)
#define SYSTEM_DATA_RECORDMANAGER_FREERECORD_OFFSET UNITYSDK_OFFSET(0x1EAB6FA0)
#define SYSTEM_DATA_RECORDMANAGER_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1EAB73D0)
#define SYSTEM_DATA_RECORDMANAGER_GROWRECORDCAPACITY_OFFSET UNITYSDK_OFFSET(0x1EAB6C40)
#define SYSTEM_DATA_RECORDMANAGER_IMPORTRECORD_OFFSET UNITYSDK_OFFSET(0x1EAB7410)
#define SYSTEM_DATA_RECORDMANAGER_NEWCAPACITY_OFFSET UNITYSDK_OFFSET(0x1EAB6D00)
#define SYSTEM_DATA_RECORDMANAGER_NEWRECORDBASE_OFFSET UNITYSDK_OFFSET(0x1EAB6F20)
#define SYSTEM_DATA_RECORDMANAGER_NORMALIZEDMINIMUMCAPACITY_OFFSET UNITYSDK_OFFSET(0x1EAB6D20)
#define SYSTEM_DATA_RECORDMANAGER_SETROWCACHE_OFFSET UNITYSDK_OFFSET(0x1EAB7830)
#define SYSTEM_DATA_RECORDMANAGER_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1EAB70E0)
#define SYSTEM_DATA_RECORDMANAGER_SET_MINIMUMCAPACITY_OFFSET UNITYSDK_OFFSET(0x1EAB6EC0)
#define SYSTEM_DATA_RECORDMANAGER_SET_RECORDCAPACITY_OFFSET UNITYSDK_OFFSET(0x1EAB6D60)
#define SYSTEM_DATA_RECORDMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EAB6BC0)

namespace System::Data
{
	inline static constexpr unsigned int RecordManager_TypeDefinitionIndex = 39331;

	class RecordManager : public ::System::Object
	{
	public:
		::System::Data::DataTable* _table; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* _freeRecordList; // 0x18
		::Il2CppArray<::System::Data::DataRow*>* _rows; // 0x20
		::System::Int32 _recordCapacity; // 0x28
		::System::Int32 _lastFreeRecord; // 0x2C
		::System::Int32 _minimumCapacity; // 0x30

		::System::Void _ctor(::System::Data::DataTable* table)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RECORDMANAGER__CTOR_OFFSET))(this, table);
		}

		::System::Void GrowRecordCapacity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RECORDMANAGER_GROWRECORDCAPACITY_OFFSET))(this);
		}

		::System::Void set_MinimumCapacity(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RECORDMANAGER_SET_MINIMUMCAPACITY_OFFSET))(this, value);
		}

		::System::Void set_RecordCapacity(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RECORDMANAGER_SET_RECORDCAPACITY_OFFSET))(this, value);
		}

		static ::System::Int32 NewCapacity(::System::Int32 capacity)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RECORDMANAGER_NEWCAPACITY_OFFSET))(capacity);
		}

		::System::Int32 NormalizedMinimumCapacity(::System::Int32 capacity)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RECORDMANAGER_NORMALIZEDMINIMUMCAPACITY_OFFSET))(this, capacity);
		}

		::System::Int32 NewRecordBase()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RECORDMANAGER_NEWRECORDBASE_OFFSET))(this);
		}

		::System::Void FreeRecord(::System::Int32& record)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RECORDMANAGER_FREERECORD_OFFSET))(this, record);
		}

		::System::Void Clear(::System::Boolean clearAll)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RECORDMANAGER_CLEAR_OFFSET))(this, clearAll);
		}

		::System::Data::DataRow* get_Item(::System::Int32 record)
		{
			return ((::System::Data::DataRow*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RECORDMANAGER_GET_ITEM_OFFSET))(this, record);
		}

		::System::Void set_Item(::System::Int32 record, ::System::Data::DataRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Data::DataRow*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RECORDMANAGER_SET_ITEM_OFFSET))(this, record, value);
		}

		::System::Int32 ImportRecord(::System::Data::DataTable* src, ::System::Int32 record)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Data::DataTable*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RECORDMANAGER_IMPORTRECORD_OFFSET))(this, src, record);
		}

		::System::Int32 CopyRecord(::System::Data::DataTable* src, ::System::Int32 record, ::System::Int32 copy)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Data::DataTable*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RECORDMANAGER_COPYRECORD_OFFSET))(this, src, record, copy);
		}

		::System::Void SetRowCache(::Il2CppArray<::System::Data::DataRow*>* newRows)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Data::DataRow*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RECORDMANAGER_SETROWCACHE_OFFSET))(this, newRows);
		}
	};
}
