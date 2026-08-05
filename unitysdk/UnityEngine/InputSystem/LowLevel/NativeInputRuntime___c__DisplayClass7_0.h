#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngineInternal/Input/NativeInputEventBuffer.h"
#include "unitysdk/UnityEngineInternal/Input/NativeInputUpdateType.h"

namespace UnityEngine::InputSystem::LowLevel { class InputUpdateDelegate; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1F68D0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME___C__DISPLAYCLASS7_0__SET_ONUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x1F1F68E0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int NativeInputRuntime___c__DisplayClass7_0_TypeDefinitionIndex = 32558;

	class NativeInputRuntime___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _set_onUpdate_b__0(::UnityEngineInternal::Input::NativeInputUpdateType updateType, ::UnityEngineInternal::Input::NativeInputEventBuffer* eventBufferPtr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngineInternal::Input::NativeInputUpdateType, ::UnityEngineInternal::Input::NativeInputEventBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME___C__DISPLAYCLASS7_0__SET_ONUPDATE_B__0_OFFSET))(this, updateType, eventBufferPtr);
		}
	};
}
