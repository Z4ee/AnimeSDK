#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Diagnostics { class CorrelationManager; }
namespace System::Diagnostics { class TraceListenerCollection; }

#define SYSTEM_DIAGNOSTICS_TRACE_GET_AUTOFLUSH_OFFSET UNITYSDK_OFFSET(0x1A0E1B50)
#define SYSTEM_DIAGNOSTICS_TRACE_GET_CORRELATIONMANAGER_OFFSET UNITYSDK_OFFSET(0x1A0E1B70)
#define SYSTEM_DIAGNOSTICS_TRACE_GET_LISTENERS_OFFSET UNITYSDK_OFFSET(0x1A0E18C0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int Trace_TypeDefinitionIndex = 2525;

	class Trace : public ::System::Object
	{
	public:
		static ::System::Diagnostics::CorrelationManager** StaticGet_correlationManager()
		{
			return (::System::Diagnostics::CorrelationManager**)Il2CppClass::FromTypeDefinitionIndex(Trace_TypeDefinitionIndex)->GetStaticField(0x12890);
		}

		static ::System::Diagnostics::TraceListenerCollection* get_Listeners()
		{
			return ((::System::Diagnostics::TraceListenerCollection*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_GET_LISTENERS_OFFSET))();
		}

		static ::System::Boolean get_AutoFlush()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_GET_AUTOFLUSH_OFFSET))();
		}

		static ::System::Diagnostics::CorrelationManager* get_CorrelationManager()
		{
			return ((::System::Diagnostics::CorrelationManager*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_GET_CORRELATIONMANAGER_OFFSET))();
		}
	};
}
