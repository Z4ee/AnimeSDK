#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class LocalDataStore; }

#define SYSTEM_LOCALDATASTOREHOLDER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1797D060)
#define SYSTEM_LOCALDATASTOREHOLDER_GET_STORE_OFFSET UNITYSDK_OFFSET(0x1797D0E0)
#define SYSTEM_LOCALDATASTOREHOLDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1797D050)

namespace System
{
	inline static constexpr unsigned int LocalDataStoreHolder_TypeDefinitionIndex = 164;

	class LocalDataStoreHolder : public ::System::Object
	{
	public:
		::System::LocalDataStore* m_Store; // 0x10

		::System::Void _ctor(::System::LocalDataStore* store)
		{
			return ((::System::Void(*)(::PVOID, ::System::LocalDataStore*))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTOREHOLDER__CTOR_OFFSET))(this, store);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTOREHOLDER_FINALIZE_OFFSET))(this);
		}

		::System::LocalDataStore* get_Store()
		{
			return ((::System::LocalDataStore*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTOREHOLDER_GET_STORE_OFFSET))(this);
		}
	};
}
