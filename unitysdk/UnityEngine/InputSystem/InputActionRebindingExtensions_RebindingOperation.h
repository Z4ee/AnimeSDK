#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionRebindingExtensions_RebindingOperation_Flags.h"
#include "unitysdk/UnityEngine/InputSystem/InputBinding.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlList_1.h"
#include "unitysdk/UnityEngine/InputSystem/Layouts/InputControlLayout_Cache.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InternedString.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/ReadOnlyArray_1.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem { class InputDevice; }

#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_ADDCANDIDATE_OFFSET UNITYSDK_OFFSET(0x1E77A4D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_CANCEL_OFFSET UNITYSDK_OFFSET(0x1E779F70)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1E77A050)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E77A990)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E77ABB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_GENERATEPATHFORCONTROL_OFFSET UNITYSDK_OFFSET(0x1E77C600)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x1E778580)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_GET_BINDINGMASK_OFFSET UNITYSDK_OFFSET(0x1E778590)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_GET_CANCELED_OFFSET UNITYSDK_OFFSET(0x1E7786B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_GET_CANDIDATES_OFFSET UNITYSDK_OFFSET(0x1E7785D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_GET_COMPLETED_OFFSET UNITYSDK_OFFSET(0x1E7786A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_GET_EXPECTEDCONTROLTYPE_OFFSET UNITYSDK_OFFSET(0x1E7786E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_GET_MAGNITUDES_OFFSET UNITYSDK_OFFSET(0x1E778610)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_GET_SCORES_OFFSET UNITYSDK_OFFSET(0x1E7785F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_GET_SELECTEDCONTROL_OFFSET UNITYSDK_OFFSET(0x1E778630)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_GET_STARTED_OFFSET UNITYSDK_OFFSET(0x1E778690)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x1E7786C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_GET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x1E7786D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_HAVEPATHMATCH_OFFSET UNITYSDK_OFFSET(0x1E77C390)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_HOOKONAFTERUPDATE_OFFSET UNITYSDK_OFFSET(0x1E779E20)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_HOOKONEVENT_OFFSET UNITYSDK_OFFSET(0x1E779EC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_ONAFTERUPDATE_OFFSET UNITYSDK_OFFSET(0x1E77C410)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_ONAPPLYBINDING_OFFSET UNITYSDK_OFFSET(0x1E779AB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_ONCANCEL_1_OFFSET UNITYSDK_OFFSET(0x1E779FE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x1E779A70)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_ONCOMPLETE_1_OFFSET UNITYSDK_OFFSET(0x1E77A060)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1E779A60)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_ONCOMPUTESCORE_OFFSET UNITYSDK_OFFSET(0x1E779AA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_ONEVENT_OFFSET UNITYSDK_OFFSET(0x1E77AD70)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_ONGENERATEPATH_OFFSET UNITYSDK_OFFSET(0x1E779A90)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_ONMATCHWAITFORANOTHER_OFFSET UNITYSDK_OFFSET(0x1E779AC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_ONPOTENTIALMATCH_OFFSET UNITYSDK_OFFSET(0x1E779A80)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_REMOVECANDIDATE_OFFSET UNITYSDK_OFFSET(0x1E77A830)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_RESETAFTERMATCHCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1E77C760)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_RESET_OFFSET UNITYSDK_OFFSET(0x1E77AC20)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_SORTCANDIDATESBYSCORE_OFFSET UNITYSDK_OFFSET(0x1E77A680)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_START_OFFSET UNITYSDK_OFFSET(0x1E779AD0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_THROWIFREBINDINPROGRESS_OFFSET UNITYSDK_OFFSET(0x1E778910)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_UNHOOKONAFTERUPDATE_OFFSET UNITYSDK_OFFSET(0x1E77AB40)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_UNHOOKONEVENT_OFFSET UNITYSDK_OFFSET(0x1E77AAD0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_WITHACTION_OFFSET UNITYSDK_OFFSET(0x1E778700)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_WITHBINDINGGROUP_OFFSET UNITYSDK_OFFSET(0x1E7796C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_WITHBINDINGMASK_OFFSET UNITYSDK_OFFSET(0x1E779680)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_WITHCANCELINGTHROUGH_1_OFFSET UNITYSDK_OFFSET(0x1E778B20)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_WITHCANCELINGTHROUGH_OFFSET UNITYSDK_OFFSET(0x1E778AA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_WITHCONTROLSEXCLUDING_OFFSET UNITYSDK_OFFSET(0x1E7798D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_WITHCONTROLSHAVINGTOMATCHPATH_OFFSET UNITYSDK_OFFSET(0x1E779510)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_WITHEXPECTEDCONTROLTYPE_1_OFFSET UNITYSDK_OFFSET(0x1E778C90)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_WITHEXPECTEDCONTROLTYPE_OFFSET UNITYSDK_OFFSET(0x1E778980)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_WITHMAGNITUDEHAVINGTOBEGREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1E779740)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_WITHMATCHINGEVENTSBEINGSUPPRESSED_OFFSET UNITYSDK_OFFSET(0x1E778A10)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_WITHOUTGENERALIZINGPATHOFSELECTEDCONTROL_OFFSET UNITYSDK_OFFSET(0x1E779710)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_WITHOUTIGNORINGNOISYCONTROLS_OFFSET UNITYSDK_OFFSET(0x1E779850)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_WITHREBINDADDINGNEWBINDING_OFFSET UNITYSDK_OFFSET(0x1E779720)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_WITHTARGETBINDING_OFFSET UNITYSDK_OFFSET(0x1E778DE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_WITHTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1E779A50)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E77C950)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionRebindingExtensions_RebindingOperation_TypeDefinitionIndex = 32169;

	class InputActionRebindingExtensions_RebindingOperation : public ::System::Object
	{
	public:
		// static const ::System::Single kDefaultMagnitudeThreshold; // 0x0
		::Il2CppArray<::System::String*>* m_IncludePaths; // 0x10
		::System::Type* m_ControlType; // 0x18
		::System::Action_2<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*, ::System::String*>* m_OnApplyBinding; // 0x20
		::Il2CppArray<::System::Single>* m_Magnitudes; // 0x28
		::UnityEngine::InputSystem::Utilities::InternedString m_ExpectedLayout; // 0x30
		::System::String* m_CancelBinding; // 0x40
		::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> m_BindingMask; // 0x48
		::System::Action* m_OnAfterUpdateDelegate; // 0xA8
		::System::Func_3<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::System::Single>* m_OnComputeScore; // 0xB0
		::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputControl*, ::System::Single>* m_StartingActuations; // 0xB8
		::System::Func_2<::UnityEngine::InputSystem::InputControl*, ::System::String*>* m_OnGeneratePath; // 0xC0
		::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>* m_OnCancel; // 0xC8
		::System::Text::StringBuilder* m_PathBuilder; // 0xD0
		::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>* m_OnComplete; // 0xD8
		::Il2CppArray<::System::String*>* m_ExcludePaths; // 0xE0
		::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>* m_OnPotentialMatch; // 0xE8
		::Il2CppArray<::System::Single>* m_Scores; // 0xF0
		::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* m_OnEventDelegate; // 0xF8
		::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache m_LayoutCache; // 0x100
		::UnityEngine::InputSystem::InputAction* m_ActionToRebind; // 0x108
		::System::String* m_BindingGroupForNewBinding; // 0x110
		::System::Int32 m_IncludePathCount; // 0x118
		::System::Single m_MagnitudeThreshold; // 0x11C
		::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> m_Candidates; // 0x120
		::System::Single m_WaitSecondsAfterMatch; // 0x140
		::System::Int32 m_TargetBindingIndex; // 0x144
		::System::Int32 m_ExcludePathCount; // 0x148
		::System::Double m_StartTime; // 0x150
		::System::Double m_LastMatchTime; // 0x158
		::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation_Flags m_Flags; // 0x160
		::System::Single m_Timeout; // 0x164

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputAction* get_action()
		{
			return ((::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_GET_ACTION_OFFSET))(this);
		}

		::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> get_bindingMask()
		{
			return ((::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_GET_BINDINGMASK_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> get_candidates()
		{
			return ((::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_GET_CANDIDATES_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::System::Single> get_scores()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_GET_SCORES_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::System::Single> get_magnitudes()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_GET_MAGNITUDES_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputControl* get_selectedControl()
		{
			return ((::UnityEngine::InputSystem::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_GET_SELECTEDCONTROL_OFFSET))(this);
		}

		::System::Boolean get_started()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_GET_STARTED_OFFSET))(this);
		}

		::System::Boolean get_completed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_GET_COMPLETED_OFFSET))(this);
		}

		::System::Boolean get_canceled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_GET_CANCELED_OFFSET))(this);
		}

		::System::Double get_startTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_GET_STARTTIME_OFFSET))(this);
		}

		::System::Single get_timeout()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_GET_TIMEOUT_OFFSET))(this);
		}

		::System::String* get_expectedControlType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_GET_EXPECTEDCONTROLTYPE_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithAction(::UnityEngine::InputSystem::InputAction* action)
		{
			return ((::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*(*)(::PVOID, ::UnityEngine::InputSystem::InputAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_WITHACTION_OFFSET))(this, action);
		}

		::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithMatchingEventsBeingSuppressed(::System::Boolean value)
		{
			return ((::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_WITHMATCHINGEVENTSBEINGSUPPRESSED_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithCancelingThrough(::System::String* binding)
		{
			return ((::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_WITHCANCELINGTHROUGH_OFFSET))(this, binding);
		}

		::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithCancelingThrough_1(::UnityEngine::InputSystem::InputControl* control)
		{
			return ((::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_WITHCANCELINGTHROUGH_1_OFFSET))(this, control);
		}

		::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithExpectedControlType(::System::String* layoutName)
		{
			return ((::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_WITHEXPECTEDCONTROLTYPE_OFFSET))(this, layoutName);
		}

		::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithExpectedControlType_1(::System::Type* type)
		{
			return ((::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_WITHEXPECTEDCONTROLTYPE_1_OFFSET))(this, type);
		}

		::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithTargetBinding(::System::Int32 bindingIndex)
		{
			return ((::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_WITHTARGETBINDING_OFFSET))(this, bindingIndex);
		}

		::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithBindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> bindingMask)
		{
			return ((::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*(*)(::PVOID, ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_WITHBINDINGMASK_OFFSET))(this, bindingMask);
		}

		::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithBindingGroup(::System::String* group)
		{
			return ((::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_WITHBINDINGGROUP_OFFSET))(this, group);
		}

		::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithoutGeneralizingPathOfSelectedControl()
		{
			return ((::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_WITHOUTGENERALIZINGPATHOFSELECTEDCONTROL_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithRebindAddingNewBinding(::System::String* group)
		{
			return ((::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_WITHREBINDADDINGNEWBINDING_OFFSET))(this, group);
		}

		::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithMagnitudeHavingToBeGreaterThan(::System::Single magnitude)
		{
			return ((::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_WITHMAGNITUDEHAVINGTOBEGREATERTHAN_OFFSET))(this, magnitude);
		}

		::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithoutIgnoringNoisyControls()
		{
			return ((::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_WITHOUTIGNORINGNOISYCONTROLS_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithControlsHavingToMatchPath(::System::String* path)
		{
			return ((::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_WITHCONTROLSHAVINGTOMATCHPATH_OFFSET))(this, path);
		}

		::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithControlsExcluding(::System::String* path)
		{
			return ((::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_WITHCONTROLSEXCLUDING_OFFSET))(this, path);
		}

		::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithTimeout(::System::Single timeInSeconds)
		{
			return ((::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_WITHTIMEOUT_OFFSET))(this, timeInSeconds);
		}

		::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* OnComplete(::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>* callback)
		{
			return ((::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*(*)(::PVOID, ::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_ONCOMPLETE_OFFSET))(this, callback);
		}

		::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* OnCancel(::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>* callback)
		{
			return ((::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*(*)(::PVOID, ::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_ONCANCEL_OFFSET))(this, callback);
		}

		::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* OnPotentialMatch(::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>* callback)
		{
			return ((::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*(*)(::PVOID, ::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_ONPOTENTIALMATCH_OFFSET))(this, callback);
		}

		::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* OnGeneratePath(::System::Func_2<::UnityEngine::InputSystem::InputControl*, ::System::String*>* callback)
		{
			return ((::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*(*)(::PVOID, ::System::Func_2<::UnityEngine::InputSystem::InputControl*, ::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_ONGENERATEPATH_OFFSET))(this, callback);
		}

		::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* OnComputeScore(::System::Func_3<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::System::Single>* callback)
		{
			return ((::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*(*)(::PVOID, ::System::Func_3<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_ONCOMPUTESCORE_OFFSET))(this, callback);
		}

		::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* OnApplyBinding(::System::Action_2<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*, ::System::String*>* callback)
		{
			return ((::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*(*)(::PVOID, ::System::Action_2<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*, ::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_ONAPPLYBINDING_OFFSET))(this, callback);
		}

		::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* OnMatchWaitForAnother(::System::Single seconds)
		{
			return ((::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_ONMATCHWAITFORANOTHER_OFFSET))(this, seconds);
		}

		::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* Start()
		{
			return ((::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_START_OFFSET))(this);
		}

		::System::Void Cancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_CANCEL_OFFSET))(this);
		}

		::System::Void Complete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_COMPLETE_OFFSET))(this);
		}

		::System::Void AddCandidate(::UnityEngine::InputSystem::InputControl* control, ::System::Single score, ::System::Single magnitude)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_ADDCANDIDATE_OFFSET))(this, control, score, magnitude);
		}

		::System::Void RemoveCandidate(::UnityEngine::InputSystem::InputControl* control)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_REMOVECANDIDATE_OFFSET))(this, control);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_DISPOSE_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_FINALIZE_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* Reset()
		{
			return ((::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_RESET_OFFSET))(this);
		}

		::System::Void HookOnEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_HOOKONEVENT_OFFSET))(this);
		}

		::System::Void UnhookOnEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_UNHOOKONEVENT_OFFSET))(this);
		}

		::System::Void OnEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_ONEVENT_OFFSET))(this, eventPtr, device);
		}

		::System::Void SortCandidatesByScore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_SORTCANDIDATESBYSCORE_OFFSET))(this);
		}

		static ::System::Boolean HavePathMatch(::UnityEngine::InputSystem::InputControl* control, ::Il2CppArray<::System::String*>* paths, ::System::Int32 pathCount)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::InputControl*, ::Il2CppArray<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_HAVEPATHMATCH_OFFSET))(control, paths, pathCount);
		}

		::System::Void HookOnAfterUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_HOOKONAFTERUPDATE_OFFSET))(this);
		}

		::System::Void UnhookOnAfterUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_UNHOOKONAFTERUPDATE_OFFSET))(this);
		}

		::System::Void OnAfterUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_ONAFTERUPDATE_OFFSET))(this);
		}

		::System::Void OnComplete_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_ONCOMPLETE_1_OFFSET))(this);
		}

		::System::Void OnCancel_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_ONCANCEL_1_OFFSET))(this);
		}

		::System::Void ResetAfterMatchCompleted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_RESETAFTERMATCHCOMPLETED_OFFSET))(this);
		}

		::System::Void ThrowIfRebindInProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_THROWIFREBINDINPROGRESS_OFFSET))(this);
		}

		::System::String* GeneratePathForControl(::UnityEngine::InputSystem::InputControl* control)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION_GENERATEPATHFORCONTROL_OFFSET))(this, control);
		}
	};
}
