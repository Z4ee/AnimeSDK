#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/UnityEngine/EventSystems/EventTrigger.h"
#include "unitysdk/UnityEngine/UI/Extension/UIImgEventTrigger_CameraControlType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class InteractionCommonData; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI::Extension { class InteractionRangeProcessorBase; }
namespace UnityEngine::UI::Extension { class InteractionRangeProcessorManager; }
namespace UnityEngine::UI::Extension { class InteractionRangeProcessor_Fov_ByScrollY; }
namespace UnityEngine::UI::Extension { class InteractionRangeProcessor_LocalPosZ_ByScrollY; }
namespace UnityEngine::UI::Extension { class InteractionRangeProcessor_LocalPositionY_DragY; }
namespace UnityEngine::UI::Extension { class InteractionRangeProcessor_RotateY_ByDeltaX; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger_BeginDragCallback; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger_CameraControllPointer; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger_DragCallback; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger_DragCallbackOld; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger_EndDragCallback; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger_OnTouchTypeChangeCallback; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger_PointerDownCallback; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger_PointerEnterCallback; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger_PointerExitCallback; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger_PointerUpCallback; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger_ScrollCallback; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger_TwoPointBeginDragCallback; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger_TwoPointDragCallback; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger_TwoPointDragRawCallback; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger_TwoPointEndDragCallback; }
namespace UnityEngine::UI::Extension { template <typename T> class InteractionRangeParam_1; }

