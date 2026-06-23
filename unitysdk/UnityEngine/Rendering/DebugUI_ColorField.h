#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/DebugUI_Field_1.h"

#define UNITYENGINE_RENDERING_DEBUGUI_COLORFIELD_VALIDATEVALUE_OFFSET UNITYSDK_OFFSET(0x1B4AAD80)
#define UNITYENGINE_RENDERING_DEBUGUI_COLORFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4AAE10)
#define UNITYENGINE_RENDERING_DEBUGUI_COLORFIELD___BASE_VALIDATEVALUE_OFFSET UNITYSDK_OFFSET(0x1B4AAE30)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_ColorField_TypeDefinitionIndex = 18291;

	class DebugUI_ColorField : public ::UnityEngine::Rendering::DebugUI_Field_1<::UnityEngine::Color>
	{
	public:
		::System::Single incStepMult; // 0x50
		::System::Boolean hdr; // 0x54
		::System::Boolean showAlpha; // 0x55
		::System::Boolean showPicker; // 0x56
		::System::Int32 decimals; // 0x58
		::System::Single incStep; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_COLORFIELD__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color ValidateValue(::UnityEngine::Color value)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_COLORFIELD_VALIDATEVALUE_OFFSET))(this, value);
		}

		::UnityEngine::Color __base_ValidateValue(::UnityEngine::Color P0)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_COLORFIELD___BASE_VALIDATEVALUE_OFFSET))(this, P0);
		}
	};
}
