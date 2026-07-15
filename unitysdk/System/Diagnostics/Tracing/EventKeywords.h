#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventKeywords_TypeDefinitionIndex = 1709;

	enum class EventKeywords : ::System::Int64
	{
		None = 0,
		All = -1,
		MicrosoftTelemetry = 562949953421312,
		WdiContext = 562949953421312,
		WdiDiagnostic = 1125899906842624,
		Sqm = 2251799813685248,
		AuditFailure = 4503599627370496,
		AuditSuccess = 9007199254740992,
		CorrelationHint = 4503599627370496,
		EventLogClassic = 36028797018963968,
	};
}
