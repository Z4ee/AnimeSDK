#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/YieldInstruction.h"

#define UNITYENGINE_WAITFORENDOFFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2E96D0)

namespace UnityEngine
{
	inline static constexpr unsigned int WaitForEndOfFrame_TypeDefinitionIndex = 4348;

	class WaitForEndOfFrame : public ::UnityEngine::YieldInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WAITFORENDOFFRAME__CTOR_OFFSET))(this);
		}
	};
}
