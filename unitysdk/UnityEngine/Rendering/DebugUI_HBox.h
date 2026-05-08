#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/DebugUI_Container.h"

#define UNITYENGINE_RENDERING_DEBUGUI_HBOX__CTOR_OFFSET UNITYSDK_OFFSET(0x191F55F0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_HBox_TypeDefinitionIndex = 9548;

	class DebugUI_HBox : public ::UnityEngine::Rendering::DebugUI_Container
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_HBOX__CTOR_OFFSET))(this);
		}
	};
}
