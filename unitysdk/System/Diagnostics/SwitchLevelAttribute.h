#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define SYSTEM_DIAGNOSTICS_SWITCHLEVELATTRIBUTE_GET_SWITCHLEVELTYPE_OFFSET UNITYSDK_OFFSET(0x1AFE0910)
#define SYSTEM_DIAGNOSTICS_SWITCHLEVELATTRIBUTE_SET_SWITCHLEVELTYPE_OFFSET UNITYSDK_OFFSET(0x1AFE08A0)
#define SYSTEM_DIAGNOSTICS_SWITCHLEVELATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFE0830)

namespace System::Diagnostics
{
	inline static constexpr unsigned int SwitchLevelAttribute_TypeDefinitionIndex = 2763;

	class SwitchLevelAttribute : public ::System::Attribute
	{
	public:
		::System::Type* type; // 0x10

		::System::Void _ctor(::System::Type* switchLevelType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCHLEVELATTRIBUTE__CTOR_OFFSET))(this, switchLevelType);
		}

		::System::Type* get_SwitchLevelType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCHLEVELATTRIBUTE_GET_SWITCHLEVELTYPE_OFFSET))(this);
		}

		::System::Void set_SwitchLevelType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCHLEVELATTRIBUTE_SET_SWITCHLEVELTYPE_OFFSET))(this, value);
		}
	};
}
