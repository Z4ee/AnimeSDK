#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraBakedDataManager_LyraClipmapRenderingContext_TemporaryBufferTag_TypeDefinitionIndex = 26913;

	enum class LyraBakedDataManager_LyraClipmapRenderingContext_TemporaryBufferTag : ::System::Int32
	{
		TempBufferCount = 8,
		PageToSectorCoord = 4,
		PendingPages = 1,
		IndirectArgs = 3,
		UpdateRegions = 0,
		PendingPagesAllocator = 2,
		BorderBuffer = 6,
		DummyPageToSectorCoord = 5,
		EmissionBorderBuffer = 7,
	};
}
