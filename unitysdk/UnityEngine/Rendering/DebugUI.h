#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_DEBUGUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0EC2A0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_TypeDefinitionIndex = 34087;

	class DebugUI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI__CTOR_OFFSET))(this);
		}
	};
}
