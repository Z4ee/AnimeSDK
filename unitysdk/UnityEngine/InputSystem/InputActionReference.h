#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem { class InputActionAsset; }

#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_CREATE_OFFSET UNITYSDK_OFFSET(0x1BC46070)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_GETDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1BC45BA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x1BC45350)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_GET_ASSET_OFFSET UNITYSDK_OFFSET(0x1BC45340)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1BC46060)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_SETINTERNAL_OFFSET UNITYSDK_OFFSET(0x1BC45680)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_SET_1_OFFSET UNITYSDK_OFFSET(0x1BC458F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_SET_OFFSET UNITYSDK_OFFSET(0x1BC454D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_TODISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1BC45F20)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_TOINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1BC460D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BC45C20)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC460E0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionReference_TypeDefinitionIndex = 28899;

	class InputActionReference : public ::UnityEngine::ScriptableObject
	{
	public:
		::UnityEngine::InputSystem::InputActionAsset* m_Asset; // 0x18
		::System::String* m_ActionId; // 0x20
		::UnityEngine::InputSystem::InputAction* m_Action; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputActionAsset* get_asset()
		{
			return ((::UnityEngine::InputSystem::InputActionAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_GET_ASSET_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputAction* get_action()
		{
			return ((::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_GET_ACTION_OFFSET))(this);
		}

		::System::Void Set(::UnityEngine::InputSystem::InputAction* action)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_SET_OFFSET))(this, action);
		}

		::System::Void Set_1(::UnityEngine::InputSystem::InputActionAsset* asset, ::System::String* mapName, ::System::String* actionName)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionAsset*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_SET_1_OFFSET))(this, asset, mapName, actionName);
		}

		::System::Void SetInternal(::UnityEngine::InputSystem::InputActionAsset* asset, ::UnityEngine::InputSystem::InputAction* action)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionAsset*, ::UnityEngine::InputSystem::InputAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_SETINTERNAL_OFFSET))(this, asset, action);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_TOSTRING_OFFSET))(this);
		}

		static ::System::String* GetDisplayName(::UnityEngine::InputSystem::InputAction* action)
		{
			return ((::System::String*(*)(::UnityEngine::InputSystem::InputAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_GETDISPLAYNAME_OFFSET))(action);
		}

		::System::String* ToDisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_TODISPLAYNAME_OFFSET))(this);
		}

		static ::UnityEngine::InputSystem::InputAction* op_Implicit(::UnityEngine::InputSystem::InputActionReference* reference)
		{
			return ((::UnityEngine::InputSystem::InputAction*(*)(::UnityEngine::InputSystem::InputActionReference*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_OP_IMPLICIT_OFFSET))(reference);
		}

		static ::UnityEngine::InputSystem::InputActionReference* Create(::UnityEngine::InputSystem::InputAction* action)
		{
			return ((::UnityEngine::InputSystem::InputActionReference*(*)(::UnityEngine::InputSystem::InputAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_CREATE_OFFSET))(action);
		}

		::UnityEngine::InputSystem::InputAction* ToInputAction()
		{
			return ((::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_TOINPUTACTION_OFFSET))(this);
		}
	};
}
