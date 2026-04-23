#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class LocalDataStoreMgr; }

#define SYSTEM_LOCALDATASTORESLOT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1797DB20)
#define SYSTEM_LOCALDATASTORESLOT_GET_COOKIE_OFFSET UNITYSDK_OFFSET(0x1797DB10)
#define SYSTEM_LOCALDATASTORESLOT_GET_MANAGER_OFFSET UNITYSDK_OFFSET(0x1797DAF0)
#define SYSTEM_LOCALDATASTORESLOT_GET_SLOT_OFFSET UNITYSDK_OFFSET(0x1797DB00)
#define SYSTEM_LOCALDATASTORESLOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1797D4C0)

namespace System
{
	inline static constexpr unsigned int LocalDataStoreSlot_TypeDefinitionIndex = 167;

	class LocalDataStoreSlot : public ::System::Object
	{
	public:
		::System::LocalDataStoreMgr* m_mgr; // 0x10
		::System::Int32 m_slot; // 0x18
		::System::Int64 m_cookie; // 0x20

		::System::Void _ctor(::System::LocalDataStoreMgr* mgr, ::System::Int32 slot, ::System::Int64 cookie)
		{
			return ((::System::Void(*)(::PVOID, ::System::LocalDataStoreMgr*, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTORESLOT__CTOR_OFFSET))(this, mgr, slot, cookie);
		}

		::System::LocalDataStoreMgr* get_Manager()
		{
			return ((::System::LocalDataStoreMgr*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTORESLOT_GET_MANAGER_OFFSET))(this);
		}

		::System::Int32 get_Slot()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTORESLOT_GET_SLOT_OFFSET))(this);
		}

		::System::Int64 get_Cookie()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTORESLOT_GET_COOKIE_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTORESLOT_FINALIZE_OFFSET))(this);
		}
	};
}
