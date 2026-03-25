#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdMatrix34_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTRANSFORMTRACKEDDEVICERELATIVE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CC2CD0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTRANSFORMTRACKEDDEVICERELATIVE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CC2D80)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTRANSFORMTRACKEDDEVICERELATIVE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CC2930)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTRANSFORMTRACKEDDEVICERELATIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC2910)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__GetOverlayTransformTrackedDeviceRelative_TypeDefinitionIndex = 30137;

	class IVROverlay__GetOverlayTransformTrackedDeviceRelative : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTRANSFORMTRACKEDDEVICERELATIVE__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::UInt64 ulOverlayHandle, ::System::UInt32& punTrackedDevice, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pmatTrackedDeviceToOverlayTransform)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::UInt32&, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTRANSFORMTRACKEDDEVICERELATIVE_INVOKE_OFFSET))(this, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 ulOverlayHandle, ::System::UInt32& punTrackedDevice, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pmatTrackedDeviceToOverlayTransform, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::UInt32&, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTRANSFORMTRACKEDDEVICERELATIVE_BEGININVOKE_OFFSET))(this, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::System::UInt32& punTrackedDevice, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pmatTrackedDeviceToOverlayTransform, ::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt32&, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTRANSFORMTRACKEDDEVICERELATIVE_ENDINVOKE_OFFSET))(this, punTrackedDevice, pmatTrackedDeviceToOverlayTransform, result);
		}
	};
}
