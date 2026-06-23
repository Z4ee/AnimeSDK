#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int ImgTextFeature_DeferredWork_TypeDefinitionIndex = 40085;

	enum class ImgTextFeature_DeferredWork : ::System::Int32
	{
		ContentLost = 1,
		Rebuild = 2,
		None = 0,
		Position = 4,
	};
}
