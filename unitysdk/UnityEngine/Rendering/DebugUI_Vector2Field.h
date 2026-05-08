#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/DebugUI_Field_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_RENDERING_DEBUGUI_VECTOR2FIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x191F6780)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_Vector2Field_TypeDefinitionIndex = 9562;

	class DebugUI_Vector2Field : public ::UnityEngine::Rendering::DebugUI_Field_1<::UnityEngine::Vector2>
	{
	public:
		::System::Single incStep; // 0x50
		::System::Single incStepMult; // 0x54
		::System::Int32 decimals; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_VECTOR2FIELD__CTOR_OFFSET))(this);
		}
	};
}
