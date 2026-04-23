#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class LocalDataStoreElement; }
namespace System { class LocalDataStoreMgr; }
namespace System { class LocalDataStoreSlot; }

#define SYSTEM_LOCALDATASTORE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1797C8B0)
#define SYSTEM_LOCALDATASTORE_FREEDATA_OFFSET UNITYSDK_OFFSET(0x1797CFA0)
#define SYSTEM_LOCALDATASTORE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1797C9C0)
#define SYSTEM_LOCALDATASTORE_POPULATEELEMENT_OFFSET UNITYSDK_OFFSET(0x1797CCF0)
#define SYSTEM_LOCALDATASTORE_SETDATA_OFFSET UNITYSDK_OFFSET(0x1797CB80)
#define SYSTEM_LOCALDATASTORE__CTOR_OFFSET UNITYSDK_OFFSET(0x1797C860)

namespace System
{
	inline static constexpr unsigned int LocalDataStore_TypeDefinitionIndex = 166;

	class LocalDataStore : public ::System::Object
	{
	public:
		::System::LocalDataStoreMgr* m_Manager; // 0x10
		::Il2CppArray<::System::LocalDataStoreElement*>* m_DataTable; // 0x18

		::System::Void _ctor(::System::LocalDataStoreMgr* mgr, ::System::Int32 InitialCapacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::LocalDataStoreMgr*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTORE__CTOR_OFFSET))(this, mgr, InitialCapacity);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTORE_DISPOSE_OFFSET))(this);
		}

		::System::Object* GetData(::System::LocalDataStoreSlot* slot)
		{
			return ((::System::Object*(*)(::PVOID, ::System::LocalDataStoreSlot*))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTORE_GETDATA_OFFSET))(this, slot);
		}

		::System::Void SetData(::System::LocalDataStoreSlot* slot, ::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::LocalDataStoreSlot*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTORE_SETDATA_OFFSET))(this, slot, data);
		}

		::System::Void FreeData(::System::Int32 slot, ::System::Int64 cookie)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTORE_FREEDATA_OFFSET))(this, slot, cookie);
		}

		::System::LocalDataStoreElement* PopulateElement(::System::LocalDataStoreSlot* slot)
		{
			return ((::System::LocalDataStoreElement*(*)(::PVOID, ::System::LocalDataStoreSlot*))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTORE_POPULATEELEMENT_OFFSET))(this, slot);
		}
	};
}
