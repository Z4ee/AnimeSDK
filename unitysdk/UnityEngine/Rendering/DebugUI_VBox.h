#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/DebugUI_Container.h"

#define UNITYENGINE_RENDERING_DEBUGUI_VBOX__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4AE4B0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_VBox_TypeDefinitionIndex = 18279;

	class DebugUI_VBox : public ::UnityEngine::Rendering::DebugUI_Container
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_VBOX__CTOR_OFFSET))(this);
		}
	};
}
