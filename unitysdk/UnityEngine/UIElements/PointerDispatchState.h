#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UIElements { class IEventHandler; }
namespace UnityEngine::UIElements { class IPointerEvent; }

#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_ACTIVATECOMPATIBILITYMOUSEEVENTS_OFFSET UNITYSDK_OFFSET(0x1D003C90)
#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_CAPTUREPOINTER_OFFSET UNITYSDK_OFFSET(0x1D003A00)
#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_GETCAPTURINGELEMENT_OFFSET UNITYSDK_OFFSET(0x1D003BC0)
#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_HASPOINTERCAPTURE_OFFSET UNITYSDK_OFFSET(0x1D0039C0)
#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_PREVENTCOMPATIBILITYMOUSEEVENTS_OFFSET UNITYSDK_OFFSET(0x1D003D20)
#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_PROCESSPOINTERCAPTURE_OFFSET UNITYSDK_OFFSET(0x1D003F30)
#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_RELEASEPOINTER_1_OFFSET UNITYSDK_OFFSET(0x1D003B70)
#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_RELEASEPOINTER_OFFSET UNITYSDK_OFFSET(0x1D003C00)
#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_RESET_OFFSET UNITYSDK_OFFSET(0x1D004C40)
#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_SHOULDSENDCOMPATIBILITYMOUSEEVENTS_OFFSET UNITYSDK_OFFSET(0x1D003D60)
#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF7F90)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerDispatchState_TypeDefinitionIndex = 28067;

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
