#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CRPLightDebugInfo_TypeDefinitionIndex = 4863;

	struct alignas(4) CRPLightDebugInfo
	{
		::System::Int32 profileType; // 0x10
		::System::UInt32 debugFlag; // 0x14
	};
}
