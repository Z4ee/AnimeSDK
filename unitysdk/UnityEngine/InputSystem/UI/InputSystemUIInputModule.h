#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/BaseInputModule.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"
#include "unitysdk/UnityEngine/InputSystem/InputAction_CallbackContext.h"
#include "unitysdk/UnityEngine/InputSystem/UI/InputSystemUIInputModule_InputActionReferenceState.h"
#include "unitysdk/UnityEngine/InputSystem/UI/NavigationModel.h"
#include "unitysdk/UnityEngine/InputSystem/UI/PointerModel.h"
#include "unitysdk/UnityEngine/InputSystem/UI/PointerModel_ButtonState.h"
#include "unitysdk/UnityEngine/InputSystem/UI/UIPointerBehavior.h"
#include "unitysdk/UnityEngine/InputSystem/UI/UIPointerType.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InlinedArray_1.h"

namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem { class InputActionAsset; }
namespace UnityEngine::InputSystem { class InputActionReference; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem::UI { class ExtendedPointerEventData; }

#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ACTIVATEMODULE_OFFSET UNITYSDK_OFFSET(0x1B38C7E0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ALLOCATEPOINTER_OFFSET UNITYSDK_OFFSET(0x1B393830)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ASSIGNDEFAULTACTIONS_OFFSET UNITYSDK_OFFSET(0x1B3914E0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B391F10)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_CHECKFORREMOVEDDEVICE_OFFSET UNITYSDK_OFFSET(0x1B392B10)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_DISABLEALLACTIONS_OFFSET UNITYSDK_OFFSET(0x1B392750)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_DISABLEINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1B390D50)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ENABLEALLACTIONS_OFFSET UNITYSDK_OFFSET(0x1B392620)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ENABLEINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1B390FA0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GETLASTRAYCASTRESULT_OFFSET UNITYSDK_OFFSET(0x1B38CD00)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GETPOINTERSTATEFORINDEX_OFFSET UNITYSDK_OFFSET(0x1B3929A0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GETPOINTERSTATEINDEXFOR_1_OFFSET UNITYSDK_OFFSET(0x1B392A00)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GETPOINTERSTATEINDEXFOR_2_OFFSET UNITYSDK_OFFSET(0x1B392BB0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GETPOINTERSTATEINDEXFOR_OFFSET UNITYSDK_OFFSET(0x1B38CC10)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_ACTIONSASSET_OFFSET UNITYSDK_OFFSET(0x1B395460)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_CANCEL_OFFSET UNITYSDK_OFFSET(0x1B391420)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_DESELECTONBACKGROUNDCLICK_OFFSET UNITYSDK_OFFSET(0x1B38C7A0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_EXPLICTLYIGNOREFOCUS_OFFSET UNITYSDK_OFFSET(0x1B390450)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_LEFTCLICK_OFFSET UNITYSDK_OFFSET(0x1B3912E0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_MIDDLECLICK_OFFSET UNITYSDK_OFFSET(0x1B391320)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_MOVEREPEATDELAY_OFFSET UNITYSDK_OFFSET(0x1B390410)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_MOVEREPEATRATE_OFFSET UNITYSDK_OFFSET(0x1B390430)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_MOVE_OFFSET UNITYSDK_OFFSET(0x1B3913A0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_POINTERBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1B38C7C0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_POINT_OFFSET UNITYSDK_OFFSET(0x1B391260)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_REPEATDELAY_OFFSET UNITYSDK_OFFSET(0x1B390670)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_REPEATRATE_OFFSET UNITYSDK_OFFSET(0x1B390650)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_RIGHTCLICK_OFFSET UNITYSDK_OFFSET(0x1B391360)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_SCROLLWHEEL_OFFSET UNITYSDK_OFFSET(0x1B3912A0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_SHOULDIGNOREFOCUS_OFFSET UNITYSDK_OFFSET(0x1B390530)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_SUBMIT_OFFSET UNITYSDK_OFFSET(0x1B3913E0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_TRACKEDDEVICEDRAGTHRESHOLDMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1B3906B0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_TRACKEDDEVICEORIENTATION_OFFSET UNITYSDK_OFFSET(0x1B391460)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_TRACKEDDEVICEPOSITION_OFFSET UNITYSDK_OFFSET(0x1B3914A0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_TRACKEDDEVICESELECT_OFFSET UNITYSDK_OFFSET(0x1B391E70)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_XRTRACKINGORIGIN_OFFSET UNITYSDK_OFFSET(0x1B390690)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_HASNOACTIONS_OFFSET UNITYSDK_OFFSET(0x1B392150)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_HAVECONTROLFORDEVICE_OFFSET UNITYSDK_OFFSET(0x1B393740)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_HOOKACTIONS_OFFSET UNITYSDK_OFFSET(0x1B3923B0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_IGNORENEXTCLICK_OFFSET UNITYSDK_OFFSET(0x1B394290)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ISPOINTEROVERGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B38C9A0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONCONTROLSCHANGED_OFFSET UNITYSDK_OFFSET(0x1B394C50)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B391FA0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B3926A0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B392070)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONLEFTCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B3944D0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONMIDDLECLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B394720)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1B394980)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONPOINTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B3940A0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONRIGHTCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B3945F0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONSCROLLCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B394850)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONTRACKEDDEVICEORIENTATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B3949E0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONTRACKEDDEVICEPOSITIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B394B00)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_PERFORMRAYCAST_OFFSET UNITYSDK_OFFSET(0x1B38CDA0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_POINTERSHOULDIGNORETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B38EE00)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_PROCESSNAVIGATION_OFFSET UNITYSDK_OFFSET(0x1B38FB40)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_PROCESSPOINTERBUTTONDRAG_OFFSET UNITYSDK_OFFSET(0x1B38E7B0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_PROCESSPOINTERBUTTON_OFFSET UNITYSDK_OFFSET(0x1B38D990)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_PROCESSPOINTERMOVEMENT_1_OFFSET UNITYSDK_OFFSET(0x1B38EFA0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_PROCESSPOINTERMOVEMENT_OFFSET UNITYSDK_OFFSET(0x1B38D930)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_PROCESSPOINTERSCROLL_OFFSET UNITYSDK_OFFSET(0x1B38ECC0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_PROCESSPOINTER_OFFSET UNITYSDK_OFFSET(0x1B38D090)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_PROCESS_OFFSET UNITYSDK_OFFSET(0x1B394C60)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_PURGESTALEPOINTERS_OFFSET UNITYSDK_OFFSET(0x1B393EF0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_REMOVEPOINTERATINDEX_OFFSET UNITYSDK_OFFSET(0x1B393D20)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_RESETPOINTERS_OFFSET UNITYSDK_OFFSET(0x1B392360)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SENDPOINTEREXITEVENTSANDREMOVEPOINTER_OFFSET UNITYSDK_OFFSET(0x1B392830)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SETACTIONCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1B394F60)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SETACTIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B395070)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_ACTIONSASSET_OFFSET UNITYSDK_OFFSET(0x1B391A10)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_CANCEL_OFFSET UNITYSDK_OFFSET(0x1B391430)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_DESELECTONBACKGROUNDCLICK_OFFSET UNITYSDK_OFFSET(0x1B38C7B0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_LEFTCLICK_OFFSET UNITYSDK_OFFSET(0x1B3912F0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_MIDDLECLICK_OFFSET UNITYSDK_OFFSET(0x1B391330)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_MOVEREPEATDELAY_OFFSET UNITYSDK_OFFSET(0x1B390420)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_MOVEREPEATRATE_OFFSET UNITYSDK_OFFSET(0x1B390440)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_MOVE_OFFSET UNITYSDK_OFFSET(0x1B3913B0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_POINTERBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1B38C7D0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_POINT_OFFSET UNITYSDK_OFFSET(0x1B391270)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_REPEATDELAY_OFFSET UNITYSDK_OFFSET(0x1B390680)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_REPEATRATE_OFFSET UNITYSDK_OFFSET(0x1B390660)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_RIGHTCLICK_OFFSET UNITYSDK_OFFSET(0x1B391370)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_SCROLLWHEEL_OFFSET UNITYSDK_OFFSET(0x1B3912B0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_SUBMIT_OFFSET UNITYSDK_OFFSET(0x1B3913F0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_TRACKEDDEVICEDRAGTHRESHOLDMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1B3906C0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_TRACKEDDEVICEORIENTATION_OFFSET UNITYSDK_OFFSET(0x1B391470)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_TRACKEDDEVICEPOSITION_OFFSET UNITYSDK_OFFSET(0x1B3914B0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_TRACKEDDEVICESELECT_OFFSET UNITYSDK_OFFSET(0x1B391EC0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_XRTRACKINGORIGIN_OFFSET UNITYSDK_OFFSET(0x1B3906A0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SWAPACTION_OFFSET UNITYSDK_OFFSET(0x1B3906D0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_UNASSIGNACTIONS_OFFSET UNITYSDK_OFFSET(0x1B391CE0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_UNHOOKACTIONS_OFFSET UNITYSDK_OFFSET(0x1B392050)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_UPDATEREFERENCEFORNEWASSET_OFFSET UNITYSDK_OFFSET(0x1B3952B0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B395540)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B395470)

namespace UnityEngine::InputSystem::UI
{
	inline static constexpr unsigned int InputSystemUIInputModule_TypeDefinitionIndex = 29111;

