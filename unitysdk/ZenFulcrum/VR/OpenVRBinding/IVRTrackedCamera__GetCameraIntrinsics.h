#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRTrackedCameraError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRTrackedCameraFrameType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdVector2_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETCAMERAINTRINSICS_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CEA720)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETCAMERAINTRINSICS_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CEA7F0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETCAMERAINTRINSICS_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CEA320)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETCAMERAINTRINSICS__CTOR_OFFSET UNITYSDK_OFFSET(0x18CEA300)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRTrackedCamera__GetCameraIntrinsics_TypeDefinitionIndex = 29985;

	class IVRTrackedCamera__GetCameraIntrinsics : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETCAMERAINTRINSICS__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError Invoke(::System::UInt32 nDeviceIndex, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType eFrameType, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t& pFocalLength, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t& pCenter)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t&, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETCAMERAINTRINSICS_INVOKE_OFFSET))(this, nDeviceIndex, eFrameType, pFocalLength, pCenter);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 nDeviceIndex, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType eFrameType, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t& pFocalLength, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t& pCenter, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t&, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETCAMERAINTRINSICS_BEGININVOKE_OFFSET))(this, nDeviceIndex, eFrameType, pFocalLength, pCenter, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError EndInvoke(::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t& pFocalLength, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t& pCenter, ::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t&, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETCAMERAINTRINSICS_ENDINVOKE_OFFSET))(this, pFocalLength, pCenter, result);
		}
	};
}
