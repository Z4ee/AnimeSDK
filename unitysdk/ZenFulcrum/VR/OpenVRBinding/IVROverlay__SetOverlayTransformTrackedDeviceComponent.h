#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYTRANSFORMTRACKEDDEVICECOMPONENT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A708990)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYTRANSFORMTRACKEDDEVICECOMPONENT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A708A10)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYTRANSFORMTRACKEDDEVICECOMPONENT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A708600)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYTRANSFORMTRACKEDDEVICECOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7085E0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__SetOverlayTransformTrackedDeviceComponent_TypeDefinitionIndex = 35858;

	class IVROverlay__SetOverlayTransformTrackedDeviceComponent : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYTRANSFORMTRACKEDDEVICECOMPONENT__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::UInt64 ulOverlayHandle, ::System::UInt32 unDeviceIndex, ::System::String* pchComponentName)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYTRANSFORMTRACKEDDEVICECOMPONENT_INVOKE_OFFSET))(this, ulOverlayHandle, unDeviceIndex, pchComponentName);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 ulOverlayHandle, ::System::UInt32 unDeviceIndex, ::System::String* pchComponentName, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::UInt32, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYTRANSFORMTRACKEDDEVICECOMPONENT_BEGININVOKE_OFFSET))(this, ulOverlayHandle, unDeviceIndex, pchComponentName, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYTRANSFORMTRACKEDDEVICECOMPONENT_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
