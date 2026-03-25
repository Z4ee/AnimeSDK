#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/BaseRaycaster.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/UI/GraphicRaycaster_BlockingObjects.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }
namespace UnityEngine::UI { class Graphic; }
namespace UnityEngine::UI::Collections { template <typename T> class IndexedSet_1; }

#define UNITYENGINE_UI_GRAPHICRAYCASTER_AWAKE_OFFSET UNITYSDK_OFFSET(0x18B17E10)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_GET_BLOCKINGOBJECTS_OFFSET UNITYSDK_OFFSET(0x18B14F80)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_GET_CANVAS_OFFSET UNITYSDK_OFFSET(0x18B14D80)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_GET_EVENTCAMERA_OFFSET UNITYSDK_OFFSET(0x18B16C70)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_GET_IGNOREREVERSEDGRAPHICS_OFFSET UNITYSDK_OFFSET(0x18B14F60)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_GET_RENDERORDERPRIORITY_OFFSET UNITYSDK_OFFSET(0x18B14E10)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_GET_SORTORDERPRIORITY_OFFSET UNITYSDK_OFFSET(0x18B14C40)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_GET_USEOPTIMIZEDRAYCAST_OFFSET UNITYSDK_OFFSET(0x18B14FA0)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18B17E90)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x18B18400)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18B17E50)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_RAYCASTOPTIMIZED_OFFSET UNITYSDK_OFFSET(0x18B16FA0)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_RAYCAST_1_OFFSET UNITYSDK_OFFSET(0x18B17570)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_RAYCAST_OFFSET UNITYSDK_OFFSET(0x18B15640)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_SET_BLOCKINGOBJECTS_OFFSET UNITYSDK_OFFSET(0x18B14F90)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_SET_IGNOREREVERSEDGRAPHICS_OFFSET UNITYSDK_OFFSET(0x18B14F70)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_SET_USEOPTIMIZEDRAYCAST_OFFSET UNITYSDK_OFFSET(0x18B14FB0)
#define UNITYENGINE_UI_GRAPHICRAYCASTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B18410)
#define UNITYENGINE_UI_GRAPHICRAYCASTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18B155D0)
#define UNITYENGINE_UI_GRAPHICRAYCASTER__ONCANVASGRAPHICSCHANGE_OFFSET UNITYSDK_OFFSET(0x18B182A0)
#define UNITYENGINE_UI_GRAPHICRAYCASTER__ONGRAPHICRAYCASTTARGETCHANGE_OFFSET UNITYSDK_OFFSET(0x18B18390)
#define UNITYENGINE_UI_GRAPHICRAYCASTER__SETOPTIMIZEDRAYCASTACTIVE_OFFSET UNITYSDK_OFFSET(0x18B14FE0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int GraphicRaycaster_TypeDefinitionIndex = 5586;

	class GraphicRaycaster : public ::UnityEngine::EventSystems::BaseRaycaster
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>** StaticGet_s_SortedGraphics()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>**)Il2CppClass::FromTypeDefinitionIndex(GraphicRaycaster_TypeDefinitionIndex)->GetStaticField(0x4FB0);
		}
		// static const ::System::Int32 kNoEventMaskSet = 0xFFFFFFFF; // 0x0
		::System::Boolean m_IgnoreReversedGraphics; // 0x20
		::UnityEngine::UI::GraphicRaycaster_BlockingObjects m_BlockingObjects; // 0x24
		::UnityEngine::LayerMask m_BlockingMask; // 0x28
		::System::Boolean m_useOptimizedRaycast; // 0x2C
		::UnityEngine::Canvas* m_Canvas; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>* m_RaycastResults; // 0x38
		::System::Boolean _OptimizedRaycastActive; // 0x40
		::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::Graphic*>* _RaycastGraphics; // 0x48
		::UnityEngine::Events::UnityAction_1<::UnityEngine::UI::Graphic*>* _GraphicRaycastTargetChangeDelg; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_sortOrderPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_GET_SORTORDERPRIORITY_OFFSET))(this);
		}

		::System::Int32 get_renderOrderPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_GET_RENDERORDERPRIORITY_OFFSET))(this);
		}

		::System::Boolean get_ignoreReversedGraphics()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_GET_IGNOREREVERSEDGRAPHICS_OFFSET))(this);
		}

		::System::Void set_ignoreReversedGraphics(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_SET_IGNOREREVERSEDGRAPHICS_OFFSET))(this, value);
		}

		::UnityEngine::UI::GraphicRaycaster_BlockingObjects get_blockingObjects()
		{
			return ((::UnityEngine::UI::GraphicRaycaster_BlockingObjects(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_GET_BLOCKINGOBJECTS_OFFSET))(this);
		}

		::System::Void set_blockingObjects(::UnityEngine::UI::GraphicRaycaster_BlockingObjects value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::GraphicRaycaster_BlockingObjects))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_SET_BLOCKINGOBJECTS_OFFSET))(this, value);
		}

		::System::Boolean get_useOptimizedRaycast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_GET_USEOPTIMIZEDRAYCAST_OFFSET))(this);
		}

		::System::Void set_useOptimizedRaycast(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_SET_USEOPTIMIZEDRAYCAST_OFFSET))(this, value);
		}

		::UnityEngine::Canvas* get_canvas()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_GET_CANVAS_OFFSET))(this);
		}

		::System::Void Raycast(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_RAYCAST_OFFSET))(this, eventData, resultAppendList);
		}

		::UnityEngine::Camera* get_eventCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_GET_EVENTCAMERA_OFFSET))(this);
		}

		static ::System::Void Raycast_1(::UnityEngine::Canvas* canvas, ::UnityEngine::Camera* eventCamera, ::UnityEngine::Vector2 pointerPosition, ::System::Collections::Generic::IList_1<::UnityEngine::UI::Graphic*>* foundGraphics, ::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>* results)
		{
			return ((::System::Void(*)(::UnityEngine::Canvas*, ::UnityEngine::Camera*, ::UnityEngine::Vector2, ::System::Collections::Generic::IList_1<::UnityEngine::UI::Graphic*>*, ::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_RAYCAST_1_OFFSET))(canvas, eventCamera, pointerPosition, foundGraphics, results);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_ONDISABLE_OFFSET))(this);
		}

		::System::Void _SetOptimizedRaycastActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER__SETOPTIMIZEDRAYCASTACTIVE_OFFSET))(this, active);
		}

		static ::System::Void RaycastOptimized(::UnityEngine::Canvas* canvas, ::UnityEngine::Camera* eventCamera, ::UnityEngine::Vector2 pointerPosition, ::System::Collections::Generic::IList_1<::UnityEngine::UI::Graphic*>* foundGraphics, ::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>* results)
		{
			return ((::System::Void(*)(::UnityEngine::Canvas*, ::UnityEngine::Camera*, ::UnityEngine::Vector2, ::System::Collections::Generic::IList_1<::UnityEngine::UI::Graphic*>*, ::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_RAYCASTOPTIMIZED_OFFSET))(canvas, eventCamera, pointerPosition, foundGraphics, results);
		}

		::System::Void _OnCanvasGraphicsChange(::UnityEngine::UI::Graphic* graphic, ::System::Boolean isAdd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Graphic*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER__ONCANVASGRAPHICSCHANGE_OFFSET))(this, graphic, isAdd);
		}

		::System::Void _OnGraphicRaycastTargetChange(::UnityEngine::UI::Graphic* graphic)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER__ONGRAPHICRAYCASTTARGETCHANGE_OFFSET))(this, graphic);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}
	};
}
