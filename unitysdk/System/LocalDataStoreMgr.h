#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class LocalDataStore; }
namespace System { class LocalDataStoreHolder; }
namespace System { class LocalDataStoreSlot; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SYSTEM_LOCALDATASTOREMGR_ALLOCATEDATASLOT_OFFSET UNITYSDK_OFFSET(0x1C9D1200)
#define SYSTEM_LOCALDATASTOREMGR_CREATELOCALDATASTORE_OFFSET UNITYSDK_OFFSET(0x1C9D0FC0)
#define SYSTEM_LOCALDATASTOREMGR_DELETELOCALDATASTORE_OFFSET UNITYSDK_OFFSET(0x1C9D1110)
#define SYSTEM_LOCALDATASTOREMGR_FREEDATASLOT_OFFSET UNITYSDK_OFFSET(0x1C9D1470)
#define SYSTEM_LOCALDATASTOREMGR_GETSLOTTABLELENGTH_OFFSET UNITYSDK_OFFSET(0x1C9D16F0)
#define SYSTEM_LOCALDATASTOREMGR_VALIDATESLOT_OFFSET UNITYSDK_OFFSET(0x1C9D1680)
#define SYSTEM_LOCALDATASTOREMGR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9D1710)

namespace System
{
	inline static constexpr unsigned int LocalDataStoreMgr_TypeDefinitionIndex = 155;

	class LocalDataStoreMgr : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Boolean>* m_SlotInfoTable; // 0x10
		::System::Collections::Generic::List_1<::System::LocalDataStore*>* m_ManagedLocalDataStores; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::LocalDataStoreSlot*>* m_KeyToSlotMap; // 0x20
		::System::Int64 m_CookieGenerator; // 0x28
		::System::Int32 m_FirstAvailableSlot; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTOREMGR__CTOR_OFFSET))(this);
		}

		::System::LocalDataStoreHolder* CreateLocalDataStore()
		{
			return ((::System::LocalDataStoreHolder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTOREMGR_CREATELOCALDATASTORE_OFFSET))(this);
		}

		::System::Void DeleteLocalDataStore(::System::LocalDataStore* store)
		{
			return ((::System::Void(*)(::PVOID, ::System::LocalDataStore*))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTOREMGR_DELETELOCALDATASTORE_OFFSET))(this, store);
		}

		::System::LocalDataStoreSlot* AllocateDataSlot()
		{
			return ((::System::LocalDataStoreSlot*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTOREMGR_ALLOCATEDATASLOT_OFFSET))(this);
		}

		::System::Void FreeDataSlot(::System::Int32 slot, ::System::Int64 cookie)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTOREMGR_FREEDATASLOT_OFFSET))(this, slot, cookie);
		}

		::System::Void ValidateSlot(::System::LocalDataStoreSlot* slot)
		{
			return ((::System::Void(*)(::PVOID, ::System::LocalDataStoreSlot*))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTOREMGR_VALIDATESLOT_OFFSET))(this, slot);
		}

		::System::Int32 GetSlotTableLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTOREMGR_GETSLOTTABLELENGTH_OFFSET))(this);
		}
	};
}
