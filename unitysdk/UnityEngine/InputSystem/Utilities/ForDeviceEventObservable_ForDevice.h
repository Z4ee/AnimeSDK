#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"

namespace System { class Exception; }
namespace System { class Type; }
namespace System { template <typename T> class IObserver_1; }
namespace UnityEngine::InputSystem { class InputDevice; }

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_FORDEVICEEVENTOBSERVABLE_FORDEVICE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1DD08370)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_FORDEVICEEVENTOBSERVABLE_FORDEVICE_ONERROR_OFFSET UNITYSDK_OFFSET(0x1DD08380)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_FORDEVICEEVENTOBSERVABLE_FORDEVICE_ONNEXT_OFFSET UNITYSDK_OFFSET(0x1DD083E0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_FORDEVICEEVENTOBSERVABLE_FORDEVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD08360)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int ForDeviceEventObservable_ForDevice_TypeDefinitionIndex = 32065;

	class ForDeviceEventObservable_ForDevice : public ::System::Object
	{
	public:
		::System::Type* m_DeviceType; // 0x10
		::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* m_Observer; // 0x18
		::UnityEngine::InputSystem::InputDevice* m_Device; // 0x20

		::System::Void _ctor(::System::Type* deviceType, ::UnityEngine::InputSystem::InputDevice* device, ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* observer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::UnityEngine::InputSystem::InputDevice*, ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_FORDEVICEEVENTOBSERVABLE_FORDEVICE__CTOR_OFFSET))(this, deviceType, device, observer);
		}

		::System::Void OnCompleted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_FORDEVICEEVENTOBSERVABLE_FORDEVICE_ONCOMPLETED_OFFSET))(this);
		}

		::System::Void OnError(::System::Exception* error)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_FORDEVICEEVENTOBSERVABLE_FORDEVICE_ONERROR_OFFSET))(this, error);
		}

		::System::Void OnNext(::UnityEngine::InputSystem::LowLevel::InputEventPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_FORDEVICEEVENTOBSERVABLE_FORDEVICE_ONNEXT_OFFSET))(this, value);
		}
	};
}
