#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UIElements { class IEventHandler; }
namespace UnityEngine::UIElements { class IPointerEvent; }

#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_ACTIVATECOMPATIBILITYMOUSEEVENTS_OFFSET UNITYSDK_OFFSET(0x1B360870)
#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_CAPTUREPOINTER_OFFSET UNITYSDK_OFFSET(0x1B3605C0)
#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_GETCAPTURINGELEMENT_OFFSET UNITYSDK_OFFSET(0x1B3607C0)
#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_HASPOINTERCAPTURE_OFFSET UNITYSDK_OFFSET(0x1B360590)
#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_PREVENTCOMPATIBILITYMOUSEEVENTS_OFFSET UNITYSDK_OFFSET(0x1B3608F0)
#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_PROCESSPOINTERCAPTURE_OFFSET UNITYSDK_OFFSET(0x1B360AE0)
#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_RELEASEPOINTER_1_OFFSET UNITYSDK_OFFSET(0x1B360780)
#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_RELEASEPOINTER_OFFSET UNITYSDK_OFFSET(0x1B3607F0)
#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_RESET_OFFSET UNITYSDK_OFFSET(0x1B361760)
#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_SHOULDSENDCOMPATIBILITYMOUSEEVENTS_OFFSET UNITYSDK_OFFSET(0x1B360920)
#define UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B356590)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerDispatchState_TypeDefinitionIndex = 6147;

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

		::UnityEngine::UIElements::IEventHandler* GetCapturingElement(::System::Int32 a1)
		{
			return ((::UnityEngine::UIElements::IEventHandler*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_GETCAPTURINGELEMENT_OFFSET))(this, a1);
		}

		::System::Boolean HasPointerCapture(::UnityEngine::UIElements::IEventHandler* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::IEventHandler*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_HASPOINTERCAPTURE_OFFSET))(this, a1, a2);
		}

		::System::Void CapturePointer(::UnityEngine::UIElements::IEventHandler* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::IEventHandler*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_CAPTUREPOINTER_OFFSET))(this, a1, a2);
		}

		::System::Void ReleasePointer(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_RELEASEPOINTER_OFFSET))(this, a1);
		}

		::System::Void ReleasePointer_1(::UnityEngine::UIElements::IEventHandler* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::IEventHandler*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_RELEASEPOINTER_1_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessPointerCapture(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_PROCESSPOINTERCAPTURE_OFFSET))(this, a1);
		}

		::System::Void ActivateCompatibilityMouseEvents(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_ACTIVATECOMPATIBILITYMOUSEEVENTS_OFFSET))(this, a1);
		}

		::System::Void PreventCompatibilityMouseEvents(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_PREVENTCOMPATIBILITYMOUSEEVENTS_OFFSET))(this, a1);
		}

		::System::Boolean ShouldSendCompatibilityMouseEvents(::UnityEngine::UIElements::IPointerEvent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::IPointerEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDISPATCHSTATE_SHOULDSENDCOMPATIBILITYMOUSEEVENTS_OFFSET))(this, a1);
		}
	};
}
