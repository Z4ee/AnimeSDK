#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Camera; }

#define UNITYENGINE_XR_XRDEVICE_DISABLEAUTOXRCAMERATRACKING_OFFSET UNITYSDK_OFFSET(0x1C5514D0)
#define UNITYENGINE_XR_XRDEVICE_INVOKEDEVICELOADED_OFFSET UNITYSDK_OFFSET(0x1C5514E0)
#define UNITYENGINE_XR_XRDEVICE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5515A0)

namespace UnityEngine::XR
{
	inline static constexpr unsigned int XRDevice_TypeDefinitionIndex = 8564;

	class XRDevice : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::String*>** StaticGet_deviceLoaded()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(XRDevice_TypeDefinitionIndex)->GetStaticField(0x7830);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRDEVICE__CCTOR_OFFSET))();
		}

		static ::System::Void DisableAutoXRCameraTracking(::UnityEngine::Camera* camera, ::System::Boolean disabled)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRDEVICE_DISABLEAUTOXRCAMERATRACKING_OFFSET))(camera, disabled);
		}

		static ::System::Void InvokeDeviceLoaded(::System::String* loadedDeviceName)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRDEVICE_INVOKEDEVICELOADED_OFFSET))(loadedDeviceName);
		}
	};
}
