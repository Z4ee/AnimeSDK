#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int CertUsage_TypeDefinitionIndex = 3307;

	enum class CertUsage : ::System::Int32
	{
		MatchTypeAnd = 0,
		MatchTypeOr = 1,
	};
}
