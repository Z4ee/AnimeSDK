#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"

namespace System { class IDisposable; }
namespace System { class Type; }
namespace System { template <typename T> class IObservable_1; }
namespace System { template <typename T> class IObserver_1; }
namespace UnityEngine::InputSystem { class InputDevice; }

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_FORDEVICEEVENTOBSERVABLE_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1D75DA10)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_FORDEVICEEVENTOBSERVABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D75DA00)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int ForDeviceEventObservable_TypeDefinitionIndex = 32064;

	class ForDeviceEventObservable : public ::System::Object
	{
	public:
		::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* m_Source; // 0x10
		::System::Type* m_DeviceType; // 0x18
		::UnityEngine::InputSystem::InputDevice* m_Device; // 0x20

		::System::Void _ctor(::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* source, ::System::Type* deviceType, ::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::Void(*)(::PVOID, ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*, ::System::Type*, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_FORDEVICEEVENTOBSERVABLE__CTOR_OFFSET))(this, source, deviceType, device);
		}

		::System::IDisposable* Subscribe(::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* observer)
		{
			return ((::System::IDisposable*(*)(::PVOID, ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_FORDEVICEEVENTOBSERVABLE_SUBSCRIBE_OFFSET))(this, observer);
		}
	};
}
