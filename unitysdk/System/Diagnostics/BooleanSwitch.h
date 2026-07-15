#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Switch.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_BOOLEANSWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x19165D40)

namespace System::Diagnostics
{
	inline static constexpr unsigned int BooleanSwitch_TypeDefinitionIndex = 2524;

	class BooleanSwitch : public ::System::Diagnostics::Switch
	{
	public:
		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_BOOLEANSWITCH__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
