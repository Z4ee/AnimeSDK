#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UIElements { class IEventHandler; }

#define UNITYENGINE_UIELEMENTS_MOUSECAPTURECONTROLLER_CAPTUREMOUSE_OFFSET UNITYSDK_OFFSET(0x197B1B20)
#define UNITYENGINE_UIELEMENTS_MOUSECAPTURECONTROLLER_HASMOUSECAPTURE_OFFSET UNITYSDK_OFFSET(0x197B0880)
#define UNITYENGINE_UIELEMENTS_MOUSECAPTURECONTROLLER_RELEASEMOUSE_OFFSET UNITYSDK_OFFSET(0x197B1D30)
#define UNITYENGINE_UIELEMENTS_MOUSECAPTURECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x197B1EB0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseCaptureController_TypeDefinitionIndex = 24950;

	class MouseCaptureController : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_m_IsMouseCapturedWarningEmitted()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MouseCaptureController_TypeDefinitionIndex)->GetStaticField(0x46F0);
		}
		static ::System::Boolean* StaticGet_m_ReleaseMouseWarningEmitted()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MouseCaptureController_TypeDefinitionIndex)->GetStaticField(0x46F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSECAPTURECONTROLLER__CCTOR_OFFSET))();
		}

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
