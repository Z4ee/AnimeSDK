#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int DecalProjector_UVMirrorType_TypeDefinitionIndex = 27275;

	enum class DecalProjector_UVMirrorType : ::System::Int32
	{
		LeftRight = 1,
		None = 0,
		UpDown = 2,
	};
}
