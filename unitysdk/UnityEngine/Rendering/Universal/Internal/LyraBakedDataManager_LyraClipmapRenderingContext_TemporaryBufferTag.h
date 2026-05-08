#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraBakedDataManager_LyraClipmapRenderingContext_TemporaryBufferTag_TypeDefinitionIndex = 30466;

	enum class LyraBakedDataManager_LyraClipmapRenderingContext_TemporaryBufferTag : ::System::Int32
	{
		UpdateRegions = 0,
		PendingPages = 1,
		PendingPagesAllocator = 2,
		IndirectArgs = 3,
		PageToSectorCoord = 4,
		DummyPageToSectorCoord = 5,
		BorderBuffer = 6,
		EmissionBorderBuffer = 7,
		TempBufferCount = 8,
	};
}
