#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_LOCALDATASTOREELEMENT_GET_COOKIE_OFFSET UNITYSDK_OFFSET(0x1797D040)
#define SYSTEM_LOCALDATASTOREELEMENT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1797D020)
#define SYSTEM_LOCALDATASTOREELEMENT_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1797D030)
#define SYSTEM_LOCALDATASTOREELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1797D010)

namespace System
{
	inline static constexpr unsigned int LocalDataStoreElement_TypeDefinitionIndex = 165;

	class LocalDataStoreElement : public ::System::Object
	{
	public:
		::System::Object* m_value; // 0x10
		::System::Int64 m_cookie; // 0x18

		::System::Void _ctor(::System::Int64 cookie)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTOREELEMENT__CTOR_OFFSET))(this, cookie);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTOREELEMENT_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTOREELEMENT_SET_VALUE_OFFSET))(this, value);
		}

		::System::Int64 get_Cookie()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTOREELEMENT_GET_COOKIE_OFFSET))(this);
		}
	};
}
