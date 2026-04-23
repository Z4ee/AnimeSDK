#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/DebugUI_Field_1.h"

namespace System { template <typename T> class Func_1; }

#define UNITYENGINE_RENDERING_DEBUGUI_INTFIELD_VALIDATEVALUE_OFFSET UNITYSDK_OFFSET(0x1A31D1C0)
#define UNITYENGINE_RENDERING_DEBUGUI_INTFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A31D200)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_IntField_TypeDefinitionIndex = 33442;

	class DebugUI_IntField : public ::UnityEngine::Rendering::DebugUI_Field_1<::System::Int32>
	{
	public:
		::System::Func_1<::System::Int32>* min; // 0x50
		::System::Func_1<::System::Int32>* max; // 0x58
		::System::Int32 intStepMult; // 0x60
		::System::Int32 incStep; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_INTFIELD__CTOR_OFFSET))(this);
		}

		::System::Int32 ValidateValue(::System::Int32 value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_INTFIELD_VALIDATEVALUE_OFFSET))(this, value);
		}
	};
}
