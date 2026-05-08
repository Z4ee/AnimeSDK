#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputDeviceCommand.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::InputSystem { class InputDevice; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICECOMMANDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19595FF0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICECOMMANDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19596030)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICECOMMANDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19595970)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICECOMMANDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19595960)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputDeviceCommandDelegate_TypeDefinitionIndex = 29194;

	class InputDeviceCommandDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICECOMMANDDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Nullable_1<::System::Int64> Invoke(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand* command)
		{
			return ((::System::Nullable_1<::System::Int64>(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICECOMMANDDELEGATE_INVOKE_OFFSET))(this, device, command);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand* command, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICECOMMANDDELEGATE_BEGININVOKE_OFFSET))(this, device, command, callback, object);
		}

		::System::Nullable_1<::System::Int64> EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Nullable_1<::System::Int64>(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICECOMMANDDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
