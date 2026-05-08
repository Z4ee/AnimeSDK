#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int EMaterialLodType_TypeDefinitionIndex = 30446;

	enum class EMaterialLodType : ::System::Int32
	{
		NoLod = 0,
		Hide = 1,
	};
}
