#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding { class IVRTrackedCamera__AcquireVideoStreamingService; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRTrackedCamera__GetCameraErrorNameFromEnum; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRTrackedCamera__GetCameraFrameSize; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRTrackedCamera__GetCameraIntrinsics; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRTrackedCamera__GetCameraProjection; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRTrackedCamera__GetVideoStreamFrameBuffer; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRTrackedCamera__GetVideoStreamTextureD3D11; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRTrackedCamera__GetVideoStreamTextureGL; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRTrackedCamera__GetVideoStreamTextureSize; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRTrackedCamera__HasCamera; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRTrackedCamera__ReleaseVideoStreamTextureGL; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRTrackedCamera__ReleaseVideoStreamingService; }

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRTrackedCamera_TypeDefinitionIndex = 36783;

	struct alignas(8) IVRTrackedCamera
	{
		::ZenFulcrum::VR::OpenVRBinding::IVRTrackedCamera__GetCameraErrorNameFromEnum* GetCameraErrorNameFromEnum; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::IVRTrackedCamera__HasCamera* HasCamera; // 0x18
		::ZenFulcrum::VR::OpenVRBinding::IVRTrackedCamera__GetCameraFrameSize* GetCameraFrameSize; // 0x20
		::ZenFulcrum::VR::OpenVRBinding::IVRTrackedCamera__GetCameraIntrinsics* GetCameraIntrinsics; // 0x28
		::ZenFulcrum::VR::OpenVRBinding::IVRTrackedCamera__GetCameraProjection* GetCameraProjection; // 0x30
		::ZenFulcrum::VR::OpenVRBinding::IVRTrackedCamera__AcquireVideoStreamingService* AcquireVideoStreamingService; // 0x38
		::ZenFulcrum::VR::OpenVRBinding::IVRTrackedCamera__ReleaseVideoStreamingService* ReleaseVideoStreamingService; // 0x40
		::ZenFulcrum::VR::OpenVRBinding::IVRTrackedCamera__GetVideoStreamFrameBuffer* GetVideoStreamFrameBuffer; // 0x48
		::ZenFulcrum::VR::OpenVRBinding::IVRTrackedCamera__GetVideoStreamTextureSize* GetVideoStreamTextureSize; // 0x50
		::ZenFulcrum::VR::OpenVRBinding::IVRTrackedCamera__GetVideoStreamTextureD3D11* GetVideoStreamTextureD3D11; // 0x58
		::ZenFulcrum::VR::OpenVRBinding::IVRTrackedCamera__GetVideoStreamTextureGL* GetVideoStreamTextureGL; // 0x60
		::ZenFulcrum::VR::OpenVRBinding::IVRTrackedCamera__ReleaseVideoStreamTextureGL* ReleaseVideoStreamTextureGL; // 0x68
	};
}
