#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionChange.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionPhase.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionState_ActionMapIndices.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionState_BindingState.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionState_GlobalState.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionState_InteractionState.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionState_TriggerState.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionState_UnmanagedMemory.h"
#include "unitysdk/UnityEngine/InputSystem/InputAction_CallbackContext.h"
#include "unitysdk/UnityEngine/InputSystem/InputBinding.h"
#include "unitysdk/UnityEngine/InputSystem/InputBindingResolver.h"
#include "unitysdk/UnityEngine/InputSystem/InputDeviceChange.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEvent.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/CallbackArray_1.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::InputSystem { class IInputInteraction; }
namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem { class InputActionMap; }
namespace UnityEngine::InputSystem { class InputBindingComposite; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem { class InputProcessor; }
namespace UnityEngine::InputSystem::Utilities { class ISavedState; }

#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ADDTOGLOBALLIST_OFFSET UNITYSDK_OFFSET(0x1A031D10)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_CALLACTIONLISTENERS_OFFSET UNITYSDK_OFFSET(0x1A0373D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_CANUSEDEVICE_OFFSET UNITYSDK_OFFSET(0x1A032A10)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_CHANGEPHASEOFACTIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A037150)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_CHANGEPHASEOFACTION_OFFSET UNITYSDK_OFFSET(0x1A033AE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_CHANGEPHASEOFINTERACTION_OFFSET UNITYSDK_OFFSET(0x1A036B80)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_CLAIMDATAFROM_OFFSET UNITYSDK_OFFSET(0x1A031C30)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_CLONE_OFFSET UNITYSDK_OFFSET(0x1A032460)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_COMPACTGLOBALLIST_OFFSET UNITYSDK_OFFSET(0x1A038890)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_COMPUTEMAGNITUDE_1_OFFSET UNITYSDK_OFFSET(0x1A036430)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_COMPUTEMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1A035E80)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_DEFERREDRESOLUTIONOFBINDINGS_OFFSET UNITYSDK_OFFSET(0x1A0399D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_DESTROYALLACTIONMAPSTATES_OFFSET UNITYSDK_OFFSET(0x1A038BB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_DESTROY_OFFSET UNITYSDK_OFFSET(0x1A031E80)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_DISABLEALLACTIONS_1_OFFSET UNITYSDK_OFFSET(0x1A039CA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_DISABLEALLACTIONS_OFFSET UNITYSDK_OFFSET(0x1A034170)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_DISABLECONTROLS_1_OFFSET UNITYSDK_OFFSET(0x1A0343F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_DISABLECONTROLS_2_OFFSET UNITYSDK_OFFSET(0x1A032120)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_DISABLECONTROLS_OFFSET UNITYSDK_OFFSET(0x1A034300)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_DISABLESINGLEACTION_OFFSET UNITYSDK_OFFSET(0x1A034350)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A031760)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ENABLEALLACTIONS_OFFSET UNITYSDK_OFFSET(0x1A033DA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ENABLECONTROLS_1_OFFSET UNITYSDK_OFFSET(0x1A0340A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ENABLECONTROLS_2_OFFSET UNITYSDK_OFFSET(0x1A033110)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ENABLECONTROLS_OFFSET UNITYSDK_OFFSET(0x1A033FA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ENABLESINGLEACTION_OFFSET UNITYSDK_OFFSET(0x1A033FF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_EVALUATECOMPOSITEPARTMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1A037D20)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_FETCHACTIONSTATE_OFFSET UNITYSDK_OFFSET(0x1A033D20)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_FETCHMAPINDICES_OFFSET UNITYSDK_OFFSET(0x1A033D50)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A031DB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_FINDALLENABLEDACTIONS_OFFSET UNITYSDK_OFFSET(0x1A038DB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_FINISHBINDINGCOMPOSITESETUPS_OFFSET UNITYSDK_OFFSET(0x1A032D60)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETACTIONBINDINGSTARTINDEXANDCOUNT_OFFSET UNITYSDK_OFFSET(0x1A0339E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETACTIONORNONESTRING_OFFSET UNITYSDK_OFFSET(0x1A037590)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETACTIONORNULL_1_OFFSET UNITYSDK_OFFSET(0x1A0375E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETACTIONORNULL_OFFSET UNITYSDK_OFFSET(0x1A0376A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETBINDINGINDEXINMAP_OFFSET UNITYSDK_OFFSET(0x1A037800)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETBINDINGINDEXINSTATE_OFFSET UNITYSDK_OFFSET(0x1A037840)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETBINDINGSTATE_OFFSET UNITYSDK_OFFSET(0x1A037870)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETBINDING_OFFSET UNITYSDK_OFFSET(0x1A037890)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETCONTROL_OFFSET UNITYSDK_OFFSET(0x1A037760)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETINTERACTIONORNULL_OFFSET UNITYSDK_OFFSET(0x1A0377B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETVALUESIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x1A037960)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1A037A50)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_ACTIONSTATES_OFFSET UNITYSDK_OFFSET(0x1A031A30)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_BINDINGSTATES_OFFSET UNITYSDK_OFFSET(0x1A031A40)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_CONTROLINDEXTOBINDINGINDEX_OFFSET UNITYSDK_OFFSET(0x1A031A60)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_ENABLEDCONTROLS_OFFSET UNITYSDK_OFFSET(0x1A031A70)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_INTERACTIONSTATES_OFFSET UNITYSDK_OFFSET(0x1A031A50)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_ISPROCESSINGCONTROLSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1A031A80)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_MAPINDICES_OFFSET UNITYSDK_OFFSET(0x1A031A20)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_TOTALACTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1A0319E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_TOTALBINDINGCOUNT_OFFSET UNITYSDK_OFFSET(0x1A0319F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_TOTALCOMPOSITECOUNT_OFFSET UNITYSDK_OFFSET(0x1A0319C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_TOTALCONTROLCOUNT_OFFSET UNITYSDK_OFFSET(0x1A031A10)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_TOTALINTERACTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1A031A00)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_TOTALMAPCOUNT_OFFSET UNITYSDK_OFFSET(0x1A0319D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_HASENABLEDACTIONS_OFFSET UNITYSDK_OFFSET(0x1A032CF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_HOOKONBEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x1A0332B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A031A90)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ISACTIONBOUNDTOCONTROLFROMDEVICE_OFFSET UNITYSDK_OFFSET(0x1A033610)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ISACTUATED_OFFSET UNITYSDK_OFFSET(0x1A0366D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ISCONFLICTINGINPUT_OFFSET UNITYSDK_OFFSET(0x1A0358C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ISCONTROLENABLED_OFFSET UNITYSDK_OFFSET(0x1A0344C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ISUSINGDEVICE_OFFSET UNITYSDK_OFFSET(0x1A032820)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_NOTIFYLISTENERSOFACTIONCHANGE_OFFSET UNITYSDK_OFFSET(0x1A033380)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ONBEFOREINITIALUPDATE_OFFSET UNITYSDK_OFFSET(0x1A0349E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ONDEVICECHANGE_OFFSET UNITYSDK_OFFSET(0x1A0392F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_PROCESSCONTROLSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1A034BE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_PROCESSDEFAULTINTERACTION_OFFSET UNITYSDK_OFFSET(0x1A035ED0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_PROCESSINTERACTIONS_OFFSET UNITYSDK_OFFSET(0x1A0356A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_PROCESSTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1A0352D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_READCOMPOSITEPARTVALUEASOBJECT_OFFSET UNITYSDK_OFFSET(0x1A038100)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_READCOMPOSITEPARTVALUE_OFFSET UNITYSDK_OFFSET(0x1A037E80)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_READVALUEASBUTTON_OFFSET UNITYSDK_OFFSET(0x1A038530)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_READVALUEASOBJECT_OFFSET UNITYSDK_OFFSET(0x1A038380)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_READVALUE_OFFSET UNITYSDK_OFFSET(0x1A037B40)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_REMOVEMAPFROMGLOBALLIST_OFFSET UNITYSDK_OFFSET(0x1A0322D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_RESETACTIONSTATESDRIVENBY_OFFSET UNITYSDK_OFFSET(0x1A033420)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_RESETACTIONSTATE_OFFSET UNITYSDK_OFFSET(0x1A033700)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_RESETGLOBALS_OFFSET UNITYSDK_OFFSET(0x1A038A50)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_RESETINTERACTIONSTATEANDCANCELIFNECESSARY_OFFSET UNITYSDK_OFFSET(0x1A033A10)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_RESETINTERACTIONSTATE_OFFSET UNITYSDK_OFFSET(0x1A036580)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_RESTOREACTIONSTATES_OFFSET UNITYSDK_OFFSET(0x1A032E20)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_SAVEANDRESETSTATE_OFFSET UNITYSDK_OFFSET(0x1A038640)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_SETCONTROLENABLED_OFFSET UNITYSDK_OFFSET(0x1A0346A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_SETINITIALSTATECHECKPENDING_OFFSET UNITYSDK_OFFSET(0x1A034500)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_SETTOTALTIMEOUTCOMPLETIONTIME_OFFSET UNITYSDK_OFFSET(0x1A036780)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_SHOULDIGNOREINPUTONCOMPOSITEBINDING_OFFSET UNITYSDK_OFFSET(0x1A035680)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_SPLITUPMAPANDCONTROLANDBINDINGINDEX_OFFSET UNITYSDK_OFFSET(0x1A035280)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_STARTTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1A0367C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_STOPTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1A036960)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1A032810)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_TOCOMBINEDMAPANDCONTROLANDBINDINGINDEX_OFFSET UNITYSDK_OFFSET(0x1A0344E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_UNHOOKONBEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x1A0348D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECHANGEMONITOR_NOTIFYCONTROLSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1A035240)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECHANGEMONITOR_NOTIFYTIMEREXPIRED_OFFSET UNITYSDK_OFFSET(0x1A0352A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A032800)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionState_TypeDefinitionIndex = 28905;

