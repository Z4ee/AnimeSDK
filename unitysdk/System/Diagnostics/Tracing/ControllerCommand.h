#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int ControllerCommand_TypeDefinitionIndex = 1673;

	enum class ControllerCommand : ::System::Int32
	{
		Update = 0,
		SendManifest = -1,
		Enable = -2,
		Disable = -3,
	};
}
