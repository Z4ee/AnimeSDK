#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define SYSTEM_DIAGNOSTICS_SWITCHLEVELATTRIBUTE_SET_SWITCHLEVELTYPE_OFFSET UNITYSDK_OFFSET(0x186A7080)
#define SYSTEM_DIAGNOSTICS_SWITCHLEVELATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x186A7010)

namespace System::Diagnostics
{
	inline static constexpr unsigned int SwitchLevelAttribute_TypeDefinitionIndex = 2523;

	class SwitchLevelAttribute : public ::System::Attribute
	{
	public:
		::System::Type* type; // 0x10

		::System::Void _ctor(::System::Type* switchLevelType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCHLEVELATTRIBUTE__CTOR_OFFSET))(this, switchLevelType);
		}

		::System::Void set_SwitchLevelType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCHLEVELATTRIBUTE_SET_SWITCHLEVELTYPE_OFFSET))(this, value);
		}
	};
}
