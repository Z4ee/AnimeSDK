#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CopyTextureSupport_TypeDefinitionIndex = 4711;

	enum class CopyTextureSupport : ::System::Int32
	{
		None = 0,
		Basic = 1,
		Copy3D = 2,
		DifferentTypes = 4,
		TextureToRT = 8,
		RTToTexture = 16,
	};
}
