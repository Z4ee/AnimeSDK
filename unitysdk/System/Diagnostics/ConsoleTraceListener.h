#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/TextWriterTraceListener.h"

#define SYSTEM_DIAGNOSTICS_CONSOLETRACELISTENER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19BB0570)
#define SYSTEM_DIAGNOSTICS_CONSOLETRACELISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x19BB0530)

namespace System::Diagnostics
{
	inline static constexpr unsigned int ConsoleTraceListener_TypeDefinitionIndex = 4166;

	class ConsoleTraceListener : public ::System::Diagnostics::TextWriterTraceListener
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CONSOLETRACELISTENER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean useErrorStream)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CONSOLETRACELISTENER__CTOR_1_OFFSET))(this, useErrorStream);
		}
	};
}
