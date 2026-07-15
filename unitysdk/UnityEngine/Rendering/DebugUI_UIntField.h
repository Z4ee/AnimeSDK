#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/DebugUI_Field_1.h"

namespace System { template <typename T> class Func_1; }

#define UNITYENGINE_RENDERING_DEBUGUI_UINTFIELD_VALIDATEVALUE_OFFSET UNITYSDK_OFFSET(0x1B0EF990)
#define UNITYENGINE_RENDERING_DEBUGUI_UINTFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0EF9E0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_UIntField_TypeDefinitionIndex = 34096;

	class DebugUI_UIntField : public ::UnityEngine::Rendering::DebugUI_Field_1<::System::UInt32>
	{
	public:
		::System::Func_1<::System::UInt32>* max; // 0x50
		::System::Func_1<::System::UInt32>* min; // 0x58
		::System::UInt32 incStep; // 0x60
		::System::UInt32 intStepMult; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_UINTFIELD__CTOR_OFFSET))(this);
		}

		::System::UInt32 ValidateValue(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_UINTFIELD_VALIDATEVALUE_OFFSET))(this, a1);
		}
	};
}
