#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics::Contracts
{
	inline static constexpr unsigned int ContractFailureKind_TypeDefinitionIndex = 1580;

	enum class ContractFailureKind : ::System::Int32
	{
		Precondition = 0,
		Postcondition = 1,
		PostconditionOnException = 2,
		Invariant = 3,
		Assert = 4,
		Assume = 5,
	};
}