#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x18D52990)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_FORCESIMULATETWOPOINTDRAG_OFFSET UNITYSDK_OFFSET(0x18D55A10)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_GETCURRENTTOUCHTYPE_OFFSET UNITYSDK_OFFSET(0x18D52EB0)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_GET_CURCONTROLSINGLEPOINT_OFFSET UNITYSDK_OFFSET(0x18D52980)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_GET_CURRENTTOUCHTYPE_OFFSET UNITYSDK_OFFSET(0x18D543D0)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_INITINTERACTIONPROCESSORS_OFFSET UNITYSDK_OFFSET(0x18D52B40)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_ISDRAGRECEIVER_OFFSET UNITYSDK_OFFSET(0x18D546A0)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_ISSCROLLRECEIVER_OFFSET UNITYSDK_OFFSET(0x18D545A0)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_ISTWOPOINTDRAGRECEIVER_OFFSET UNITYSDK_OFFSET(0x18D54620)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_KILL_OFFSET UNITYSDK_OFFSET(0x18D559B0)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x18D52BE0)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x18D53730)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18D536D0)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x18D53040)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_ONDROP_OFFSET UNITYSDK_OFFSET(0x18D539B0)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x18D53870)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x18D53A40)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x18D540B0)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x18D54110)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x18D54170)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x18D543E0)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_REFRESHCONTROLTYPE_OFFSET UNITYSDK_OFFSET(0x18D53DA0)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_REFRESHPROCESSERBYPLATFORM_OFFSET UNITYSDK_OFFSET(0x18D54720)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_REG_CHANGEFOV_SCROLLY_OFFSET UNITYSDK_OFFSET(0x18D54BD0)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_REG_FOV_TWOPOINTDRAG_OFFSET UNITYSDK_OFFSET(0x18D55250)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_REG_MOVECAMY_DRAGY_OFFSET UNITYSDK_OFFSET(0x18D55770)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_REG_MOVEZPOS_SCROLLY_OFFSET UNITYSDK_OFFSET(0x18D54820)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_REG_MOVEZPOS_TWOPOINTDRAG_OFFSET UNITYSDK_OFFSET(0x18D54F90)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_REG_ROTATEY_DRAGX_OFFSET UNITYSDK_OFFSET(0x18D55550)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_WAITALLCLAMPFINISH_OFFSET UNITYSDK_OFFSET(0x18D54780)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18D55A80)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER___BASE_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x18D55B90)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER___BASE_ONDRAG_OFFSET UNITYSDK_OFFSET(0x18D55C30)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER___BASE_ONDROP_OFFSET UNITYSDK_OFFSET(0x18D55CD0)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER___BASE_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x18D55D70)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER___BASE_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x18D55E10)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER___BASE_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x18D55EB0)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER___BASE_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x18D55F50)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER___BASE_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x18D55FF0)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER___BASE_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x18D56090)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIImgEventTrigger_TypeDefinitionIndex = 81044;

	class UIImgEventTrigger : public ::UnityEngine::EventSystems::EventTrigger
	{
	public:
		// static const ::System::Single ZOOMING_DRAG_MOVEMENT_THRESHOLD; // 0x0
		// static const ::System::Single ZOOMING_SCALE_FACTOR; // 0x0
		::UnityEngine::RectTransform* _rectTransform; // 0x28
		::UnityEngine::Vector2 _worldCurPosition; // 0x30
		::UnityEngine::Vector2 _worldPrvPosition; // 0x38
		::UnityEngine::UI::Extension::UIImgEventTrigger_BeginDragCallback* beginDragCallback; // 0x40
		::UnityEngine::UI::Extension::UIImgEventTrigger_DragCallbackOld* dragCallbackOld; // 0x48
		::UnityEngine::UI::Extension::UIImgEventTrigger_DragCallback* dragCallback; // 0x50
		::UnityEngine::UI::Extension::UIImgEventTrigger_EndDragCallback* endDragCallback; // 0x58
		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* onDropCallback; // 0x60
		::UnityEngine::UI::Extension::UIImgEventTrigger_TwoPointBeginDragCallback* beginDragTwoPointCallback; // 0x68
		::UnityEngine::UI::Extension::UIImgEventTrigger_TwoPointDragCallback* dragTwoPointCallback; // 0x70
		::UnityEngine::UI::Extension::UIImgEventTrigger_TwoPointDragRawCallback* dragTwoPointRawCallback; // 0x78
		::UnityEngine::UI::Extension::UIImgEventTrigger_TwoPointEndDragCallback* endDragTwoPointCallback; // 0x80
		::UnityEngine::UI::Extension::UIImgEventTrigger_ScrollCallback* onScrollCallback; // 0x88
		::UnityEngine::UI::Extension::UIImgEventTrigger_OnTouchTypeChangeCallback* onTouchTypeChangeCallback; // 0x90
		::UnityEngine::UI::Extension::UIImgEventTrigger_PointerDownCallback* pointDownCallback; // 0x98
		::UnityEngine::UI::Extension::UIImgEventTrigger_PointerUpCallback* pointUpCallback; // 0xA0
		::UnityEngine::UI::Extension::UIImgEventTrigger_PointerEnterCallback* pointEnterCallback; // 0xA8
		::UnityEngine::UI::Extension::UIImgEventTrigger_PointerExitCallback* pointExitCallback; // 0xB0
		::System::Single VIEWPOINT_DRAG_MOVEMENT_THRESHOLD; // 0xB8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::Extension::UIImgEventTrigger_CameraControllPointer*>* _cameraControlPointers; // 0xC0
		::UnityEngine::UI::Extension::UIImgEventTrigger_CameraControlType _preControlType; // 0xC8
		::UnityEngine::UI::Extension::UIImgEventTrigger_CameraControlType _currentControlType; // 0xCC
		::UnityEngine::Vector2 _dragOffset; // 0xD0
		::UnityEngine::Vector2 checkIsDragDelta; // 0xD8
		::UnityEngine::UI::Extension::InteractionRangeProcessorManager* m_processManager; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_CurControlSinglePoint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_GET_CURCONTROLSINGLEPOINT_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_AWAKE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_ONDRAG_OFFSET))(this, eventData);
		}

		::System::Void InitInteractionProcessors()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_INITINTERACTIONPROCESSORS_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_ONBEGINDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_ONENDDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnDrop(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_ONDROP_OFFSET))(this, eventData);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_ONPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_ONPOINTERENTER_OFFSET))(this, eventData);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_ONPOINTEREXIT_OFFSET))(this, eventData);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_ONPOINTERUP_OFFSET))(this, eventData);
		}

		::UnityEngine::UI::Extension::UIImgEventTrigger_CameraControlType GetCurrentTouchType()
		{
			return ((::UnityEngine::UI::Extension::UIImgEventTrigger_CameraControlType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_GETCURRENTTOUCHTYPE_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UIImgEventTrigger_CameraControlType get_CurrentTouchType()
		{
			return ((::UnityEngine::UI::Extension::UIImgEventTrigger_CameraControlType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_GET_CURRENTTOUCHTYPE_OFFSET))(this);
		}

		::System::Void OnScroll(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_ONSCROLL_OFFSET))(this, eventData);
		}

		::System::Boolean IsScrollReceiver(::UnityEngine::UI::Extension::InteractionRangeProcessorBase* processor)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Extension::InteractionRangeProcessorBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_ISSCROLLRECEIVER_OFFSET))(this, processor);
		}

		::System::Boolean IsTwoPointDragReceiver(::UnityEngine::UI::Extension::InteractionRangeProcessorBase* processor)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Extension::InteractionRangeProcessorBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_ISTWOPOINTDRAGRECEIVER_OFFSET))(this, processor);
		}

		::System::Boolean IsDragReceiver(::UnityEngine::UI::Extension::InteractionRangeProcessorBase* processor)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Extension::InteractionRangeProcessorBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_ISDRAGRECEIVER_OFFSET))(this, processor);
		}

		::System::Void RefreshControlType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_REFRESHCONTROLTYPE_OFFSET))(this);
		}

		::System::Void RefreshProcesserByPlatform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_REFRESHPROCESSERBYPLATFORM_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask WaitAllClampFinish(::System::Threading::CancellationToken token)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_WAITALLCLAMPFINISH_OFFSET))(this, token);
		}

		::System::Int32 Reg_MoveZPos_ScrollY(::UnityEngine::Transform* moveTarget, ::UnityEngine::UI::Extension::InteractionRangeParam_1<::System::Single>* param, ::System::Single center, ::UnityEngine::UI::Extension::InteractionRangeProcessor_LocalPosZ_ByScrollY*& processor, ::System::Single reverseRatio, ::MoleMole::Config::InteractionCommonData* common)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::UI::Extension::InteractionRangeParam_1<::System::Single>*, ::System::Single, ::UnityEngine::UI::Extension::InteractionRangeProcessor_LocalPosZ_ByScrollY*&, ::System::Single, ::MoleMole::Config::InteractionCommonData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_REG_MOVEZPOS_SCROLLY_OFFSET))(this, moveTarget, param, center, processor, reverseRatio, common);
		}

		::System::Int32 Reg_ChangeFov_ScrollY(::UnityEngine::Camera* cam, ::UnityEngine::UI::Extension::InteractionRangeParam_1<::System::Single>* param, ::System::Single center, ::UnityEngine::UI::Extension::InteractionRangeProcessor_Fov_ByScrollY*& processor, ::System::Single reverseRatio, ::MoleMole::Config::InteractionCommonData* common)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::UI::Extension::InteractionRangeParam_1<::System::Single>*, ::System::Single, ::UnityEngine::UI::Extension::InteractionRangeProcessor_Fov_ByScrollY*&, ::System::Single, ::MoleMole::Config::InteractionCommonData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_REG_CHANGEFOV_SCROLLY_OFFSET))(this, cam, param, center, processor, reverseRatio, common);
		}

		::System::Int32 Reg_MoveZPos_TwoPointDrag(::UnityEngine::Transform* moveTarget, ::UnityEngine::UI::Extension::InteractionRangeParam_1<::System::Single>* param, ::System::Single center, ::System::Single reverseRatio, ::MoleMole::Config::InteractionCommonData* common)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::UI::Extension::InteractionRangeParam_1<::System::Single>*, ::System::Single, ::System::Single, ::MoleMole::Config::InteractionCommonData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_REG_MOVEZPOS_TWOPOINTDRAG_OFFSET))(this, moveTarget, param, center, reverseRatio, common);
		}

		::System::Int32 Reg_Fov_TwoPointDrag(::UnityEngine::Camera* moveTarget, ::UnityEngine::UI::Extension::InteractionRangeParam_1<::System::Single>* param, ::System::Single center, ::System::Single reverseRatio, ::MoleMole::Config::InteractionCommonData* common)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::UI::Extension::InteractionRangeParam_1<::System::Single>*, ::System::Single, ::System::Single, ::MoleMole::Config::InteractionCommonData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_REG_FOV_TWOPOINTDRAG_OFFSET))(this, moveTarget, param, center, reverseRatio, common);
		}

		::System::Int32 Reg_RotateY_DragX(::UnityEngine::Transform* trans, ::UnityEngine::UI::Extension::InteractionRangeParam_1<::System::Single>* param, ::UnityEngine::UI::Extension::InteractionRangeProcessor_RotateY_ByDeltaX*& processor, ::System::Single center, ::System::Single reverseRatio)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::UI::Extension::InteractionRangeParam_1<::System::Single>*, ::UnityEngine::UI::Extension::InteractionRangeProcessor_RotateY_ByDeltaX*&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_REG_ROTATEY_DRAGX_OFFSET))(this, trans, param, processor, center, reverseRatio);
		}

		::System::Int32 Reg_MoveCamY_DragY(::UnityEngine::Transform* trans, ::UnityEngine::UI::Extension::InteractionRangeParam_1<::System::Single>* param, ::System::Single reverseRatio, ::System::Single center, ::UnityEngine::UI::Extension::InteractionRangeProcessor_LocalPositionY_DragY*& processor)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::UI::Extension::InteractionRangeParam_1<::System::Single>*, ::System::Single, ::System::Single, ::UnityEngine::UI::Extension::InteractionRangeProcessor_LocalPositionY_DragY*&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_REG_MOVECAMY_DRAGY_OFFSET))(this, trans, param, reverseRatio, center, processor);
		}

		::System::Void Kill(::System::Int32 handleID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_KILL_OFFSET))(this, handleID);
		}

		::System::Void ForceSimulateTwoPointDrag(::System::Single delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_FORCESIMULATETWOPOINTDRAG_OFFSET))(this, delta);
		}

		::System::Void __base_OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER___BASE_ONBEGINDRAG_OFFSET))(this, P0);
		}

		::System::Void __base_OnDrag(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER___BASE_ONDRAG_OFFSET))(this, P0);
		}

		::System::Void __base_OnDrop(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER___BASE_ONDROP_OFFSET))(this, P0);
		}

		::System::Void __base_OnEndDrag(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER___BASE_ONENDDRAG_OFFSET))(this, P0);
		}

		::System::Void __base_OnPointerDown(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER___BASE_ONPOINTERDOWN_OFFSET))(this, P0);
		}

		::System::Void __base_OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER___BASE_ONPOINTERENTER_OFFSET))(this, P0);
		}

		::System::Void __base_OnPointerExit(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER___BASE_ONPOINTEREXIT_OFFSET))(this, P0);
		}

		::System::Void __base_OnPointerUp(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER___BASE_ONPOINTERUP_OFFSET))(this, P0);
		}

		::System::Void __base_OnScroll(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER___BASE_ONSCROLL_OFFSET))(this, P0);
		}
	};
}
