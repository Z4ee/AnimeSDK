#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraBakedDataManager_LyraClipmapRenderingContext_TemporaryBufferTag_TypeDefinitionIndex = 27329;

	enum class LyraBakedDataManager_LyraClipmapRenderingContext_TemporaryBufferTag : ::System::Int32
	{
		DummyPageToSectorCoord = 5,
		IndirectArgs = 3,
		TempBufferCount = 8,
		EmissionBorderBuffer = 7,
		UpdateRegions = 0,
		PendingPages = 1,
		PageToSectorCoord = 4,
		PendingPagesAllocator = 2,
		BorderBuffer = 6,
	};
}
