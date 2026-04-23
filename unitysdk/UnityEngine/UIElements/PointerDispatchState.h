#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UIElements { class IEventHandler; }
namespace UnityEngine::UIElements { class IPointerEvent; }

#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_ACTIVATECOMPATIBILITYMOUSEEVENTS_OFFSET UNITYSDK_OFFSET(0x1A514DF0)
#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_CAPTUREPOINTER_OFFSET UNITYSDK_OFFSET(0x1A514AF0)
#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_GETCAPTURINGELEMENT_OFFSET UNITYSDK_OFFSET(0x1A514D20)
#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_HASPOINTERCAPTURE_OFFSET UNITYSDK_OFFSET(0x1A514AB0)
#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_PREVENTCOMPATIBILITYMOUSEEVENTS_OFFSET UNITYSDK_OFFSET(0x1A514E80)
#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_PROCESSPOINTERCAPTURE_OFFSET UNITYSDK_OFFSET(0x1A515080)
#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_RELEASEPOINTER_1_OFFSET UNITYSDK_OFFSET(0x1A514CD0)
#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_RELEASEPOINTER_OFFSET UNITYSDK_OFFSET(0x1A514D60)
#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_RESET_OFFSET UNITYSDK_OFFSET(0x1A515E70)
#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_SHOULDSENDCOMPATIBILITYMOUSEEVENTS_OFFSET UNITYSDK_OFFSET(0x1A514EC0)
#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A50AE50)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerDispatchState_TypeDefinitionIndex = 5870;

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
