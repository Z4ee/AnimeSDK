#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System::Diagnostics { class EventLogEntry; }

#define SYSTEM_DIAGNOSTICS_ENTRYWRITTENEVENTARGS_GET_ENTRY_OFFSET UNITYSDK_OFFSET(0x1B1E5FE0)
#define SYSTEM_DIAGNOSTICS_ENTRYWRITTENEVENTARGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B1E5FA0)
#define SYSTEM_DIAGNOSTICS_ENTRYWRITTENEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1E5F60)

namespace System::Diagnostics
{
	inline static constexpr unsigned int EntryWrittenEventArgs_TypeDefinitionIndex = 4096;

	class EntryWrittenEventArgs : public ::System::EventArgs
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_ENTRYWRITTENEVENTARGS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Diagnostics::EventLogEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::EventLogEntry*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_ENTRYWRITTENEVENTARGS__CTOR_1_OFFSET))(this, entry);
		}

		::System::Diagnostics::EventLogEntry* get_Entry()
		{
			return ((::System::Diagnostics::EventLogEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_ENTRYWRITTENEVENTARGS_GET_ENTRY_OFFSET))(this);
		}
	};
}
