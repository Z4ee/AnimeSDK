#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int AddCmdType_TypeDefinitionIndex = 4800;

	enum class AddCmdType : ::System::Int32
	{
		kAddCmdBefore = 0,
		kAddCmdAfter = 1,
		kAddCmdCustom = 2,
		kAddCmdBeforeDraw = 3,
	};
}
