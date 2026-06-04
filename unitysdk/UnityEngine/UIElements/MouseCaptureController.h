#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UIElements { class IEventHandler; }

#define UNITYENGINE_UIELEMENTS_MOUSECAPTURECONTROLLER_CAPTUREMOUSE_OFFSET UNITYSDK_OFFSET(0x1B35C5C0)
#define UNITYENGINE_UIELEMENTS_MOUSECAPTURECONTROLLER_HASMOUSECAPTURE_OFFSET UNITYSDK_OFFSET(0x1B35B710)
#define UNITYENGINE_UIELEMENTS_MOUSECAPTURECONTROLLER_RELEASEMOUSE_OFFSET UNITYSDK_OFFSET(0x1B35C7E0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseCaptureController_TypeDefinitionIndex = 6137;

	class MouseCaptureController : public ::System::Object
	{
	public:
		static ::System::Boolean HasMouseCapture(::UnityEngine::UIElements::IEventHandler* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::UIElements::IEventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSECAPTURECONTROLLER_HASMOUSECAPTURE_OFFSET))(a1);
		}

		static ::System::Void CaptureMouse(::UnityEngine::UIElements::IEventHandler* a1)
		{
			return ((::System::Void(*)(::UnityEngine::UIElements::IEventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSECAPTURECONTROLLER_CAPTUREMOUSE_OFFSET))(a1);
		}

		static ::System::Void ReleaseMouse(::UnityEngine::UIElements::IEventHandler* a1)
		{
			return ((::System::Void(*)(::UnityEngine::UIElements::IEventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSECAPTURECONTROLLER_RELEASEMOUSE_OFFSET))(a1);
		}
	};
}
