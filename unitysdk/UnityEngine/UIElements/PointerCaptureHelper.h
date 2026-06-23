#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UIElements { class IEventHandler; }
namespace UnityEngine::UIElements { class IPanel; }
namespace UnityEngine::UIElements { class IPointerEvent; }
namespace UnityEngine::UIElements { class PointerDispatchState; }

#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_ACTIVATECOMPATIBILITYMOUSEEVENTS_OFFSET UNITYSDK_OFFSET(0x1BBEC720)
#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_CAPTUREPOINTER_OFFSET UNITYSDK_OFFSET(0x1BBE88D0)
#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_GETCAPTURINGELEMENT_OFFSET UNITYSDK_OFFSET(0x1BBE9190)
#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_GETSTATEFOR_OFFSET UNITYSDK_OFFSET(0x1BBEC420)
#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_HASPOINTERCAPTURE_OFFSET UNITYSDK_OFFSET(0x1BBE86D0)
#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_PREVENTCOMPATIBILITYMOUSEEVENTS_OFFSET UNITYSDK_OFFSET(0x1BBEC7B0)
#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_PROCESSPOINTERCAPTURE_OFFSET UNITYSDK_OFFSET(0x1BBE8960)
#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_RELEASEPOINTER_1_OFFSET UNITYSDK_OFFSET(0x1BBEBDB0)
#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_RELEASEPOINTER_OFFSET UNITYSDK_OFFSET(0x1BBE8A50)
#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_SHOULDSENDCOMPATIBILITYMOUSEEVENTS_OFFSET UNITYSDK_OFFSET(0x1BBEBE10)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerCaptureHelper_TypeDefinitionIndex = 27464;

	class PointerCaptureHelper : public ::System::Object
	{
	public:
		static ::UnityEngine::UIElements::PointerDispatchState* GetStateFor(::UnityEngine::UIElements::IEventHandler* handler)
		{
			return ((::UnityEngine::UIElements::PointerDispatchState*(*)(::UnityEngine::UIElements::IEventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_GETSTATEFOR_OFFSET))(handler);
		}

		static ::System::Boolean HasPointerCapture(::UnityEngine::UIElements::IEventHandler* handler, ::System::Int32 pointerId)
		{
			return ((::System::Boolean(*)(::UnityEngine::UIElements::IEventHandler*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_HASPOINTERCAPTURE_OFFSET))(handler, pointerId);
		}

		static ::System::Void CapturePointer(::UnityEngine::UIElements::IEventHandler* handler, ::System::Int32 pointerId)
		{
			return ((::System::Void(*)(::UnityEngine::UIElements::IEventHandler*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_CAPTUREPOINTER_OFFSET))(handler, pointerId);
		}

		static ::System::Void ReleasePointer(::UnityEngine::UIElements::IEventHandler* handler, ::System::Int32 pointerId)
		{
			return ((::System::Void(*)(::UnityEngine::UIElements::IEventHandler*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_RELEASEPOINTER_OFFSET))(handler, pointerId);
		}

		static ::UnityEngine::UIElements::IEventHandler* GetCapturingElement(::UnityEngine::UIElements::IPanel* panel, ::System::Int32 pointerId)
		{
			return ((::UnityEngine::UIElements::IEventHandler*(*)(::UnityEngine::UIElements::IPanel*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_GETCAPTURINGELEMENT_OFFSET))(panel, pointerId);
		}

		static ::System::Void ReleasePointer_1(::UnityEngine::UIElements::IPanel* panel, ::System::Int32 pointerId)
		{
			return ((::System::Void(*)(::UnityEngine::UIElements::IPanel*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_RELEASEPOINTER_1_OFFSET))(panel, pointerId);
		}

		static ::System::Void ActivateCompatibilityMouseEvents(::UnityEngine::UIElements::IPanel* panel, ::System::Int32 pointerId)
		{
			return ((::System::Void(*)(::UnityEngine::UIElements::IPanel*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_ACTIVATECOMPATIBILITYMOUSEEVENTS_OFFSET))(panel, pointerId);
		}

		static ::System::Void PreventCompatibilityMouseEvents(::UnityEngine::UIElements::IPanel* panel, ::System::Int32 pointerId)
		{
			return ((::System::Void(*)(::UnityEngine::UIElements::IPanel*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_PREVENTCOMPATIBILITYMOUSEEVENTS_OFFSET))(panel, pointerId);
		}

		static ::System::Boolean ShouldSendCompatibilityMouseEvents(::UnityEngine::UIElements::IPanel* panel, ::UnityEngine::UIElements::IPointerEvent* evt)
		{
			return ((::System::Boolean(*)(::UnityEngine::UIElements::IPanel*, ::UnityEngine::UIElements::IPointerEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_SHOULDSENDCOMPATIBILITYMOUSEEVENTS_OFFSET))(panel, evt);
		}

		static ::System::Void ProcessPointerCapture(::UnityEngine::UIElements::IPanel* panel, ::System::Int32 pointerId)
		{
			return ((::System::Void(*)(::UnityEngine::UIElements::IPanel*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_PROCESSPOINTERCAPTURE_OFFSET))(panel, pointerId);
		}
	};
}
