#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventBuffer.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputUpdateType.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1F37AE30)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1F37AEC0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F37AB20)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F37AB00)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputUpdateDelegate_TypeDefinitionIndex = 32548;

	class InputUpdateDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType, ::UnityEngine::InputSystem::LowLevel::InputEventBuffer& eventBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputUpdateType, ::UnityEngine::InputSystem::LowLevel::InputEventBuffer&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATEDELEGATE_INVOKE_OFFSET))(this, updateType, eventBuffer);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType, ::UnityEngine::InputSystem::LowLevel::InputEventBuffer& eventBuffer, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputUpdateType, ::UnityEngine::InputSystem::LowLevel::InputEventBuffer&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATEDELEGATE_BEGININVOKE_OFFSET))(this, updateType, eventBuffer, callback, object);
		}

		::System::Void EndInvoke(::UnityEngine::InputSystem::LowLevel::InputEventBuffer& eventBuffer, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventBuffer&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATEDELEGATE_ENDINVOKE_OFFSET))(this, eventBuffer, result);
		}
	};
}
