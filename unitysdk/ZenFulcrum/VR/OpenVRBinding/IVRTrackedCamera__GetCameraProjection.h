#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRTrackedCameraError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRTrackedCameraFrameType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdMatrix44_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETCAMERAPROJECTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CEAC70)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETCAMERAPROJECTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CEAD60)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETCAMERAPROJECTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CEA840)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETCAMERAPROJECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18CEA820)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRTrackedCamera__GetCameraProjection_TypeDefinitionIndex = 29986;

	class IVRTrackedCamera__GetCameraProjection : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETCAMERAPROJECTION__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError Invoke(::System::UInt32 nDeviceIndex, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType eFrameType, ::System::Single flZNear, ::System::Single flZFar, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix44_t& pProjection)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType, ::System::Single, ::System::Single, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix44_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETCAMERAPROJECTION_INVOKE_OFFSET))(this, nDeviceIndex, eFrameType, flZNear, flZFar, pProjection);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 nDeviceIndex, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType eFrameType, ::System::Single flZNear, ::System::Single flZFar, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix44_t& pProjection, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType, ::System::Single, ::System::Single, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix44_t&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETCAMERAPROJECTION_BEGININVOKE_OFFSET))(this, nDeviceIndex, eFrameType, flZNear, flZFar, pProjection, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError EndInvoke(::ZenFulcrum::VR::OpenVRBinding::HmdMatrix44_t& pProjection, ::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix44_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETCAMERAPROJECTION_ENDINVOKE_OFFSET))(this, pProjection, result);
		}
	};
}
