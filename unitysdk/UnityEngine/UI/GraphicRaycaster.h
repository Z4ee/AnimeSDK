#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/BaseRaycaster.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/UI/GraphicRaycastTargetCacheData.h"
#include "unitysdk/UnityEngine/UI/GraphicRaycaster_BlockingObjects.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class Graphic; }

#define UNITYENGINE_UI_GRAPHICRAYCASTER_GET_BLOCKINGOBJECTS_OFFSET UNITYSDK_OFFSET(0x1F892AE0)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_GET_CANVAS_OFFSET UNITYSDK_OFFSET(0x1F892860)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_GET_EVENTCAMERA_OFFSET UNITYSDK_OFFSET(0x1F896CC0)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_GET_IGNOREREVERSEDGRAPHICS_OFFSET UNITYSDK_OFFSET(0x1F892AC0)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_GET_RENDERORDERPRIORITY_OFFSET UNITYSDK_OFFSET(0x1F892A20)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_GET_SORTORDERPRIORITY_OFFSET UNITYSDK_OFFSET(0x1F8927D0)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_RAYCASTFAST_OFFSET UNITYSDK_OFFSET(0x1F896510)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_RAYCASTONE_OFFSET UNITYSDK_OFFSET(0x1F8949A0)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_RAYCASTTESTGRAPHICCACHED_OFFSET UNITYSDK_OFFSET(0x1F896FC0)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_RAYCAST_1_OFFSET UNITYSDK_OFFSET(0x1F894260)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_RAYCAST_OFFSET UNITYSDK_OFFSET(0x1F892BD0)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_SET_BLOCKINGOBJECTS_OFFSET UNITYSDK_OFFSET(0x1F892AF0)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_SET_IGNOREREVERSEDGRAPHICS_OFFSET UNITYSDK_OFFSET(0x1F892AD0)
#define UNITYENGINE_UI_GRAPHICRAYCASTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F897A70)
#define UNITYENGINE_UI_GRAPHICRAYCASTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F892B00)
#define UNITYENGINE_UI_GRAPHICRAYCASTER___BASE_GET_CANVAS_OFFSET UNITYSDK_OFFSET(0x1F897B00)
#define UNITYENGINE_UI_GRAPHICRAYCASTER___BASE_GET_RENDERORDERPRIORITY_OFFSET UNITYSDK_OFFSET(0x1F897B10)
#define UNITYENGINE_UI_GRAPHICRAYCASTER___BASE_GET_SORTORDERPRIORITY_OFFSET UNITYSDK_OFFSET(0x1F897B20)
#define UNITYENGINE_UI_GRAPHICRAYCASTER___BASE_RAYCASTONE_OFFSET UNITYSDK_OFFSET(0x1F897B30)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int GraphicRaycaster_TypeDefinitionIndex = 19213;

	class GraphicRaycaster : public ::UnityEngine::EventSystems::BaseRaycaster
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>** StaticGet_s_SortedGraphics()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>**)Il2CppClass::FromTypeDefinitionIndex(GraphicRaycaster_TypeDefinitionIndex)->GetStaticField(0x8890);
		}
		// static const ::System::Int32 kNoEventMaskSet = 0xFFFFFFFF; // 0x0
		::System::Boolean m_IgnoreReversedGraphics; // 0x20
		::UnityEngine::UI::GraphicRaycaster_BlockingObjects m_BlockingObjects; // 0x24
		::UnityEngine::LayerMask m_BlockingMask; // 0x28
		::UnityEngine::Canvas* m_Canvas; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>* m_RaycastResults; // 0x38

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

		::UnityEngine::Canvas* get_canvas()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_GET_CANVAS_OFFSET))(this);
		}

		::System::Void Raycast(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_RAYCAST_OFFSET))(this, eventData, resultAppendList);
		}

		::System::Void RaycastOne(::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::EventSystems::RaycastResult& lastResult)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::EventSystems::RaycastResult&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_RAYCASTONE_OFFSET))(this, eventData, lastResult);
		}

		::UnityEngine::Camera* get_eventCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_GET_EVENTCAMERA_OFFSET))(this);
		}

		static ::System::Void Raycast_1(::UnityEngine::Canvas* canvas, ::UnityEngine::Camera* eventCamera, ::UnityEngine::Vector2 pointerPosition, ::System::Collections::Generic::IList_1<::UnityEngine::UI::Graphic*>* foundGraphics, ::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>* results)
		{
			return ((::System::Void(*)(::UnityEngine::Canvas*, ::UnityEngine::Camera*, ::UnityEngine::Vector2, ::System::Collections::Generic::IList_1<::UnityEngine::UI::Graphic*>*, ::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_RAYCAST_1_OFFSET))(canvas, eventCamera, pointerPosition, foundGraphics, results);
		}

		static ::System::Void RaycastFast(::UnityEngine::Canvas* canvas, ::UnityEngine::Camera* eventCamera, ::UnityEngine::Vector2 pointerPosition, ::System::Collections::Generic::IList_1<::UnityEngine::UI::Graphic*>* foundGraphics, ::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>* results)
		{
			return ((::System::Void(*)(::UnityEngine::Canvas*, ::UnityEngine::Camera*, ::UnityEngine::Vector2, ::System::Collections::Generic::IList_1<::UnityEngine::UI::Graphic*>*, ::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_RAYCASTFAST_OFFSET))(canvas, eventCamera, pointerPosition, foundGraphics, results);
		}

		static ::UnityEngine::EventSystems::RaycastResult RaycastTestGraphicCached(::UnityEngine::Vector2 pointerPosition, ::UnityEngine::Vector2 pointerPositionRatio, ::Il2CppArray<::UnityEngine::UI::GraphicRaycastTargetCacheData>* cacheDatas, ::System::Int32 cacheDataCount, ::UnityEngine::UI::Graphic*& resultGraphic)
		{
			return ((::UnityEngine::EventSystems::RaycastResult(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::Il2CppArray<::UnityEngine::UI::GraphicRaycastTargetCacheData>*, ::System::Int32, ::UnityEngine::UI::Graphic*&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_RAYCASTTESTGRAPHICCACHED_OFFSET))(pointerPosition, pointerPositionRatio, cacheDatas, cacheDataCount, resultGraphic);
		}

		::UnityEngine::Canvas* __base_get_canvas()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER___BASE_GET_CANVAS_OFFSET))(this);
		}

		::System::Int32 __base_get_renderOrderPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER___BASE_GET_RENDERORDERPRIORITY_OFFSET))(this);
		}

		::System::Int32 __base_get_sortOrderPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER___BASE_GET_SORTORDERPRIORITY_OFFSET))(this);
		}

		::System::Void __base_RaycastOne(::UnityEngine::EventSystems::PointerEventData* P0, ::UnityEngine::EventSystems::RaycastResult& P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::EventSystems::RaycastResult&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER___BASE_RAYCASTONE_OFFSET))(this, P0, P1);
		}
	};
}