	class InputSystemUIInputModule : public ::UnityEngine::EventSystems::BaseInputModule
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::UI::InputSystemUIInputModule_InputActionReferenceState>** StaticGet_s_InputActionReferenceCounts()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::UI::InputSystemUIInputModule_InputActionReferenceState>**)Il2CppClass::FromTypeDefinitionIndex(InputSystemUIInputModule_TypeDefinitionIndex)->GetStaticField(0x221E0);
		}
		// static const ::System::Single kClickSpeed; // 0x0
		// static const ::System::Single kPixelPerLine; // 0x0
		::System::Single m_MoveRepeatDelay; // 0x50
		::System::Single m_MoveRepeatRate; // 0x54
		::System::Single m_TrackedDeviceDragThresholdMultiplier; // 0x58
		::UnityEngine::Transform* m_XRTrackingOrigin; // 0x60
		::UnityEngine::InputSystem::InputActionAsset* m_ActionsAsset; // 0x68
		::UnityEngine::InputSystem::InputActionReference* m_PointAction; // 0x70
		::UnityEngine::InputSystem::InputActionReference* m_MoveAction; // 0x78
		::UnityEngine::InputSystem::InputActionReference* m_SubmitAction; // 0x80
		::UnityEngine::InputSystem::InputActionReference* m_CancelAction; // 0x88
		::UnityEngine::InputSystem::InputActionReference* m_LeftClickAction; // 0x90
		::UnityEngine::InputSystem::InputActionReference* m_MiddleClickAction; // 0x98
		::UnityEngine::InputSystem::InputActionReference* m_RightClickAction; // 0xA0
		::UnityEngine::InputSystem::InputActionReference* m_ScrollWheelAction; // 0xA8
		::UnityEngine::InputSystem::InputActionReference* m_TrackedDevicePositionAction; // 0xB0
		::UnityEngine::InputSystem::InputActionReference* m_TrackedDeviceOrientationAction; // 0xB8
		::System::Boolean m_DeselectOnBackgroundClick; // 0xC0
		::UnityEngine::InputSystem::UI::UIPointerBehavior m_PointerBehavior; // 0xC4
		::System::Boolean m_ActionsHooked; // 0xC8
		::System::Boolean m_NeedToPurgeStalePointers; // 0xC9
		::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* m_OnPointDelegate; // 0xD0
		::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* m_OnMoveDelegate; // 0xD8
		::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* m_OnLeftClickDelegate; // 0xE0
		::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* m_OnRightClickDelegate; // 0xE8
		::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* m_OnMiddleClickDelegate; // 0xF0
		::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* m_OnScrollWheelDelegate; // 0xF8
		::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* m_OnTrackedDevicePositionDelegate; // 0x100
		::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* m_OnTrackedDeviceOrientationDelegate; // 0x108
		::System::Action_1<::System::Object*>* m_OnControlsChangedDelegate; // 0x110
		::System::Int32 m_CurrentPointerId; // 0x118
		::System::Int32 m_CurrentPointerIndex; // 0x11C
		::UnityEngine::InputSystem::UI::UIPointerType m_CurrentPointerType; // 0x120
		::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Int32> m_PointerIds; // 0x128
		::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputControl*> m_PointerTouchControls; // 0x138
		::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel> m_PointerStates; // 0x150
		::UnityEngine::InputSystem::UI::NavigationModel m_NavigationState; // 0x368

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE__CCTOR_OFFSET))();
		}

		::System::Boolean get_deselectOnBackgroundClick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_DESELECTONBACKGROUNDCLICK_OFFSET))(this);
		}

		::System::Void set_deselectOnBackgroundClick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_DESELECTONBACKGROUNDCLICK_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::UI::UIPointerBehavior get_pointerBehavior()
		{
			return ((::UnityEngine::InputSystem::UI::UIPointerBehavior(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_POINTERBEHAVIOR_OFFSET))(this);
		}

		::System::Void set_pointerBehavior(::UnityEngine::InputSystem::UI::UIPointerBehavior value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::UI::UIPointerBehavior))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_POINTERBEHAVIOR_OFFSET))(this, value);
		}

		::System::Void ActivateModule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ACTIVATEMODULE_OFFSET))(this);
		}

		::System::Boolean IsPointerOverGameObject(::System::Int32 pointerOrTouchId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ISPOINTEROVERGAMEOBJECT_OFFSET))(this, pointerOrTouchId);
		}

		::UnityEngine::EventSystems::RaycastResult GetLastRaycastResult(::System::Int32 pointerOrTouchId)
		{
			return ((::UnityEngine::EventSystems::RaycastResult(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GETLASTRAYCASTRESULT_OFFSET))(this, pointerOrTouchId);
		}

		::UnityEngine::EventSystems::RaycastResult PerformRaycast(::UnityEngine::InputSystem::UI::ExtendedPointerEventData* eventData)
		{
			return ((::UnityEngine::EventSystems::RaycastResult(*)(::PVOID, ::UnityEngine::InputSystem::UI::ExtendedPointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_PERFORMRAYCAST_OFFSET))(this, eventData);
		}

		::System::Void ProcessPointer(::UnityEngine::InputSystem::UI::PointerModel& state)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::UI::PointerModel&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_PROCESSPOINTER_OFFSET))(this, state);
		}

		::System::Boolean PointerShouldIgnoreTransform(::UnityEngine::Transform* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_POINTERSHOULDIGNORETRANSFORM_OFFSET))(this, t);
		}

		::System::Void ProcessPointerMovement(::UnityEngine::InputSystem::UI::PointerModel& pointer, ::UnityEngine::InputSystem::UI::ExtendedPointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::UI::PointerModel&, ::UnityEngine::InputSystem::UI::ExtendedPointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_PROCESSPOINTERMOVEMENT_OFFSET))(this, pointer, eventData);
		}

		::System::Void ProcessPointerMovement_1(::UnityEngine::InputSystem::UI::ExtendedPointerEventData* eventData, ::UnityEngine::GameObject* currentPointerTarget)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::UI::ExtendedPointerEventData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_PROCESSPOINTERMOVEMENT_1_OFFSET))(this, eventData, currentPointerTarget);
		}

		::System::Void ProcessPointerButton(::UnityEngine::InputSystem::UI::PointerModel_ButtonState& button, ::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::UI::PointerModel_ButtonState&, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_PROCESSPOINTERBUTTON_OFFSET))(this, button, eventData);
		}

		::System::Void ProcessPointerButtonDrag(::UnityEngine::InputSystem::UI::PointerModel_ButtonState& button, ::UnityEngine::InputSystem::UI::ExtendedPointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::UI::PointerModel_ButtonState&, ::UnityEngine::InputSystem::UI::ExtendedPointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_PROCESSPOINTERBUTTONDRAG_OFFSET))(this, button, eventData);
		}

		static ::System::Void ProcessPointerScroll(::UnityEngine::InputSystem::UI::PointerModel& pointer, ::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::UI::PointerModel&, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_PROCESSPOINTERSCROLL_OFFSET))(pointer, eventData);
		}

		::System::Void ProcessNavigation(::UnityEngine::InputSystem::UI::NavigationModel& navigationState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::UI::NavigationModel&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_PROCESSNAVIGATION_OFFSET))(this, navigationState);
		}

		::System::Single get_moveRepeatDelay()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_MOVEREPEATDELAY_OFFSET))(this);
		}

		::System::Void set_moveRepeatDelay(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_MOVEREPEATDELAY_OFFSET))(this, value);
		}

		::System::Single get_moveRepeatRate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_MOVEREPEATRATE_OFFSET))(this);
		}

		::System::Void set_moveRepeatRate(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_MOVEREPEATRATE_OFFSET))(this, value);
		}

		::System::Boolean get_explictlyIgnoreFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_EXPLICTLYIGNOREFOCUS_OFFSET))(this);
		}

		::System::Boolean get_shouldIgnoreFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_SHOULDIGNOREFOCUS_OFFSET))(this);
		}

		::System::Single get_repeatRate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_REPEATRATE_OFFSET))(this);
		}

		::System::Void set_repeatRate(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_REPEATRATE_OFFSET))(this, value);
		}

		::System::Single get_repeatDelay()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_REPEATDELAY_OFFSET))(this);
		}

		::System::Void set_repeatDelay(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_REPEATDELAY_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_xrTrackingOrigin()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_XRTRACKINGORIGIN_OFFSET))(this);
		}

		::System::Void set_xrTrackingOrigin(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_XRTRACKINGORIGIN_OFFSET))(this, value);
		}

		::System::Single get_trackedDeviceDragThresholdMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_TRACKEDDEVICEDRAGTHRESHOLDMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_trackedDeviceDragThresholdMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_TRACKEDDEVICEDRAGTHRESHOLDMULTIPLIER_OFFSET))(this, value);
		}

		::System::Void SwapAction(::UnityEngine::InputSystem::InputActionReference*& property, ::UnityEngine::InputSystem::InputActionReference* newValue, ::System::Boolean actionsHooked, ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* actionCallback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionReference*&, ::UnityEngine::InputSystem::InputActionReference*, ::System::Boolean, ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SWAPACTION_OFFSET))(this, property, newValue, actionsHooked, actionCallback);
		}

		::UnityEngine::InputSystem::InputActionReference* get_point()
		{
			return ((::UnityEngine::InputSystem::InputActionReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_POINT_OFFSET))(this);
		}

		::System::Void set_point(::UnityEngine::InputSystem::InputActionReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionReference*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_POINT_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::InputActionReference* get_scrollWheel()
		{
			return ((::UnityEngine::InputSystem::InputActionReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_SCROLLWHEEL_OFFSET))(this);
		}

		::System::Void set_scrollWheel(::UnityEngine::InputSystem::InputActionReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionReference*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_SCROLLWHEEL_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::InputActionReference* get_leftClick()
		{
			return ((::UnityEngine::InputSystem::InputActionReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_LEFTCLICK_OFFSET))(this);
		}

		::System::Void set_leftClick(::UnityEngine::InputSystem::InputActionReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionReference*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_LEFTCLICK_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::InputActionReference* get_middleClick()
		{
			return ((::UnityEngine::InputSystem::InputActionReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_MIDDLECLICK_OFFSET))(this);
		}

		::System::Void set_middleClick(::UnityEngine::InputSystem::InputActionReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionReference*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_MIDDLECLICK_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::InputActionReference* get_rightClick()
		{
			return ((::UnityEngine::InputSystem::InputActionReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_RIGHTCLICK_OFFSET))(this);
		}

		::System::Void set_rightClick(::UnityEngine::InputSystem::InputActionReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionReference*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_RIGHTCLICK_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::InputActionReference* get_move()
		{
			return ((::UnityEngine::InputSystem::InputActionReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_MOVE_OFFSET))(this);
		}

		::System::Void set_move(::UnityEngine::InputSystem::InputActionReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionReference*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_MOVE_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::InputActionReference* get_submit()
		{
			return ((::UnityEngine::InputSystem::InputActionReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_SUBMIT_OFFSET))(this);
		}

		::System::Void set_submit(::UnityEngine::InputSystem::InputActionReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionReference*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_SUBMIT_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::InputActionReference* get_cancel()
		{
			return ((::UnityEngine::InputSystem::InputActionReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_CANCEL_OFFSET))(this);
		}

		::System::Void set_cancel(::UnityEngine::InputSystem::InputActionReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionReference*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_CANCEL_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::InputActionReference* get_trackedDeviceOrientation()
		{
			return ((::UnityEngine::InputSystem::InputActionReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_TRACKEDDEVICEORIENTATION_OFFSET))(this);
		}

		::System::Void set_trackedDeviceOrientation(::UnityEngine::InputSystem::InputActionReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionReference*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_TRACKEDDEVICEORIENTATION_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::InputActionReference* get_trackedDevicePosition()
		{
			return ((::UnityEngine::InputSystem::InputActionReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_TRACKEDDEVICEPOSITION_OFFSET))(this);
		}

		::System::Void set_trackedDevicePosition(::UnityEngine::InputSystem::InputActionReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionReference*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_TRACKEDDEVICEPOSITION_OFFSET))(this, value);
		}

		::System::Void AssignDefaultActions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ASSIGNDEFAULTACTIONS_OFFSET))(this);
		}

		::System::Void UnassignActions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_UNASSIGNACTIONS_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputActionReference* get_trackedDeviceSelect()
		{
			return ((::UnityEngine::InputSystem::InputActionReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_TRACKEDDEVICESELECT_OFFSET))(this);
		}

		::System::Void set_trackedDeviceSelect(::UnityEngine::InputSystem::InputActionReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionReference*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_TRACKEDDEVICESELECT_OFFSET))(this, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONDISABLE_OFFSET))(this);
		}

		::System::Void ResetPointers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_RESETPOINTERS_OFFSET))(this);
		}

		::System::Boolean HasNoActions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_HASNOACTIONS_OFFSET))(this);
		}

		::System::Void EnableAllActions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ENABLEALLACTIONS_OFFSET))(this);
		}

		::System::Void DisableAllActions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_DISABLEALLACTIONS_OFFSET))(this);
		}

		::System::Void EnableInputAction(::UnityEngine::InputSystem::InputActionReference* inputActionReference)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionReference*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ENABLEINPUTACTION_OFFSET))(this, inputActionReference);
		}

		static ::System::Void DisableInputAction(::UnityEngine::InputSystem::InputActionReference* inputActionReference)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputActionReference*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_DISABLEINPUTACTION_OFFSET))(inputActionReference);
		}

		::System::Int32 GetPointerStateIndexFor(::System::Int32 pointerOrTouchId)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GETPOINTERSTATEINDEXFOR_OFFSET))(this, pointerOrTouchId);
		}

		::UnityEngine::InputSystem::UI::PointerModel& GetPointerStateForIndex(::System::Int32 index)
		{
			return ((::UnityEngine::InputSystem::UI::PointerModel&(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GETPOINTERSTATEFORINDEX_OFFSET))(this, index);
		}

		::System::Int32 GetPointerStateIndexFor_1(::UnityEngine::InputSystem::InputAction_CallbackContext& context)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::InputSystem::InputAction_CallbackContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GETPOINTERSTATEINDEXFOR_1_OFFSET))(this, context);
		}

		::System::Int32 GetPointerStateIndexFor_2(::UnityEngine::InputSystem::InputControl* control, ::System::Boolean createIfNotExists)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GETPOINTERSTATEINDEXFOR_2_OFFSET))(this, control, createIfNotExists);
		}

		::System::Int32 AllocatePointer(::System::Int32 pointerId, ::System::Int32 touchId, ::UnityEngine::InputSystem::UI::UIPointerType pointerType, ::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::InputControl* touchControl)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::InputSystem::UI::UIPointerType, ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ALLOCATEPOINTER_OFFSET))(this, pointerId, touchId, pointerType, control, device, touchControl);
		}

		::System::Void SendPointerExitEventsAndRemovePointer(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SENDPOINTEREXITEVENTSANDREMOVEPOINTER_OFFSET))(this, index);
		}

		::System::Void RemovePointerAtIndex(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_REMOVEPOINTERATINDEX_OFFSET))(this, index);
		}

		::System::Void PurgeStalePointers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_PURGESTALEPOINTERS_OFFSET))(this);
		}

		static ::System::Boolean HaveControlForDevice(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::InputActionReference* actionReference)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputActionReference*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_HAVECONTROLFORDEVICE_OFFSET))(device, actionReference);
		}

		::System::Void OnPointCallback(::UnityEngine::InputSystem::InputAction_CallbackContext context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputAction_CallbackContext))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONPOINTCALLBACK_OFFSET))(this, context);
		}

		::System::Boolean IgnoreNextClick(::UnityEngine::InputSystem::InputAction_CallbackContext& context)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputAction_CallbackContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_IGNORENEXTCLICK_OFFSET))(this, context);
		}

		::System::Void OnLeftClickCallback(::UnityEngine::InputSystem::InputAction_CallbackContext context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputAction_CallbackContext))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONLEFTCLICKCALLBACK_OFFSET))(this, context);
		}

		::System::Void OnRightClickCallback(::UnityEngine::InputSystem::InputAction_CallbackContext context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputAction_CallbackContext))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONRIGHTCLICKCALLBACK_OFFSET))(this, context);
		}

		::System::Void OnMiddleClickCallback(::UnityEngine::InputSystem::InputAction_CallbackContext context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputAction_CallbackContext))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONMIDDLECLICKCALLBACK_OFFSET))(this, context);
		}

		::System::Boolean CheckForRemovedDevice(::UnityEngine::InputSystem::InputAction_CallbackContext& context)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputAction_CallbackContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_CHECKFORREMOVEDDEVICE_OFFSET))(this, context);
		}

		::System::Void OnScrollCallback(::UnityEngine::InputSystem::InputAction_CallbackContext context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputAction_CallbackContext))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONSCROLLCALLBACK_OFFSET))(this, context);
		}

		::System::Void OnMoveCallback(::UnityEngine::InputSystem::InputAction_CallbackContext context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputAction_CallbackContext))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONMOVECALLBACK_OFFSET))(this, context);
		}

		::System::Void OnTrackedDeviceOrientationCallback(::UnityEngine::InputSystem::InputAction_CallbackContext context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputAction_CallbackContext))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONTRACKEDDEVICEORIENTATIONCALLBACK_OFFSET))(this, context);
		}

		::System::Void OnTrackedDevicePositionCallback(::UnityEngine::InputSystem::InputAction_CallbackContext context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputAction_CallbackContext))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONTRACKEDDEVICEPOSITIONCALLBACK_OFFSET))(this, context);
		}

		::System::Void OnControlsChanged(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONCONTROLSCHANGED_OFFSET))(this, obj);
		}

		::System::Void Process()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_PROCESS_OFFSET))(this);
		}

		::System::Void HookActions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_HOOKACTIONS_OFFSET))(this);
		}

		::System::Void UnhookActions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_UNHOOKACTIONS_OFFSET))(this);
		}

		::System::Void SetActionCallbacks(::System::Boolean install)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SETACTIONCALLBACKS_OFFSET))(this, install);
		}

		static ::System::Void SetActionCallback(::UnityEngine::InputSystem::InputActionReference* actionReference, ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* callback, ::System::Boolean install)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputActionReference*, ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SETACTIONCALLBACK_OFFSET))(actionReference, callback, install);
		}

		::UnityEngine::InputSystem::InputActionReference* UpdateReferenceForNewAsset(::UnityEngine::InputSystem::InputActionReference* actionReference)
		{
			return ((::UnityEngine::InputSystem::InputActionReference*(*)(::PVOID, ::UnityEngine::InputSystem::InputActionReference*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_UPDATEREFERENCEFORNEWASSET_OFFSET))(this, actionReference);
		}

		::UnityEngine::InputSystem::InputActionAsset* get_actionsAsset()
		{
			return ((::UnityEngine::InputSystem::InputActionAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_ACTIONSASSET_OFFSET))(this);
		}

		::System::Void set_actionsAsset(::UnityEngine::InputSystem::InputActionAsset* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_ACTIONSASSET_OFFSET))(this, value);
		}
	};
}
