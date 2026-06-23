#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionChange.h"
#include "unitysdk/UnityEngine/InputSystem/InputAction_CallbackContext.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventBuffer.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InlinedArray_1.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InputActionTrace_ActionEventPtr.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem { class InputActionMap; }
namespace UnityEngine::InputSystem { class InputActionState; }

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DD83B20)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_DISPOSEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1DD83C20)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DD84260)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1DD83BB0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DD841E0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_GET_BUFFER_OFFSET UNITYSDK_OFFSET(0x1DD828F0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1DD82910)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_HOOKONACTIONCHANGE_OFFSET UNITYSDK_OFFSET(0x1DD83030)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_ONACTIONCHANGE_OFFSET UNITYSDK_OFFSET(0x1DD84300)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_RECORDACTION_OFFSET UNITYSDK_OFFSET(0x1DD83690)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_SUBSCRIBETOALL_OFFSET UNITYSDK_OFFSET(0x1DD82EB0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_SUBSCRIBETO_1_OFFSET UNITYSDK_OFFSET(0x1DD82D40)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_SUBSCRIBETO_OFFSET UNITYSDK_OFFSET(0x1DD829A0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DD84280)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DD83D70)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_UNHOOKONACTIONCHANGE_OFFSET UNITYSDK_OFFSET(0x1DD835B0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_UNSUBSCRIBEFROMALL_OFFSET UNITYSDK_OFFSET(0x1DD83440)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_UNSUBSCRIBEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DD832F0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_UNSUBSCRIBEFROM_OFFSET UNITYSDK_OFFSET(0x1DD83120)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DD82930)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1DD82B90)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD82920)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int InputActionTrace_TypeDefinitionIndex = 32032;

	class InputActionTrace : public ::System::Object
	{
	public:
		::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputAction*> m_SubscribedActions; // 0x10
		::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionMap*> m_SubscribedActionMaps; // 0x28
		::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* m_CallbackDelegate; // 0x40
		::System::Action_2<::System::Object*, ::UnityEngine::InputSystem::InputActionChange>* m_ActionChangeDelegate; // 0x48
		::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState*> m_ActionMapStates; // 0x50
		::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState*> m_ActionMapStateClones; // 0x68
		::System::Boolean m_OnActionChangeHooked; // 0x80
		::System::Boolean m_SubscribedToAll; // 0x81
		::UnityEngine::InputSystem::LowLevel::InputEventBuffer m_EventBuffer; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::InputSystem::InputAction* action)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE__CTOR_1_OFFSET))(this, action);
		}

		::System::Void _ctor_2(::UnityEngine::InputSystem::InputActionMap* actionMap)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionMap*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE__CTOR_2_OFFSET))(this, actionMap);
		}

		::UnityEngine::InputSystem::LowLevel::InputEventBuffer get_buffer()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventBuffer(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_GET_BUFFER_OFFSET))(this);
		}

		::System::Int32 get_count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_GET_COUNT_OFFSET))(this);
		}

		::System::Void SubscribeToAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_SUBSCRIBETOALL_OFFSET))(this);
		}

		::System::Void UnsubscribeFromAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_UNSUBSCRIBEFROMALL_OFFSET))(this);
		}

		::System::Void SubscribeTo(::UnityEngine::InputSystem::InputAction* action)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_SUBSCRIBETO_OFFSET))(this, action);
		}

		::System::Void SubscribeTo_1(::UnityEngine::InputSystem::InputActionMap* actionMap)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionMap*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_SUBSCRIBETO_1_OFFSET))(this, actionMap);
		}

		::System::Void UnsubscribeFrom(::UnityEngine::InputSystem::InputAction* action)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_UNSUBSCRIBEFROM_OFFSET))(this, action);
		}

		::System::Void UnsubscribeFrom_1(::UnityEngine::InputSystem::InputActionMap* actionMap)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionMap*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_UNSUBSCRIBEFROM_1_OFFSET))(this, actionMap);
		}

		::System::Void RecordAction(::UnityEngine::InputSystem::InputAction_CallbackContext context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputAction_CallbackContext))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_RECORDACTION_OFFSET))(this, context);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_CLEAR_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_FINALIZE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_TOSTRING_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_DISPOSE_OFFSET))(this);
		}

		::System::Void DisposeInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_DISPOSEINTERNAL_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InputActionTrace_ActionEventPtr>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InputActionTrace_ActionEventPtr>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void HookOnActionChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_HOOKONACTIONCHANGE_OFFSET))(this);
		}

		::System::Void UnhookOnActionChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_UNHOOKONACTIONCHANGE_OFFSET))(this);
		}

		::System::Void OnActionChange(::System::Object* actionOrMap, ::UnityEngine::InputSystem::InputActionChange change)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::InputSystem::InputActionChange))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_ONACTIONCHANGE_OFFSET))(this, actionOrMap, change);
		}
	};
}
