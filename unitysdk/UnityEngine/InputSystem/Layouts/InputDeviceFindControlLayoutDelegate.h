#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/InputSystem/Layouts/InputDeviceDescription.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::InputSystem::LowLevel { class InputDeviceExecuteCommandDelegate; }

#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEFINDCONTROLLAYOUTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DD818B0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEFINDCONTROLLAYOUTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DD81940)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEFINDCONTROLLAYOUTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DD81530)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEFINDCONTROLLAYOUTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD81510)

namespace UnityEngine::InputSystem::Layouts
{
	inline static constexpr unsigned int InputDeviceFindControlLayoutDelegate_TypeDefinitionIndex = 31975;

	class InputDeviceFindControlLayoutDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEFINDCONTROLLAYOUTDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::String* Invoke(::UnityEngine::InputSystem::Layouts::InputDeviceDescription& description, ::System::String* matchedLayout, ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* executeDeviceCommand)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription&, ::System::String*, ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEFINDCONTROLLAYOUTDELEGATE_INVOKE_OFFSET))(this, description, matchedLayout, executeDeviceCommand);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::InputSystem::Layouts::InputDeviceDescription& description, ::System::String* matchedLayout, ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* executeDeviceCommand, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription&, ::System::String*, ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEFINDCONTROLLAYOUTDELEGATE_BEGININVOKE_OFFSET))(this, description, matchedLayout, executeDeviceCommand, callback, object);
		}

		::System::String* EndInvoke(::UnityEngine::InputSystem::Layouts::InputDeviceDescription& description, ::System::IAsyncResult* result)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEFINDCONTROLLAYOUTDELEGATE_ENDINVOKE_OFFSET))(this, description, result);
		}
	};
}
