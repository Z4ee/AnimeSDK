#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputUpdateType.h"
#include "unitysdk/UnityEngineInternal/Input/NativeInputUpdateType.h"

namespace System { template <typename T> class Action_1; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B38C310)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME___C__DISPLAYCLASS10_0__SET_ONBEFOREUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x1B38C320)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int NativeInputRuntime___c__DisplayClass10_0_TypeDefinitionIndex = 29283;

	class NativeInputRuntime___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>* value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _set_onBeforeUpdate_b__0(::UnityEngineInternal::Input::NativeInputUpdateType updateType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngineInternal::Input::NativeInputUpdateType))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME___C__DISPLAYCLASS10_0__SET_ONBEFOREUPDATE_B__0_OFFSET))(this, updateType);
		}
	};
}
