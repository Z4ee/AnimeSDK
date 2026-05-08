#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/DebugUI_Field_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_RENDERING_DEBUGUI_VECTOR3FIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x191F67A0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_Vector3Field_TypeDefinitionIndex = 9563;

	class DebugUI_Vector3Field : public ::UnityEngine::Rendering::DebugUI_Field_1<::UnityEngine::Vector3>
	{
	public:
		::System::Single incStep; // 0x50
		::System::Int32 decimals; // 0x54
		::System::Single incStepMult; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_VECTOR3FIELD__CTOR_OFFSET))(this);
		}
	};
}
