#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"

#define UNITYENGINE_FLARELAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B294D40)

namespace UnityEngine
{
	inline static constexpr unsigned int FlareLayer_TypeDefinitionIndex = 4037;

	class FlareLayer : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FLARELAYER__CTOR_OFFSET))(this);
		}
	};
}
