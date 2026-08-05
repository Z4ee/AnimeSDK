#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"

#define UNITYENGINE_GRIDLAYOUT_DONOTHING_OFFSET UNITYSDK_OFFSET(0x1FC70700)
#define UNITYENGINE_GRIDLAYOUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC70710)

namespace UnityEngine
{
	inline static constexpr unsigned int GridLayout_TypeDefinitionIndex = 92666;

	class GridLayout : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRIDLAYOUT__CTOR_OFFSET))(this);
		}

		::System::Void DoNothing()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRIDLAYOUT_DONOTHING_OFFSET))(this);
		}
	};
}
