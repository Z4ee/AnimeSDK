#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/DebugUI_Field_1.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_RENDERING_DEBUGUI_VECTOR4FIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A31D550)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_Vector4Field_TypeDefinitionIndex = 33453;

	class DebugUI_Vector4Field : public ::UnityEngine::Rendering::DebugUI_Field_1<::UnityEngine::Vector4>
	{
	public:
		::System::Single incStep; // 0x50
		::System::Int32 decimals; // 0x54
		::System::Single incStepMult; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_VECTOR4FIELD__CTOR_OFFSET))(this);
		}
	};
}
