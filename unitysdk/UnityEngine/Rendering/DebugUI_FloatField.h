#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/DebugUI_Field_1.h"

namespace System { template <typename T> class Func_1; }

#define UNITYENGINE_RENDERING_DEBUGUI_FLOATFIELD_VALIDATEVALUE_OFFSET UNITYSDK_OFFSET(0x188E3100)
#define UNITYENGINE_RENDERING_DEBUGUI_FLOATFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x188E3150)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_FloatField_TypeDefinitionIndex = 27820;

	class DebugUI_FloatField : public ::UnityEngine::Rendering::DebugUI_Field_1<::System::Single>
	{
	public:
		::System::Func_1<::System::Single>* max; // 0x50
		::System::Func_1<::System::Single>* min; // 0x58
		::System::Single incStep; // 0x60
		::System::Int32 decimals; // 0x64
		::System::Single incStepMult; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_FLOATFIELD__CTOR_OFFSET))(this);
		}

		::System::Single ValidateValue(::System::Single value)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_FLOATFIELD_VALIDATEVALUE_OFFSET))(this, value);
		}
	};
}
