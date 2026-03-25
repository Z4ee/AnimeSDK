#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UIElements { class IEventHandler; }

#define UNITYENGINE_UIELEMENTS_MOUSECAPTURECONTROLLER_CAPTUREMOUSE_OFFSET UNITYSDK_OFFSET(0x18AD5480)
#define UNITYENGINE_UIELEMENTS_MOUSECAPTURECONTROLLER_HASMOUSECAPTURE_OFFSET UNITYSDK_OFFSET(0x18AD47A0)
#define UNITYENGINE_UIELEMENTS_MOUSECAPTURECONTROLLER_RELEASEMOUSE_OFFSET UNITYSDK_OFFSET(0x18AD5690)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseCaptureController_TypeDefinitionIndex = 5848;

	class MouseCaptureController : public ::System::Object
	{
	public:
		static ::System::Boolean HasMouseCapture(::UnityEngine::UIElements::IEventHandler* handler)
		{
			return ((::System::Boolean(*)(::UnityEngine::UIElements::IEventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSECAPTURECONTROLLER_HASMOUSECAPTURE_OFFSET))(handler);
		}

		static ::System::Void CaptureMouse(::UnityEngine::UIElements::IEventHandler* handler)
		{
			return ((::System::Void(*)(::UnityEngine::UIElements::IEventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSECAPTURECONTROLLER_CAPTUREMOUSE_OFFSET))(handler);
		}

		static ::System::Void ReleaseMouse(::UnityEngine::UIElements::IEventHandler* handler)
		{
			return ((::System::Void(*)(::UnityEngine::UIElements::IEventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSECAPTURECONTROLLER_RELEASEMOUSE_OFFSET))(handler);
		}
	};
}
