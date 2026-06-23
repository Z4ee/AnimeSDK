#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int QueryPairedUserAccountCommand_Result_TypeDefinitionIndex = 31861;

	enum class QueryPairedUserAccountCommand_Result : ::System::Int64
	{
		DevicePairedToUserAccount = 2,
		UserAccountSelectionInProgress = 4,
		UserAccountSelectionComplete = 8,
		UserAccountSelectionCanceled = 16,
	};
}
