#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"

#define UNITYENGINE_GRIDLAYOUT_DONOTHING_OFFSET UNITYSDK_OFFSET(0x1F015BA0)

namespace UnityEngine
{
	inline static constexpr unsigned int GridLayout_TypeDefinitionIndex = 5151;

	class GridLayout : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void DoNothing()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRIDLAYOUT_DONOTHING_OFFSET))(this);
		}
	};
}
