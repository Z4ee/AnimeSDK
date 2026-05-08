#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/SourceLevels.h"
#include "unitysdk/System/Diagnostics/Switch.h"
#include "unitysdk/System/Diagnostics/TraceEventType.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_SOURCESWITCH_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x19AE5EF0)
#define SYSTEM_DIAGNOSTICS_SOURCESWITCH_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x19AE60D0)
#define SYSTEM_DIAGNOSTICS_SOURCESWITCH_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x19AE5F70)
#define SYSTEM_DIAGNOSTICS_SOURCESWITCH_SHOULDTRACE_OFFSET UNITYSDK_OFFSET(0x19AE6090)
#define SYSTEM_DIAGNOSTICS_SOURCESWITCH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19AE5CD0)
#define SYSTEM_DIAGNOSTICS_SOURCESWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x19AE5BF0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int SourceSwitch_TypeDefinitionIndex = 2760;

	class SourceSwitch : public ::System::Diagnostics::Switch
	{
	public:
		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SOURCESWITCH__CTOR_OFFSET))(this, name);
		}

		::System::Void _ctor_1(::System::String* displayName, ::System::String* defaultSwitchValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SOURCESWITCH__CTOR_1_OFFSET))(this, displayName, defaultSwitchValue);
		}

		::System::Diagnostics::SourceLevels get_Level()
		{
			return ((::System::Diagnostics::SourceLevels(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SOURCESWITCH_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::Diagnostics::SourceLevels value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::SourceLevels))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SOURCESWITCH_SET_LEVEL_OFFSET))(this, value);
		}

		::System::Boolean ShouldTrace(::System::Diagnostics::TraceEventType eventType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Diagnostics::TraceEventType))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SOURCESWITCH_SHOULDTRACE_OFFSET))(this, eventType);
		}

		::System::Void OnValueChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SOURCESWITCH_ONVALUECHANGED_OFFSET))(this);
		}
	};
}
