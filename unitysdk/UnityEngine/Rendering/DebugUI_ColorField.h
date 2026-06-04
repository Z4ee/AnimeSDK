#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/DebugUI_Field_1.h"

#define UNITYENGINE_RENDERING_DEBUGUI_COLORFIELD_VALIDATEVALUE_OFFSET UNITYSDK_OFFSET(0x1B176220)
#define UNITYENGINE_RENDERING_DEBUGUI_COLORFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B176260)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_ColorField_TypeDefinitionIndex = 33732;

	class DebugUI_ColorField : public ::UnityEngine::Rendering::DebugUI_Field_1<::UnityEngine::Color>
	{
	public:
		::System::Single incStepMult; // 0x50
		::System::Int32 decimals; // 0x54
		::System::Single incStep; // 0x58
		::System::Boolean showAlpha; // 0x5C
		::System::Boolean showPicker; // 0x5D
		::System::Boolean hdr; // 0x5E

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_COLORFIELD__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color ValidateValue(::UnityEngine::Color a1)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_COLORFIELD_VALIDATEVALUE_OFFSET))(this, a1);
		}
	};
}
