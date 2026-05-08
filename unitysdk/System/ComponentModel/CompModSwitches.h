#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Diagnostics { class BooleanSwitch; }
namespace System::Diagnostics { class TraceSwitch; }

#define SYSTEM_COMPONENTMODEL_COMPMODSWITCHES_GET_COMMONDESIGNERSERVICES_OFFSET UNITYSDK_OFFSET(0x1B1E32C0)
#define SYSTEM_COMPONENTMODEL_COMPMODSWITCHES_GET_EVENTLOG_OFFSET UNITYSDK_OFFSET(0x1B1E3470)

namespace System::ComponentModel
{
	inline static constexpr unsigned int CompModSwitches_TypeDefinitionIndex = 2837;

	class CompModSwitches : public ::System::Object
	{
	public:
		static ::System::Diagnostics::BooleanSwitch** StaticGet_commonDesignerServices()
		{
			return (::System::Diagnostics::BooleanSwitch**)Il2CppClass::FromTypeDefinitionIndex(CompModSwitches_TypeDefinitionIndex)->GetStaticField(0x2580);
		}
		static ::System::Diagnostics::TraceSwitch** StaticGet_eventLog()
		{
			return (::System::Diagnostics::TraceSwitch**)Il2CppClass::FromTypeDefinitionIndex(CompModSwitches_TypeDefinitionIndex)->GetStaticField(0x2588);
		}

		static ::System::Diagnostics::BooleanSwitch* get_CommonDesignerServices()
		{
			return ((::System::Diagnostics::BooleanSwitch*(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPMODSWITCHES_GET_COMMONDESIGNERSERVICES_OFFSET))();
		}

		static ::System::Diagnostics::TraceSwitch* get_EventLog()
		{
			return ((::System::Diagnostics::TraceSwitch*(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPMODSWITCHES_GET_EVENTLOG_OFFSET))();
		}
	};
}
