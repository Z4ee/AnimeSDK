#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UIElements { class IEventHandler; }
namespace UnityEngine::UIElements { class IPanel; }
namespace UnityEngine::UIElements { class IPointerEvent; }
namespace UnityEngine::UIElements { class PointerDispatchState; }

#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_ACTIVATECOMPATIBILITYMOUSEEVENTS_OFFSET UNITYSDK_OFFSET(0x1BA3F8F0)
#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_CAPTUREPOINTER_OFFSET UNITYSDK_OFFSET(0x1BA3AEB0)
#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_GETCAPTURINGELEMENT_OFFSET UNITYSDK_OFFSET(0x1BA3BA90)
#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_GETSTATEFOR_OFFSET UNITYSDK_OFFSET(0x1BA3F5E0)
#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_HASPOINTERCAPTURE_OFFSET UNITYSDK_OFFSET(0x1BA3ACA0)
#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_PREVENTCOMPATIBILITYMOUSEEVENTS_OFFSET UNITYSDK_OFFSET(0x1BA3F970)
#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_PROCESSPOINTERCAPTURE_OFFSET UNITYSDK_OFFSET(0x1BA3AF40)
#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_RELEASEPOINTER_1_OFFSET UNITYSDK_OFFSET(0x1BA3ECA0)
#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_RELEASEPOINTER_OFFSET UNITYSDK_OFFSET(0x1BA3B100)
#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_SHOULDSENDCOMPATIBILITYMOUSEEVENTS_OFFSET UNITYSDK_OFFSET(0x1BA3ECF0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerCaptureHelper_TypeDefinitionIndex = 6151;

	class PointerCaptureHelper : public ::System::Object
	{
	public:
		static ::UnityEngine::UIElements::PointerDispatchState* GetStateFor(::UnityEngine::UIElements::IEventHandler* a1)
		{
			return ((::UnityEngine::UIElements::PointerDispatchState*(*)(::UnityEngine::UIElements::IEventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_GETSTATEFOR_OFFSET))(a1);
		}

		static ::System::Boolean HasPointerCapture(::UnityEngine::UIElements::IEventHandler* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::UIElements::IEventHandler*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_HASPOINTERCAPTURE_OFFSET))(a1, a2);
		}

		static ::System::Void CapturePointer(::UnityEngine::UIElements::IEventHandler* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::UIElements::IEventHandler*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_CAPTUREPOINTER_OFFSET))(a1, a2);
		}

		static ::System::Void ReleasePointer(::UnityEngine::UIElements::IEventHandler* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::UIElements::IEventHandler*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_RELEASEPOINTER_OFFSET))(a1, a2);
		}

		static ::UnityEngine::UIElements::IEventHandler* GetCapturingElement(::UnityEngine::UIElements::IPanel* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::UIElements::IEventHandler*(*)(::UnityEngine::UIElements::IPanel*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_GETCAPTURINGELEMENT_OFFSET))(a1, a2);
		}

		static ::System::Void ReleasePointer_1(::UnityEngine::UIElements::IPanel* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::UIElements::IPanel*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_RELEASEPOINTER_1_OFFSET))(a1, a2);
		}

		static ::System::Void ActivateCompatibilityMouseEvents(::UnityEngine::UIElements::IPanel* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::UIElements::IPanel*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_ACTIVATECOMPATIBILITYMOUSEEVENTS_OFFSET))(a1, a2);
		}

		static ::System::Void PreventCompatibilityMouseEvents(::UnityEngine::UIElements::IPanel* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::UIElements::IPanel*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_PREVENTCOMPATIBILITYMOUSEEVENTS_OFFSET))(a1, a2);
		}

		static ::System::Boolean ShouldSendCompatibilityMouseEvents(::UnityEngine::UIElements::IPanel* a1, ::UnityEngine::UIElements::IPointerEvent* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::UIElements::IPanel*, ::UnityEngine::UIElements::IPointerEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_SHOULDSENDCOMPATIBILITYMOUSEEVENTS_OFFSET))(a1, a2);
		}

		static ::System::Void ProcessPointerCapture(::UnityEngine::UIElements::IPanel* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::UIElements::IPanel*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_PROCESSPOINTERCAPTURE_OFFSET))(a1, a2);
		}
	};
}
