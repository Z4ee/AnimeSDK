#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Switch.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_BOOLEANSWITCH_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1B1E5E50)
#define SYSTEM_DIAGNOSTICS_BOOLEANSWITCH_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1B1E5EB0)
#define SYSTEM_DIAGNOSTICS_BOOLEANSWITCH_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1B1E5E90)
#define SYSTEM_DIAGNOSTICS_BOOLEANSWITCH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B1E5DE0)
#define SYSTEM_DIAGNOSTICS_BOOLEANSWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1E33E0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int BooleanSwitch_TypeDefinitionIndex = 2753;

	class BooleanSwitch : public ::System::Diagnostics::Switch
	{
	public:
		::System::Void _ctor(::System::String* displayName, ::System::String* description)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_BOOLEANSWITCH__CTOR_OFFSET))(this, displayName, description);
		}

		::System::Void _ctor_1(::System::String* displayName, ::System::String* description, ::System::String* defaultSwitchValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_BOOLEANSWITCH__CTOR_1_OFFSET))(this, displayName, description, defaultSwitchValue);
		}

		::System::Boolean get_Enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_BOOLEANSWITCH_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_Enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_BOOLEANSWITCH_SET_ENABLED_OFFSET))(this, value);
		}

		::System::Void OnValueChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_BOOLEANSWITCH_ONVALUECHANGED_OFFSET))(this);
		}
	};
}
