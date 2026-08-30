#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class LocalDataStore; }
namespace System { class LocalDataStoreHolder; }
namespace System { class LocalDataStoreSlot; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SYSTEM_LOCALDATASTOREMGR_ALLOCATEDATASLOT_OFFSET UNITYSDK_OFFSET(0x1BD6E4C0)
#define SYSTEM_LOCALDATASTOREMGR_ALLOCATENAMEDDATASLOT_OFFSET UNITYSDK_OFFSET(0x1BD6E6C0)
#define SYSTEM_LOCALDATASTOREMGR_CREATELOCALDATASTORE_OFFSET UNITYSDK_OFFSET(0x1BD6E2E0)
#define SYSTEM_LOCALDATASTOREMGR_DELETELOCALDATASTORE_OFFSET UNITYSDK_OFFSET(0x1BD6DB70)
#define SYSTEM_LOCALDATASTOREMGR_FREEDATASLOT_OFFSET UNITYSDK_OFFSET(0x1BD6EA20)
#define SYSTEM_LOCALDATASTOREMGR_FREENAMEDDATASLOT_OFFSET UNITYSDK_OFFSET(0x1BD6E930)
#define SYSTEM_LOCALDATASTOREMGR_GETNAMEDDATASLOT_OFFSET UNITYSDK_OFFSET(0x1BD6E810)
#define SYSTEM_LOCALDATASTOREMGR_GETSLOTTABLELENGTH_OFFSET UNITYSDK_OFFSET(0x1BD6E1E0)
#define SYSTEM_LOCALDATASTOREMGR_VALIDATESLOT_OFFSET UNITYSDK_OFFSET(0x1BD6DDA0)
#define SYSTEM_LOCALDATASTOREMGR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD6EBC0)

namespace System
{
	inline static constexpr unsigned int LocalDataStoreMgr_TypeDefinitionIndex = 167;

	class LocalDataStoreMgr : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::LocalDataStoreSlot*>* m_KeyToSlotMap; // 0x10
		::Il2CppArray<::System::Boolean>* m_SlotInfoTable; // 0x18
		::System::Collections::Generic::List_1<::System::LocalDataStore*>* m_ManagedLocalDataStores; // 0x20
		::System::Int32 m_FirstAvailableSlot; // 0x28
		::System::Int64 m_CookieGenerator; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTOREMGR__CTOR_OFFSET))(this);
		}

		::System::LocalDataStoreHolder* CreateLocalDataStore()
		{
			return ((::System::LocalDataStoreHolder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTOREMGR_CREATELOCALDATASTORE_OFFSET))(this);
		}

		::System::Void DeleteLocalDataStore(::System::LocalDataStore* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::LocalDataStore*))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTOREMGR_DELETELOCALDATASTORE_OFFSET))(this, a1);
		}

		::System::LocalDataStoreSlot* AllocateDataSlot()
		{
			return ((::System::LocalDataStoreSlot*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTOREMGR_ALLOCATEDATASLOT_OFFSET))(this);
		}

		::System::LocalDataStoreSlot* AllocateNamedDataSlot(::System::String* a1)
		{
			return ((::System::LocalDataStoreSlot*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTOREMGR_ALLOCATENAMEDDATASLOT_OFFSET))(this, a1);
		}

		::System::LocalDataStoreSlot* GetNamedDataSlot(::System::String* a1)
		{
			return ((::System::LocalDataStoreSlot*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTOREMGR_GETNAMEDDATASLOT_OFFSET))(this, a1);
		}

		::System::Void FreeNamedDataSlot(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTOREMGR_FREENAMEDDATASLOT_OFFSET))(this, a1);
		}

		::System::Void FreeDataSlot(::System::Int32 a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTOREMGR_FREEDATASLOT_OFFSET))(this, a1, a2);
		}

		::System::Void ValidateSlot(::System::LocalDataStoreSlot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::LocalDataStoreSlot*))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTOREMGR_VALIDATESLOT_OFFSET))(this, a1);
		}

		::System::Int32 GetSlotTableLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTOREMGR_GETSLOTTABLELENGTH_OFFSET))(this);
		}
	};
}
