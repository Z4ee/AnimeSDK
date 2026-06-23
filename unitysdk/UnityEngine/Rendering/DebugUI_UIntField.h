#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/DebugUI_Field_1.h"

namespace System { template <typename T> class Func_1; }

#define UNITYENGINE_RENDERING_DEBUGUI_UINTFIELD_VALIDATEVALUE_OFFSET UNITYSDK_OFFSET(0x1B4AE3F0)
#define UNITYENGINE_RENDERING_DEBUGUI_UINTFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4AE490)
#define UNITYENGINE_RENDERING_DEBUGUI_UINTFIELD___BASE_VALIDATEVALUE_OFFSET UNITYSDK_OFFSET(0x1B4AE4A0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_UIntField_TypeDefinitionIndex = 18284;

	class DebugUI_UIntField : public ::UnityEngine::Rendering::DebugUI_Field_1<::System::UInt32>
	{
	public:
		::System::Func_1<::System::UInt32>* min; // 0x50
		::System::Func_1<::System::UInt32>* max; // 0x58
		::System::UInt32 incStep; // 0x60
		::System::UInt32 intStepMult; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_UINTFIELD__CTOR_OFFSET))(this);
		}

		::System::UInt32 ValidateValue(::System::UInt32 value)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_UINTFIELD_VALIDATEVALUE_OFFSET))(this, value);
		}

		::System::UInt32 __base_ValidateValue(::System::UInt32 P0)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_UINTFIELD___BASE_VALIDATEVALUE_OFFSET))(this, P0);
		}
	};
}
