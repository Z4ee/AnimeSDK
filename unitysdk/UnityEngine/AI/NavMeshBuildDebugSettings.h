#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshBuildDebugSettings_TypeDefinitionIndex = 27412;

	struct alignas(1) NavMeshBuildDebugSettings
	{
		::System::Byte m_Flags; // 0x10
	};
}
