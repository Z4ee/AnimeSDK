#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/DebugUI_Field_1.h"

#define UNITYENGINE_RENDERING_DEBUGUI_BOOLFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B15BC30)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_BoolField_TypeDefinitionIndex = 33722;

	class DebugUI_BoolField : public ::UnityEngine::Rendering::DebugUI_Field_1<::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_BOOLFIELD__CTOR_OFFSET))(this);
		}
	};
}
