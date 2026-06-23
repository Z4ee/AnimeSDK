#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"

namespace System { class IDisposable; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class IObservable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::InputSystem { class InputDevice; }

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_OBSERVABLE_FORDEVICE_OFFSET UNITYSDK_OFFSET(0x1D7A9410)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int Observable_TypeDefinitionIndex = 32066;

	class Observable : public ::System::Object
	{
	public:
		static ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* ForDevice(::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* source, ::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*(*)(::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_OBSERVABLE_FORDEVICE_OFFSET))(source, device);
		}
	};
}