	class InputActionState : public ::System::Object
	{
	public:
		static ::UnityEngine::InputSystem::InputActionState_GlobalState* StaticGet_s_GlobalState()
		{
			return (::UnityEngine::InputSystem::InputActionState_GlobalState*)Il2CppClass::FromTypeDefinitionIndex(InputActionState_TypeDefinitionIndex)->GetStaticField(0x220F0);
		}
		// static const ::System::Int32 kInvalidIndex = 0xFFFFFFFF; // 0x0
		::Il2CppArray<::UnityEngine::InputSystem::InputBindingComposite*>* composites; // 0x10
		::Il2CppArray<::UnityEngine::InputSystem::IInputInteraction*>* interactions; // 0x18
		::System::Action* m_OnBeforeUpdateDelegate; // 0x20
		::Il2CppArray<::UnityEngine::InputSystem::InputActionMap*>* maps; // 0x28
		::System::Action* m_OnAfterUpdateDelegate; // 0x30
		::Il2CppArray<::UnityEngine::InputSystem::InputProcessor*>* processors; // 0x38
		::Il2CppArray<::UnityEngine::InputSystem::InputControl*>* controls; // 0x40
		::UnityEngine::InputSystem::InputActionState_UnmanagedMemory memory; // 0x48
		::System::Boolean m_OnBeforeUpdateHooked; // 0xB8
		::System::Boolean m_InProcessControlStateChange; // 0xB9
		::System::Boolean m_OnAfterUpdateHooked; // 0xBA
		::System::Int32 totalProcessorCount; // 0xBC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_totalCompositeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_TOTALCOMPOSITECOUNT_OFFSET))(this);
		}

