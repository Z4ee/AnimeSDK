#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputDeviceCommand.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICEEXECUTECOMMANDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B3FECF0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICEEXECUTECOMMANDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B3FED60)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICEEXECUTECOMMANDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B3FE9B0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICEEXECUTECOMMANDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3FE9A0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputDeviceExecuteCommandDelegate_TypeDefinitionIndex = 29195;

	class InputDeviceExecuteCommandDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICEEXECUTECOMMANDDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Int64 Invoke(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& command)
		{
			return ((::System::Int64(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICEEXECUTECOMMANDDELEGATE_INVOKE_OFFSET))(this, command);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& command, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICEEXECUTECOMMANDDELEGATE_BEGININVOKE_OFFSET))(this, command, callback, object);
		}

		::System::Int64 EndInvoke(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& command, ::System::IAsyncResult* result)
		{
			return ((::System::Int64(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICEEXECUTECOMMANDDELEGATE_ENDINVOKE_OFFSET))(this, command, result);
		}
	};
}
