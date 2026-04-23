#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Formats::Alembic::Util
{
	inline static constexpr unsigned int ExportScope_TypeDefinitionIndex = 40748;

	enum class ExportScope : ::System::Int32
	{
		EntireScene = 0,
		TargetBranch = 1,
	};
}
