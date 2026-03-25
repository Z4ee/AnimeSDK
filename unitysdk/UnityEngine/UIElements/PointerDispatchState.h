#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UIElements { class IEventHandler; }
namespace UnityEngine::UIElements { class IPointerEvent; }

#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_ACTIVATECOMPATIBILITYMOUSEEVENTS_OFFSET UNITYSDK_OFFSET(0x18AD96B0)
#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_CAPTUREPOINTER_OFFSET UNITYSDK_OFFSET(0x18AD93B0)
#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_GETCAPTURINGELEMENT_OFFSET UNITYSDK_OFFSET(0x18AD95E0)
#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_HASPOINTERCAPTURE_OFFSET UNITYSDK_OFFSET(0x18AD9370)
#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_PREVENTCOMPATIBILITYMOUSEEVENTS_OFFSET UNITYSDK_OFFSET(0x18AD9740)
#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_PROCESSPOINTERCAPTURE_OFFSET UNITYSDK_OFFSET(0x18AD9940)
#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_RELEASEPOINTER_1_OFFSET UNITYSDK_OFFSET(0x18AD9590)
#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_RELEASEPOINTER_OFFSET UNITYSDK_OFFSET(0x18AD9620)
#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_RESET_OFFSET UNITYSDK_OFFSET(0x18ADA730)
#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_SHOULDSENDCOMPATIBILITYMOUSEEVENTS_OFFSET UNITYSDK_OFFSET(0x18AD9780)
#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18ACF4F0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerDispatchState_TypeDefinitionIndex = 5858;

	class PointerDispatchState : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::UIElements::IEventHandler*>* m_PendingPointerCapture; // 0x10
		::Il2CppArray<::UnityEngine::UIElements::IEventHandler*>* m_PointerCapture; // 0x18
		::Il2CppArray<::System::Boolean>* m_ShouldSendCompatibilityMouseEvents; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_RESET_OFFSET))(this);
		}

		::UnityEngine::UIElements::IEventHandler* GetCapturingElement(::System::Int32 pointerId)
		{
			return ((::UnityEngine::UIElements::IEventHandler*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_GETCAPTURINGELEMENT_OFFSET))(this, pointerId);
		}

		::System::Boolean HasPointerCapture(::UnityEngine::UIElements::IEventHandler* handler, ::System::Int32 pointerId)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::IEventHandler*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_HASPOINTERCAPTURE_OFFSET))(this, handler, pointerId);
		}

		::System::Void CapturePointer(::UnityEngine::UIElements::IEventHandler* handler, ::System::Int32 pointerId)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::IEventHandler*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_CAPTUREPOINTER_OFFSET))(this, handler, pointerId);
		}

		::System::Void ReleasePointer(::System::Int32 pointerId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_RELEASEPOINTER_OFFSET))(this, pointerId);
		}

		::System::Void ReleasePointer_1(::UnityEngine::UIElements::IEventHandler* handler, ::System::Int32 pointerId)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::IEventHandler*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_RELEASEPOINTER_1_OFFSET))(this, handler, pointerId);
		}

		::System::Void ProcessPointerCapture(::System::Int32 pointerId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_PROCESSPOINTERCAPTURE_OFFSET))(this, pointerId);
		}

		::System::Void ActivateCompatibilityMouseEvents(::System::Int32 pointerId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_ACTIVATECOMPATIBILITYMOUSEEVENTS_OFFSET))(this, pointerId);
		}

		::System::Void PreventCompatibilityMouseEvents(::System::Int32 pointerId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_PREVENTCOMPATIBILITYMOUSEEVENTS_OFFSET))(this, pointerId);
		}

		::System::Boolean ShouldSendCompatibilityMouseEvents(::UnityEngine::UIElements::IPointerEvent* evt)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::IPointerEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_SHOULDSENDCOMPATIBILITYMOUSEEVENTS_OFFSET))(this, evt);
		}
	};
}
