#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_LOCALDATASTOREELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19540DC0)

namespace System
{
	inline static constexpr unsigned int LocalDataStoreElement_TypeDefinitionIndex = 152;

	class LocalDataStoreElement : public ::System::Object
	{
	public:
		::System::Object* m_value; // 0x10
		::System::Int64 m_cookie; // 0x18

		::System::Void _ctor(::System::Int64 cookie)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTOREELEMENT__CTOR_OFFSET))(this, cookie);
		}
	};
}
