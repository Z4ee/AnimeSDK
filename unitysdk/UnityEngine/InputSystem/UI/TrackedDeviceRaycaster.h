#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/BaseRaycaster.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"
#include "unitysdk/UnityEngine/InputSystem/UI/TrackedDeviceRaycaster_RaycastHitData.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InlinedArray_1.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::InputSystem::UI { class ExtendedPointerEventData; }

#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_GET_BLOCKINGMASK_OFFSET UNITYSDK_OFFSET(0x1B9795B0)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_GET_CANVAS_OFFSET UNITYSDK_OFFSET(0x1B979420)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_GET_CHECKFOR2DOCCLUSION_OFFSET UNITYSDK_OFFSET(0x1B9795F0)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_GET_CHECKFOR3DOCCLUSION_OFFSET UNITYSDK_OFFSET(0x1B9795D0)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_GET_EVENTCAMERA_OFFSET UNITYSDK_OFFSET(0x1B979180)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_GET_IGNOREREVERSEDGRAPHICS_OFFSET UNITYSDK_OFFSET(0x1B979610)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_GET_MAXDISTANCE_OFFSET UNITYSDK_OFFSET(0x1B979630)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B979760)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B979650)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_PERFORMRAYCAST_OFFSET UNITYSDK_OFFSET(0x1B979900)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_RAYCAST_OFFSET UNITYSDK_OFFSET(0x1B979880)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_RAYINTERSECTSRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B97AD20)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_SET_BLOCKINGMASK_OFFSET UNITYSDK_OFFSET(0x1B9795C0)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_SET_CHECKFOR2DOCCLUSION_OFFSET UNITYSDK_OFFSET(0x1B979600)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_SET_CHECKFOR3DOCCLUSION_OFFSET UNITYSDK_OFFSET(0x1B9795E0)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_SET_IGNOREREVERSEDGRAPHICS_OFFSET UNITYSDK_OFFSET(0x1B979620)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_SET_MAXDISTANCE_OFFSET UNITYSDK_OFFSET(0x1B979640)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_SORTEDRAYCASTGRAPHICS_OFFSET UNITYSDK_OFFSET(0x1B97A7C0)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B97B2B0)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B97B200)

namespace UnityEngine::InputSystem::UI
{
	inline static constexpr unsigned int TrackedDeviceRaycaster_TypeDefinitionIndex = 31773;

	class TrackedDeviceRaycaster : public ::UnityEngine::EventSystems::BaseRaycaster
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData>** StaticGet_s_SortedGraphics()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData>**)Il2CppClass::FromTypeDefinitionIndex(TrackedDeviceRaycaster_TypeDefinitionIndex)->GetStaticField(0x25F50);
		}
		static ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>* StaticGet_s_Instances()
		{
			return (::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>*)Il2CppClass::FromTypeDefinitionIndex(TrackedDeviceRaycaster_TypeDefinitionIndex)->GetStaticField(0x25F58);
		}
		::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData>* m_RaycastResultsCache; // 0x20
		::System::Boolean m_IgnoreReversedGraphics; // 0x28
		::System::Boolean m_CheckFor2DOcclusion; // 0x29
		::System::Boolean m_CheckFor3DOcclusion; // 0x2A
		::System::Single m_MaxDistance; // 0x2C
		::UnityEngine::LayerMask m_BlockingMask; // 0x30
		::UnityEngine::Canvas* m_Canvas; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER__CCTOR_OFFSET))();
		}

		::UnityEngine::Camera* get_eventCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_GET_EVENTCAMERA_OFFSET))(this);
		}

		::UnityEngine::LayerMask get_blockingMask()
		{
			return ((::UnityEngine::LayerMask(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_GET_BLOCKINGMASK_OFFSET))(this);
		}

		::System::Void set_blockingMask(::UnityEngine::LayerMask value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_SET_BLOCKINGMASK_OFFSET))(this, value);
		}

		::System::Boolean get_checkFor3DOcclusion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_GET_CHECKFOR3DOCCLUSION_OFFSET))(this);
		}

		::System::Void set_checkFor3DOcclusion(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_SET_CHECKFOR3DOCCLUSION_OFFSET))(this, value);
		}

		::System::Boolean get_checkFor2DOcclusion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_GET_CHECKFOR2DOCCLUSION_OFFSET))(this);
		}

		::System::Void set_checkFor2DOcclusion(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_SET_CHECKFOR2DOCCLUSION_OFFSET))(this, value);
		}

		::System::Boolean get_ignoreReversedGraphics()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_GET_IGNOREREVERSEDGRAPHICS_OFFSET))(this);
		}

		::System::Void set_ignoreReversedGraphics(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_SET_IGNOREREVERSEDGRAPHICS_OFFSET))(this, value);
		}

		::System::Single get_maxDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_GET_MAXDISTANCE_OFFSET))(this);
		}

		::System::Void set_maxDistance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_SET_MAXDISTANCE_OFFSET))(this, value);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Raycast(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_RAYCAST_OFFSET))(this, eventData, resultAppendList);
		}

		::System::Void PerformRaycast(::UnityEngine::InputSystem::UI::ExtendedPointerEventData* eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::UI::ExtendedPointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_PERFORMRAYCAST_OFFSET))(this, eventData, resultAppendList);
		}

		::System::Void SortedRaycastGraphics(::UnityEngine::Canvas* canvas, ::UnityEngine::Ray ray, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData>* results)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Canvas*, ::UnityEngine::Ray, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_SORTEDRAYCASTGRAPHICS_OFFSET))(this, canvas, ray, results);
		}

		static ::System::Boolean RayIntersectsRectTransform(::UnityEngine::RectTransform* transform, ::UnityEngine::Ray ray, ::UnityEngine::Vector3& worldPosition, ::System::Single& distance)
		{
			return ((::System::Boolean(*)(::UnityEngine::RectTransform*, ::UnityEngine::Ray, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_RAYINTERSECTSRECTTRANSFORM_OFFSET))(transform, ray, worldPosition, distance);
		}

		::UnityEngine::Canvas* get_canvas()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_GET_CANVAS_OFFSET))(this);
		}
	};
}
