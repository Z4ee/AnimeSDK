#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Switch.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_BOOLEANSWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1869C020)

namespace System::Diagnostics
{
	inline static constexpr unsigned int BooleanSwitch_TypeDefinitionIndex = 2519;

	class BooleanSwitch : public ::System::Diagnostics::Switch
	{
	public:
		::System::Void _ctor(::System::String* displayName, ::System::String* description)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_BOOLEANSWITCH__CTOR_OFFSET))(this, displayName, description);
		}
	};
}
