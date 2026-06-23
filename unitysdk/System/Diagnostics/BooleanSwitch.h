#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Switch.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_BOOLEANSWITCH_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1D5CD930)
#define SYSTEM_DIAGNOSTICS_BOOLEANSWITCH_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1D5CD990)
#define SYSTEM_DIAGNOSTICS_BOOLEANSWITCH_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1D5CD970)
#define SYSTEM_DIAGNOSTICS_BOOLEANSWITCH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D5CD8C0)
#define SYSTEM_DIAGNOSTICS_BOOLEANSWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CAEC0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int BooleanSwitch_TypeDefinitionIndex = 2752;

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
