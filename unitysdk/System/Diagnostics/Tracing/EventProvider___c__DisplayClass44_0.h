#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventProvider_SessionInfo.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER___C__DISPLAYCLASS44_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB5E360)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER___C__DISPLAYCLASS44_0__GETSESSIONS_B__0_OFFSET UNITYSDK_OFFSET(0x1AB60F90)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventProvider___c__DisplayClass44_0_TypeDefinitionIndex = 1686;

	class EventProvider___c__DisplayClass44_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Diagnostics::Tracing::EventProvider_SessionInfo>* liveSessionList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER___C__DISPLAYCLASS44_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetSessions_b__0(::System::Int32 a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER___C__DISPLAYCLASS44_0__GETSESSIONS_B__0_OFFSET))(this, a1, a2);
		}
	};
}
