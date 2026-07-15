#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/YieldInstruction.h"

#define UNITYENGINE_WAITFORFIXEDUPDATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D22C910)

namespace UnityEngine
{
	inline static constexpr unsigned int WaitForFixedUpdate_TypeDefinitionIndex = 4354;

	class WaitForFixedUpdate : public ::UnityEngine::YieldInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WAITFORFIXEDUPDATE__CTOR_OFFSET))(this);
		}
	};
}