		::System::Int32 get_totalMapCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_TOTALMAPCOUNT_OFFSET))(this);
		}

		::System::Int32 get_totalActionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_TOTALACTIONCOUNT_OFFSET))(this);
		}

		::System::Int32 get_totalBindingCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_TOTALBINDINGCOUNT_OFFSET))(this);
		}

		::System::Int32 get_totalInteractionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_TOTALINTERACTIONCOUNT_OFFSET))(this);
		}

		::System::Int32 get_totalControlCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_TOTALCONTROLCOUNT_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputActionState_ActionMapIndices* get_mapIndices()
		{
			return ((::UnityEngine::InputSystem::InputActionState_ActionMapIndices*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_MAPINDICES_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputActionState_TriggerState* get_actionStates()
		{
			return ((::UnityEngine::InputSystem::InputActionState_TriggerState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_ACTIONSTATES_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputActionState_BindingState* get_bindingStates()
		{
			return ((::UnityEngine::InputSystem::InputActionState_BindingState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_BINDINGSTATES_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputActionState_InteractionState* get_interactionStates()
		{
			return ((::UnityEngine::InputSystem::InputActionState_InteractionState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_INTERACTIONSTATES_OFFSET))(this);
		}

		::System::Int32* get_controlIndexToBindingIndex()
		{
			return ((::System::Int32*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_CONTROLINDEXTOBINDINGINDEX_OFFSET))(this);
		}

		::System::UInt32* get_enabledControls()
		{
			return ((::System::UInt32*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_ENABLEDCONTROLS_OFFSET))(this);
		}

		::System::Boolean get_isProcessingControlStateChange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_ISPROCESSINGCONTROLSTATECHANGE_OFFSET))(this);
		}

		::System::Void Initialize(::UnityEngine::InputSystem::InputBindingResolver resolver)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputBindingResolver))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_INITIALIZE_OFFSET))(this, resolver);
		}

		::System::Void ClaimDataFrom(::UnityEngine::InputSystem::InputBindingResolver resolver)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputBindingResolver))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_CLAIMDATAFROM_OFFSET))(this, resolver);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_DISPOSE_OFFSET))(this);
		}

		::System::Void Destroy(::System::Boolean isFinalizing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_DESTROY_OFFSET))(this, isFinalizing);
		}

		::UnityEngine::InputSystem::InputActionState* Clone()
		{
			return ((::UnityEngine::InputSystem::InputActionState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_CLONE_OFFSET))(this);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::Boolean IsUsingDevice(::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ISUSINGDEVICE_OFFSET))(this, device);
		}

		::System::Boolean CanUseDevice(::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_CANUSEDEVICE_OFFSET))(this, device);
		}

		::System::Boolean HasEnabledActions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_HASENABLEDACTIONS_OFFSET))(this);
		}

		::System::Void FinishBindingCompositeSetups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_FINISHBINDINGCOMPOSITESETUPS_OFFSET))(this);
		}

		::System::Void RestoreActionStates(::UnityEngine::InputSystem::InputActionState_UnmanagedMemory oldState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionState_UnmanagedMemory))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_RESTOREACTIONSTATES_OFFSET))(this, oldState);
		}

		::System::Void ResetActionStatesDrivenBy(::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_RESETACTIONSTATESDRIVENBY_OFFSET))(this, device);
		}

		::System::Boolean IsActionBoundToControlFromDevice(::UnityEngine::InputSystem::InputDevice* device, ::System::Int32 actionIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ISACTIONBOUNDTOCONTROLFROMDEVICE_OFFSET))(this, device, actionIndex);
		}

		::System::Void ResetActionState(::System::Int32 actionIndex, ::UnityEngine::InputSystem::InputActionPhase toPhase, ::System::Boolean hardReset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::InputSystem::InputActionPhase, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_RESETACTIONSTATE_OFFSET))(this, actionIndex, toPhase, hardReset);
		}

		::UnityEngine::InputSystem::InputActionState_TriggerState& FetchActionState(::UnityEngine::InputSystem::InputAction* action)
		{
			return ((::UnityEngine::InputSystem::InputActionState_TriggerState&(*)(::PVOID, ::UnityEngine::InputSystem::InputAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_FETCHACTIONSTATE_OFFSET))(this, action);
		}

		::UnityEngine::InputSystem::InputActionState_ActionMapIndices FetchMapIndices(::UnityEngine::InputSystem::InputActionMap* map)
		{
			return ((::UnityEngine::InputSystem::InputActionState_ActionMapIndices(*)(::PVOID, ::UnityEngine::InputSystem::InputActionMap*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_FETCHMAPINDICES_OFFSET))(this, map);
		}

		::System::Void EnableAllActions(::UnityEngine::InputSystem::InputActionMap* map)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionMap*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ENABLEALLACTIONS_OFFSET))(this, map);
		}

		::System::Void EnableControls(::UnityEngine::InputSystem::InputActionMap* map)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionMap*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ENABLECONTROLS_OFFSET))(this, map);
		}

		::System::Void EnableSingleAction(::UnityEngine::InputSystem::InputAction* action)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ENABLESINGLEACTION_OFFSET))(this, action);
		}

		::System::Void EnableControls_1(::UnityEngine::InputSystem::InputAction* action)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ENABLECONTROLS_1_OFFSET))(this, action);
		}

		::System::Void DisableAllActions(::UnityEngine::InputSystem::InputActionMap* map)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionMap*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_DISABLEALLACTIONS_OFFSET))(this, map);
		}

		::System::Void DisableControls(::UnityEngine::InputSystem::InputActionMap* map)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionMap*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_DISABLECONTROLS_OFFSET))(this, map);
		}

		::System::Void DisableSingleAction(::UnityEngine::InputSystem::InputAction* action)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_DISABLESINGLEACTION_OFFSET))(this, action);
		}

		::System::Void DisableControls_1(::UnityEngine::InputSystem::InputAction* action)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_DISABLECONTROLS_1_OFFSET))(this, action);
		}

		::System::Void EnableControls_2(::System::Int32 mapIndex, ::System::Int32 controlStartIndex, ::System::Int32 numControls)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ENABLECONTROLS_2_OFFSET))(this, mapIndex, controlStartIndex, numControls);
		}

		::System::Void DisableControls_2(::System::Int32 mapIndex, ::System::Int32 controlStartIndex, ::System::Int32 numControls)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_DISABLECONTROLS_2_OFFSET))(this, mapIndex, controlStartIndex, numControls);
		}

		::System::Void SetInitialStateCheckPending(::UnityEngine::InputSystem::InputActionState_BindingState* bindingStatePtr, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionState_BindingState*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_SETINITIALSTATECHECKPENDING_OFFSET))(this, bindingStatePtr, value);
		}

		::System::Boolean IsControlEnabled(::System::Int32 controlIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ISCONTROLENABLED_OFFSET))(this, controlIndex);
		}

		::System::Void SetControlEnabled(::System::Int32 controlIndex, ::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_SETCONTROLENABLED_OFFSET))(this, controlIndex, state);
		}

		::System::Void HookOnBeforeUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_HOOKONBEFOREUPDATE_OFFSET))(this);
		}

		::System::Void UnhookOnBeforeUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_UNHOOKONBEFOREUPDATE_OFFSET))(this);
		}

		::System::Void OnBeforeInitialUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ONBEFOREINITIALUPDATE_OFFSET))(this);
		}

		::System::Void UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyControlStateChanged(::UnityEngine::InputSystem::InputControl* control, ::System::Double time, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::System::Int64 mapControlAndBindingIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*, ::System::Double, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECHANGEMONITOR_NOTIFYCONTROLSTATECHANGED_OFFSET))(this, control, time, eventPtr, mapControlAndBindingIndex);
		}

		::System::Void UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyTimerExpired(::UnityEngine::InputSystem::InputControl* control, ::System::Double time, ::System::Int64 mapControlAndBindingIndex, ::System::Int32 interactionIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*, ::System::Double, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECHANGEMONITOR_NOTIFYTIMEREXPIRED_OFFSET))(this, control, time, mapControlAndBindingIndex, interactionIndex);
		}

		static ::System::Int64 ToCombinedMapAndControlAndBindingIndex(::System::Int32 mapIndex, ::System::Int32 controlIndex, ::System::Int32 bindingIndex)
		{
			return ((::System::Int64(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_TOCOMBINEDMAPANDCONTROLANDBINDINGINDEX_OFFSET))(mapIndex, controlIndex, bindingIndex);
		}

		static ::System::Void SplitUpMapAndControlAndBindingIndex(::System::Int64 mapControlAndBindingIndex, ::System::Int32& mapIndex, ::System::Int32& controlIndex, ::System::Int32& bindingIndex)
		{
			return ((::System::Void(*)(::System::Int64, ::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_SPLITUPMAPANDCONTROLANDBINDINGINDEX_OFFSET))(mapControlAndBindingIndex, mapIndex, controlIndex, bindingIndex);
		}

		::System::Void ProcessControlStateChange(::System::Int32 mapIndex, ::System::Int32 controlIndex, ::System::Int32 bindingIndex, ::System::Double time, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Double, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_PROCESSCONTROLSTATECHANGE_OFFSET))(this, mapIndex, controlIndex, bindingIndex, time, eventPtr);
		}

		static ::System::Boolean ShouldIgnoreInputOnCompositeBinding(::UnityEngine::InputSystem::InputActionState_BindingState* binding, ::UnityEngine::InputSystem::LowLevel::InputEvent* eventPtr)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::InputActionState_BindingState*, ::UnityEngine::InputSystem::LowLevel::InputEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_SHOULDIGNOREINPUTONCOMPOSITEBINDING_OFFSET))(binding, eventPtr);
		}

		::System::Boolean IsConflictingInput(::UnityEngine::InputSystem::InputActionState_TriggerState& trigger, ::System::Int32 actionIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputActionState_TriggerState&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ISCONFLICTINGINPUT_OFFSET))(this, trigger, actionIndex);
		}

		::System::UInt16 GetActionBindingStartIndexAndCount(::System::Int32 actionIndex, ::System::UInt16& bindingCount)
		{
			return ((::System::UInt16(*)(::PVOID, ::System::Int32, ::System::UInt16&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETACTIONBINDINGSTARTINDEXANDCOUNT_OFFSET))(this, actionIndex, bindingCount);
		}

		::System::Void ProcessDefaultInteraction(::UnityEngine::InputSystem::InputActionState_TriggerState& trigger, ::System::Int32 actionIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionState_TriggerState&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_PROCESSDEFAULTINTERACTION_OFFSET))(this, trigger, actionIndex);
		}

		::System::Void ProcessInteractions(::UnityEngine::InputSystem::InputActionState_TriggerState& trigger, ::System::Int32 interactionStartIndex, ::System::Int32 interactionCount)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionState_TriggerState&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_PROCESSINTERACTIONS_OFFSET))(this, trigger, interactionStartIndex, interactionCount);
		}

		::System::Void ProcessTimeout(::System::Double time, ::System::Int32 mapIndex, ::System::Int32 controlIndex, ::System::Int32 bindingIndex, ::System::Int32 interactionIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_PROCESSTIMEOUT_OFFSET))(this, time, mapIndex, controlIndex, bindingIndex, interactionIndex);
		}

		::System::Void SetTotalTimeoutCompletionTime(::System::Single seconds, ::UnityEngine::InputSystem::InputActionState_TriggerState& trigger)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::InputSystem::InputActionState_TriggerState&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_SETTOTALTIMEOUTCOMPLETIONTIME_OFFSET))(this, seconds, trigger);
		}

		::System::Void StartTimeout(::System::Single seconds, ::UnityEngine::InputSystem::InputActionState_TriggerState& trigger)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::InputSystem::InputActionState_TriggerState&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_STARTTIMEOUT_OFFSET))(this, seconds, trigger);
		}

		::System::Void StopTimeout(::System::Int32 interactionIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_STOPTIMEOUT_OFFSET))(this, interactionIndex);
		}

		::System::Void ChangePhaseOfInteraction(::UnityEngine::InputSystem::InputActionPhase newPhase, ::UnityEngine::InputSystem::InputActionState_TriggerState& trigger, ::UnityEngine::InputSystem::InputActionPhase phaseAfterPerformed, ::System::Boolean processNextInteractionOnCancel)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionPhase, ::UnityEngine::InputSystem::InputActionState_TriggerState&, ::UnityEngine::InputSystem::InputActionPhase, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_CHANGEPHASEOFINTERACTION_OFFSET))(this, newPhase, trigger, phaseAfterPerformed, processNextInteractionOnCancel);
		}

		::System::Boolean ChangePhaseOfAction(::UnityEngine::InputSystem::InputActionPhase newPhase, ::UnityEngine::InputSystem::InputActionState_TriggerState& trigger, ::UnityEngine::InputSystem::InputActionPhase phaseAfterPerformedOrCanceled)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputActionPhase, ::UnityEngine::InputSystem::InputActionState_TriggerState&, ::UnityEngine::InputSystem::InputActionPhase))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_CHANGEPHASEOFACTION_OFFSET))(this, newPhase, trigger, phaseAfterPerformedOrCanceled);
		}

		::System::Void ChangePhaseOfActionInternal(::System::Int32 actionIndex, ::UnityEngine::InputSystem::InputActionState_TriggerState* actionState, ::UnityEngine::InputSystem::InputActionPhase newPhase, ::UnityEngine::InputSystem::InputActionState_TriggerState& trigger)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::InputSystem::InputActionState_TriggerState*, ::UnityEngine::InputSystem::InputActionPhase, ::UnityEngine::InputSystem::InputActionState_TriggerState&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_CHANGEPHASEOFACTIONINTERNAL_OFFSET))(this, actionIndex, actionState, newPhase, trigger);
		}

		::System::Void CallActionListeners(::System::Int32 actionIndex, ::UnityEngine::InputSystem::InputActionMap* actionMap, ::UnityEngine::InputSystem::InputActionPhase phase, ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>& listeners, ::System::String* callbackName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::InputSystem::InputActionMap*, ::UnityEngine::InputSystem::InputActionPhase, ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>&, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_CALLACTIONLISTENERS_OFFSET))(this, actionIndex, actionMap, phase, listeners, callbackName);
		}

		::System::Object* GetActionOrNoneString(::UnityEngine::InputSystem::InputActionState_TriggerState& trigger)
		{
			return ((::System::Object*(*)(::PVOID, ::UnityEngine::InputSystem::InputActionState_TriggerState&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETACTIONORNONESTRING_OFFSET))(this, trigger);
		}

		::UnityEngine::InputSystem::InputAction* GetActionOrNull(::System::Int32 bindingIndex)
		{
			return ((::UnityEngine::InputSystem::InputAction*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETACTIONORNULL_OFFSET))(this, bindingIndex);
		}

		::UnityEngine::InputSystem::InputAction* GetActionOrNull_1(::UnityEngine::InputSystem::InputActionState_TriggerState& trigger)
		{
			return ((::UnityEngine::InputSystem::InputAction*(*)(::PVOID, ::UnityEngine::InputSystem::InputActionState_TriggerState&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETACTIONORNULL_1_OFFSET))(this, trigger);
		}

		::UnityEngine::InputSystem::InputControl* GetControl(::UnityEngine::InputSystem::InputActionState_TriggerState& trigger)
		{
			return ((::UnityEngine::InputSystem::InputControl*(*)(::PVOID, ::UnityEngine::InputSystem::InputActionState_TriggerState&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETCONTROL_OFFSET))(this, trigger);
		}

		::UnityEngine::InputSystem::IInputInteraction* GetInteractionOrNull(::UnityEngine::InputSystem::InputActionState_TriggerState& trigger)
		{
			return ((::UnityEngine::InputSystem::IInputInteraction*(*)(::PVOID, ::UnityEngine::InputSystem::InputActionState_TriggerState&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETINTERACTIONORNULL_OFFSET))(this, trigger);
		}

		::System::Int32 GetBindingIndexInMap(::System::Int32 bindingIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETBINDINGINDEXINMAP_OFFSET))(this, bindingIndex);
		}

		::System::Int32 GetBindingIndexInState(::System::Int32 mapIndex, ::System::Int32 bindingIndexInMap)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETBINDINGINDEXINSTATE_OFFSET))(this, mapIndex, bindingIndexInMap);
		}

		::UnityEngine::InputSystem::InputActionState_BindingState GetBindingState(::System::Int32 bindingIndex)
		{
			return ((::UnityEngine::InputSystem::InputActionState_BindingState(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETBINDINGSTATE_OFFSET))(this, bindingIndex);
		}

		::UnityEngine::InputSystem::InputBinding GetBinding(::System::Int32 bindingIndex)
		{
			return ((::UnityEngine::InputSystem::InputBinding(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETBINDING_OFFSET))(this, bindingIndex);
		}

		::System::Void ResetInteractionStateAndCancelIfNecessary(::System::Int32 mapIndex, ::System::Int32 bindingIndex, ::System::Int32 interactionIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_RESETINTERACTIONSTATEANDCANCELIFNECESSARY_OFFSET))(this, mapIndex, bindingIndex, interactionIndex);
		}

		::System::Void ResetInteractionState(::System::Int32 mapIndex, ::System::Int32 bindingIndex, ::System::Int32 interactionIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_RESETINTERACTIONSTATE_OFFSET))(this, mapIndex, bindingIndex, interactionIndex);
		}

		::System::Int32 GetValueSizeInBytes(::System::Int32 bindingIndex, ::System::Int32 controlIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETVALUESIZEINBYTES_OFFSET))(this, bindingIndex, controlIndex);
		}

		::System::Type* GetValueType(::System::Int32 bindingIndex, ::System::Int32 controlIndex)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETVALUETYPE_OFFSET))(this, bindingIndex, controlIndex);
		}

		::System::Boolean IsActuated(::UnityEngine::InputSystem::InputActionState_TriggerState& trigger, ::System::Single threshold)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputActionState_TriggerState&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ISACTUATED_OFFSET))(this, trigger, threshold);
		}

		::System::Single ComputeMagnitude(::UnityEngine::InputSystem::InputActionState_TriggerState& trigger)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::InputSystem::InputActionState_TriggerState&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_COMPUTEMAGNITUDE_OFFSET))(this, trigger);
		}

		::System::Single ComputeMagnitude_1(::System::Int32 bindingIndex, ::System::Int32 controlIndex)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_COMPUTEMAGNITUDE_1_OFFSET))(this, bindingIndex, controlIndex);
		}

		::System::Void ReadValue(::System::Int32 bindingIndex, ::System::Int32 controlIndex, ::System::Void* buffer, ::System::Int32 bufferSize, ::System::Boolean ignoreComposites)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Void*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_READVALUE_OFFSET))(this, bindingIndex, controlIndex, buffer, bufferSize, ignoreComposites);
		}

		::System::Single EvaluateCompositePartMagnitude(::System::Int32 bindingIndex, ::System::Int32 partNumber)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_EVALUATECOMPOSITEPARTMAGNITUDE_OFFSET))(this, bindingIndex, partNumber);
		}

		::System::Boolean ReadCompositePartValue(::System::Int32 bindingIndex, ::System::Int32 partNumber, ::System::Void* buffer, ::System::Int32 bufferSize)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Void*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_READCOMPOSITEPARTVALUE_OFFSET))(this, bindingIndex, partNumber, buffer, bufferSize);
		}

		::System::Object* ReadCompositePartValueAsObject(::System::Int32 bindingIndex, ::System::Int32 partNumber)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_READCOMPOSITEPARTVALUEASOBJECT_OFFSET))(this, bindingIndex, partNumber);
		}

		::System::Object* ReadValueAsObject(::System::Int32 bindingIndex, ::System::Int32 controlIndex, ::System::Boolean ignoreComposites)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_READVALUEASOBJECT_OFFSET))(this, bindingIndex, controlIndex, ignoreComposites);
		}

		::System::Boolean ReadValueAsButton(::System::Int32 bindingIndex, ::System::Int32 controlIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_READVALUEASBUTTON_OFFSET))(this, bindingIndex, controlIndex);
		}

		static ::UnityEngine::InputSystem::Utilities::ISavedState* SaveAndResetState()
		{
			return ((::UnityEngine::InputSystem::Utilities::ISavedState*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_SAVEANDRESETSTATE_OFFSET))();
		}

		::System::Void AddToGlobalList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ADDTOGLOBALLIST_OFFSET))(this);
		}

		::System::Void RemoveMapFromGlobalList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_REMOVEMAPFROMGLOBALLIST_OFFSET))(this);
		}

		static ::System::Void CompactGlobalList()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_COMPACTGLOBALLIST_OFFSET))();
		}

		static ::System::Void NotifyListenersOfActionChange(::UnityEngine::InputSystem::InputActionChange change, ::System::Object* actionOrMapOrAsset)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputActionChange, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_NOTIFYLISTENERSOFACTIONCHANGE_OFFSET))(change, actionOrMapOrAsset);
		}

		static ::System::Void ResetGlobals()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_RESETGLOBALS_OFFSET))();
		}

		static ::System::Int32 FindAllEnabledActions(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputAction*>* result)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputAction*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_FINDALLENABLEDACTIONS_OFFSET))(result);
		}

		static ::System::Void OnDeviceChange(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::InputDeviceChange change)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ONDEVICECHANGE_OFFSET))(device, change);
		}

		static ::System::Void DeferredResolutionOfBindings()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_DEFERREDRESOLUTIONOFBINDINGS_OFFSET))();
		}

		static ::System::Void DisableAllActions_1()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_DISABLEALLACTIONS_1_OFFSET))();
		}

		static ::System::Void DestroyAllActionMapStates()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_DESTROYALLACTIONMAPSTATES_OFFSET))();
		}
	};
}
