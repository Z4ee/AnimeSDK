#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionPhase.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionState_TriggerState.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionType.h"
#include "unitysdk/UnityEngine/InputSystem/InputAction_ActionFlags.h"
#include "unitysdk/UnityEngine/InputSystem/InputAction_CallbackContext.h"
#include "unitysdk/UnityEngine/InputSystem/InputBinding.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/CallbackArray_1.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/ReadOnlyArray_1.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::InputSystem { class InputActionMap; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_ADD_CANCELED_OFFSET UNITYSDK_OFFSET(0x1D752C40)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_ADD_PERFORMED_OFFSET UNITYSDK_OFFSET(0x1D752CE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_ADD_STARTED_OFFSET UNITYSDK_OFFSET(0x1D752BA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_BINDINGINDEXONACTIONTOBINDINGINDEXONMAP_OFFSET UNITYSDK_OFFSET(0x1D753BD0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_BINDINGINDEXONMAPTOBINDINGINDEXONACTION_OFFSET UNITYSDK_OFFSET(0x1D753D80)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_CLONE_OFFSET UNITYSDK_OFFSET(0x1D7534A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_CREATEINTERNALACTIONMAPFORSINGLETONACTION_OFFSET UNITYSDK_OFFSET(0x1D753A60)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_DISABLE_OFFSET UNITYSDK_OFFSET(0x1D7533C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D753040)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_ENABLE_OFFSET UNITYSDK_OFFSET(0x1D753310)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_FINDEFFECTIVEBINDINGMASK_OFFSET UNITYSDK_OFFSET(0x1D753AF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GENERATEID_OFFSET UNITYSDK_OFFSET(0x1D753A10)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GETORCREATEACTIONMAP_OFFSET UNITYSDK_OFFSET(0x1D752920)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GETTIMEOUTCOMPLETIONPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x1D753860)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_ACTIONMAP_OFFSET UNITYSDK_OFFSET(0x1D752670)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_ACTIVECONTROL_OFFSET UNITYSDK_OFFSET(0x1D752E60)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_BINDINGMASK_OFFSET UNITYSDK_OFFSET(0x1D7526B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_BINDINGS_OFFSET UNITYSDK_OFFSET(0x1D752950)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_CONTROLS_OFFSET UNITYSDK_OFFSET(0x1D7529B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x1D752A80)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1D752B50)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_EXPECTEDCONTROLTYPE_OFFSET UNITYSDK_OFFSET(0x1D752630)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_IDDONTGENERATE_OFFSET UNITYSDK_OFFSET(0x1D7525F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_ID_OFFSET UNITYSDK_OFFSET(0x1D752510)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_INPROGRESS_OFFSET UNITYSDK_OFFSET(0x1D752AF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_INTERACTIONS_OFFSET UNITYSDK_OFFSET(0x1D752660)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_ISSINGLETONACTION_OFFSET UNITYSDK_OFFSET(0x1D752690)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D7524F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x1D752A30)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_PROCESSORS_OFFSET UNITYSDK_OFFSET(0x1D752650)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_TRIGGERED_OFFSET UNITYSDK_OFFSET(0x1D752D80)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1D752500)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_WANTSINITIALSTATECHECK_OFFSET UNITYSDK_OFFSET(0x1D752F00)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_ISPRESSED_OFFSET UNITYSDK_OFFSET(0x1D753710)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_MAKESUREIDISINPLACE_OFFSET UNITYSDK_OFFSET(0x1D752590)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_READVALUEASOBJECT_OFFSET UNITYSDK_OFFSET(0x1D753610)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_REMOVE_CANCELED_OFFSET UNITYSDK_OFFSET(0x1D752C90)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_REMOVE_PERFORMED_OFFSET UNITYSDK_OFFSET(0x1D752D30)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_REMOVE_STARTED_OFFSET UNITYSDK_OFFSET(0x1D752BF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_RESET_OFFSET UNITYSDK_OFFSET(0x1D753690)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_SET_BINDINGMASK_OFFSET UNITYSDK_OFFSET(0x1D7526F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_SET_EXPECTEDCONTROLTYPE_OFFSET UNITYSDK_OFFSET(0x1D752640)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_SET_WANTSINITIALSTATECHECK_OFFSET UNITYSDK_OFFSET(0x1D752F10)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1D753600)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D753060)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_WASPERFORMEDTHISFRAME_OFFSET UNITYSDK_OFFSET(0x1D752DF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_WASPRESSEDTHISFRAME_OFFSET UNITYSDK_OFFSET(0x1D753780)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_WASRELEASEDTHISFRAME_OFFSET UNITYSDK_OFFSET(0x1D7537F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D752F30)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D752F20)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputAction_TypeDefinitionIndex = 31526;

	class InputAction : public ::System::Object
	{
	public:
		::System::String* m_Name; // 0x10
		::UnityEngine::InputSystem::InputActionType m_Type; // 0x18
		::System::String* m_ExpectedControlType; // 0x20
		::System::String* m_Id; // 0x28
		::System::String* m_Processors; // 0x30
		::System::String* m_Interactions; // 0x38
		::Il2CppArray<::UnityEngine::InputSystem::InputBinding>* m_SingletonActionBindings; // 0x40
		::UnityEngine::InputSystem::InputAction_ActionFlags m_Flags; // 0x48
		::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> m_BindingMask; // 0x50
		::System::Int32 m_BindingsStartIndex; // 0xB0
		::System::Int32 m_BindingsCount; // 0xB4
		::System::Int32 m_ControlStartIndex; // 0xB8
		::System::Int32 m_ControlCount; // 0xBC
		::System::Int32 m_ActionIndexInState; // 0xC0
		::UnityEngine::InputSystem::InputActionMap* m_ActionMap; // 0xC8
		::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*> m_OnStarted; // 0xD0
		::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*> m_OnCanceled; // 0x120
		::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*> m_OnPerformed; // 0x170

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* name, ::UnityEngine::InputSystem::InputActionType type, ::System::String* binding, ::System::String* interactions, ::System::String* processors, ::System::String* expectedControlType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::InputSystem::InputActionType, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION__CTOR_1_OFFSET))(this, name, type, binding, interactions, processors, expectedControlType);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_NAME_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputActionType get_type()
		{
			return ((::UnityEngine::InputSystem::InputActionType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_TYPE_OFFSET))(this);
		}

		::System::Guid get_id()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_ID_OFFSET))(this);
		}

		::System::Guid get_idDontGenerate()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_IDDONTGENERATE_OFFSET))(this);
		}

		::System::String* get_expectedControlType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_EXPECTEDCONTROLTYPE_OFFSET))(this);
		}

		::System::Void set_expectedControlType(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_SET_EXPECTEDCONTROLTYPE_OFFSET))(this, value);
		}

		::System::String* get_processors()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_PROCESSORS_OFFSET))(this);
		}

		::System::String* get_interactions()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_INTERACTIONS_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputActionMap* get_actionMap()
		{
			return ((::UnityEngine::InputSystem::InputActionMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_ACTIONMAP_OFFSET))(this);
		}

		::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> get_bindingMask()
		{
			return ((::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_BINDINGMASK_OFFSET))(this);
		}

		::System::Void set_bindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_SET_BINDINGMASK_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> get_bindings()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_BINDINGS_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> get_controls()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_CONTROLS_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputActionPhase get_phase()
		{
			return ((::UnityEngine::InputSystem::InputActionPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_PHASE_OFFSET))(this);
		}

		::System::Boolean get_inProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_INPROGRESS_OFFSET))(this);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_ENABLED_OFFSET))(this);
		}

		::System::Void add_started(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_ADD_STARTED_OFFSET))(this, value);
		}

		::System::Void remove_started(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_REMOVE_STARTED_OFFSET))(this, value);
		}

		::System::Void add_canceled(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_ADD_CANCELED_OFFSET))(this, value);
		}

		::System::Void remove_canceled(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_REMOVE_CANCELED_OFFSET))(this, value);
		}

		::System::Void add_performed(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_ADD_PERFORMED_OFFSET))(this, value);
		}

		::System::Void remove_performed(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_REMOVE_PERFORMED_OFFSET))(this, value);
		}

		::System::Boolean get_triggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_TRIGGERED_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputControl* get_activeControl()
		{
			return ((::UnityEngine::InputSystem::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_ACTIVECONTROL_OFFSET))(this);
		}

		::System::Boolean get_wantsInitialStateCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_WANTSINITIALSTATECHECK_OFFSET))(this);
		}

		::System::Void set_wantsInitialStateCheck(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_SET_WANTSINITIALSTATECHECK_OFFSET))(this, value);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_DISPOSE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_TOSTRING_OFFSET))(this);
		}

		::System::Void Enable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_ENABLE_OFFSET))(this);
		}

		::System::Void Disable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_DISABLE_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputAction* Clone()
		{
			return ((::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_CLONE_OFFSET))(this);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::Object* ReadValueAsObject()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_READVALUEASOBJECT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_RESET_OFFSET))(this);
		}

		::System::Boolean IsPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_ISPRESSED_OFFSET))(this);
		}

		::System::Boolean WasPressedThisFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_WASPRESSEDTHISFRAME_OFFSET))(this);
		}

		::System::Boolean WasReleasedThisFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_WASRELEASEDTHISFRAME_OFFSET))(this);
		}

		::System::Boolean WasPerformedThisFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_WASPERFORMEDTHISFRAME_OFFSET))(this);
		}

		::System::Single GetTimeoutCompletionPercentage()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GETTIMEOUTCOMPLETIONPERCENTAGE_OFFSET))(this);
		}

		::System::Boolean get_isSingletonAction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_ISSINGLETONACTION_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputActionState_TriggerState get_currentState()
		{
			return ((::UnityEngine::InputSystem::InputActionState_TriggerState(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_CURRENTSTATE_OFFSET))(this);
		}

		::System::String* MakeSureIdIsInPlace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_MAKESUREIDISINPLACE_OFFSET))(this);
		}

		::System::Void GenerateId()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GENERATEID_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputActionMap* GetOrCreateActionMap()
		{
			return ((::UnityEngine::InputSystem::InputActionMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GETORCREATEACTIONMAP_OFFSET))(this);
		}

		::System::Void CreateInternalActionMapForSingletonAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_CREATEINTERNALACTIONMAPFORSINGLETONACTION_OFFSET))(this);
		}

		::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> FindEffectiveBindingMask()
		{
			return ((::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_FINDEFFECTIVEBINDINGMASK_OFFSET))(this);
		}

		::System::Int32 BindingIndexOnActionToBindingIndexOnMap(::System::Int32 indexOfBindingOnAction)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_BINDINGINDEXONACTIONTOBINDINGINDEXONMAP_OFFSET))(this, indexOfBindingOnAction);
		}

		::System::Int32 BindingIndexOnMapToBindingIndexOnAction(::System::Int32 indexOfBindingOnMap)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_BINDINGINDEXONMAPTOBINDINGINDEXONACTION_OFFSET))(this, indexOfBindingOnMap);
		}
	};
}
