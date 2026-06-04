#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class LocalDataStoreElement; }
namespace System { class LocalDataStoreMgr; }
namespace System { class LocalDataStoreSlot; }

#define SYSTEM_LOCALDATASTORE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1872E0D0)
#define SYSTEM_LOCALDATASTORE_FREEDATA_OFFSET UNITYSDK_OFFSET(0x1872E720)
#define SYSTEM_LOCALDATASTORE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1872E1E0)
#define SYSTEM_LOCALDATASTORE_POPULATEELEMENT_OFFSET UNITYSDK_OFFSET(0x1872E4F0)
#define SYSTEM_LOCALDATASTORE_SETDATA_OFFSET UNITYSDK_OFFSET(0x1872E390)
#define SYSTEM_LOCALDATASTORE__CTOR_OFFSET UNITYSDK_OFFSET(0x1872E080)

namespace System
{
	inline static constexpr unsigned int LocalDataStore_TypeDefinitionIndex = 165;

	class LocalDataStore : public ::System::Object
	{
	public:
		::Il2CppArray<::System::LocalDataStoreElement*>* m_DataTable; // 0x10
		::System::LocalDataStoreMgr* m_Manager; // 0x18

		::System::Void _ctor(::System::LocalDataStoreMgr* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::LocalDataStoreMgr*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTORE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTORE_DISPOSE_OFFSET))(this);
		}

		::System::Object* GetData(::System::LocalDataStoreSlot* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::LocalDataStoreSlot*))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTORE_GETDATA_OFFSET))(this, a1);
		}

		::System::Void SetData(::System::LocalDataStoreSlot* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::LocalDataStoreSlot*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTORE_SETDATA_OFFSET))(this, a1, a2);
		}

		::System::Void FreeData(::System::Int32 a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTORE_FREEDATA_OFFSET))(this, a1, a2);
		}

		::System::LocalDataStoreElement* PopulateElement(::System::LocalDataStoreSlot* a1)
		{
			return ((::System::LocalDataStoreElement*(*)(::PVOID, ::System::LocalDataStoreSlot*))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTORE_POPULATEELEMENT_OFFSET))(this, a1);
		}
	};
}
