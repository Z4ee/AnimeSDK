#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_PROCESSGYROINPUT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B986510)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_PROCESSGYROINPUT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B9865C0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_PROCESSGYROINPUT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B984B60)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_PROCESSGYROINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B986500)

namespace UnityEngine::InputSystem::GamepadEx
{
	inline static constexpr unsigned int ProcessGyroInput_TypeDefinitionIndex = 37455;

	class ProcessGyroInput : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_PROCESSGYROINPUT__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::Vector3 gyro, ::UnityEngine::Vector3 accel, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_PROCESSGYROINPUT_INVOKE_OFFSET))(this, gyro, accel, deltaTime);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector3 gyro, ::UnityEngine::Vector3 accel, ::System::Single deltaTime, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_PROCESSGYROINPUT_BEGININVOKE_OFFSET))(this, gyro, accel, deltaTime, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_PROCESSGYROINPUT_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
