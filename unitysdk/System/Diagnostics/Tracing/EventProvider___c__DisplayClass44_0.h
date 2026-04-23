#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventProvider_SessionInfo.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER___C__DISPLAYCLASS44_0__CTOR_OFFSET UNITYSDK_OFFSET(0x178EA1D0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER___C__DISPLAYCLASS44_0__GETSESSIONS_B__0_OFFSET UNITYSDK_OFFSET(0x178EC880)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventProvider___c__DisplayClass44_0_TypeDefinitionIndex = 1677;

	class EventProvider___c__DisplayClass44_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Diagnostics::Tracing::EventProvider_SessionInfo>* liveSessionList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER___C__DISPLAYCLASS44_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetSessions_b__0(::System::Int32 etwSessionId, ::System::Int64 matchAllKeywords)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER___C__DISPLAYCLASS44_0__GETSESSIONS_B__0_OFFSET))(this, etwSessionId, matchAllKeywords);
		}
	};
}
