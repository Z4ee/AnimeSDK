#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UIElements { class IEventHandler; }

#define UNITYENGINE_UIELEMENTS_MOUSECAPTURECONTROLLER_CAPTUREMOUSE_OFFSET UNITYSDK_OFFSET(0x1CFFFC60)
#define UNITYENGINE_UIELEMENTS_MOUSECAPTURECONTROLLER_HASMOUSECAPTURE_OFFSET UNITYSDK_OFFSET(0x1CFFEA20)
#define UNITYENGINE_UIELEMENTS_MOUSECAPTURECONTROLLER_RELEASEMOUSE_OFFSET UNITYSDK_OFFSET(0x1CFFFE70)
#define UNITYENGINE_UIELEMENTS_MOUSECAPTURECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CFFFFF0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseCaptureController_TypeDefinitionIndex = 28055;

	class MouseCaptureController : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_m_IsMouseCapturedWarningEmitted()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MouseCaptureController_TypeDefinitionIndex)->GetStaticField(0x7740);
		}
		static ::System::Boolean* StaticGet_m_ReleaseMouseWarningEmitted()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MouseCaptureController_TypeDefinitionIndex)->GetStaticField(0x7741);
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
