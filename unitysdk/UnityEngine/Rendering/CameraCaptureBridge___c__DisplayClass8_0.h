#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Rendering { class CameraCaptureAction; }

#define UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA68CD0)
#define UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE___C__DISPLAYCLASS8_0__REMOVECAPTUREACTION_B__0_OFFSET UNITYSDK_OFFSET(0x1CA68CE0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CameraCaptureBridge___c__DisplayClass8_0_TypeDefinitionIndex = 18731;

	class CameraCaptureBridge___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::CameraCaptureAction* action; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveCaptureAction_b__0(::UnityEngine::Rendering::CameraCaptureAction* a)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::CameraCaptureAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE___C__DISPLAYCLASS8_0__REMOVECAPTUREACTION_B__0_OFFSET))(this, a);
		}
	};
}
