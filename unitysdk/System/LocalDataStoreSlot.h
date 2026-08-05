#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class LocalDataStoreMgr; }

#define SYSTEM_LOCALDATASTORESLOT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E40A3E0)
#define SYSTEM_LOCALDATASTORESLOT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E40A460)
#define SYSTEM_LOCALDATASTORESLOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E40A3D0)

namespace System
{
	inline static constexpr unsigned int LocalDataStoreSlot_TypeDefinitionIndex = 154;

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

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTORESLOT__CTOR_1_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTORESLOT_FINALIZE_OFFSET))(this);
		}
	};
}
