#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputUpdateType.h"
#include "unitysdk/UnityEngineInternal/Input/NativeInputUpdateType.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF9E8A0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME___C__DISPLAYCLASS13_0__SET_ONSHOULDRUNUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x1AF9E8B0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int NativeInputRuntime___c__DisplayClass13_0_TypeDefinitionIndex = 29284;

	class NativeInputRuntime___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, ::System::Boolean>* value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _set_onShouldRunUpdate_b__0(::UnityEngineInternal::Input::NativeInputUpdateType updateType)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngineInternal::Input::NativeInputUpdateType))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME___C__DISPLAYCLASS13_0__SET_ONSHOULDRUNUPDATE_B__0_OFFSET))(this, updateType);
		}
	};
}
