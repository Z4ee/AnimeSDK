#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/CameraVideoStreamFrameHeader_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRTrackedCameraError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRTrackedCameraFrameType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdMatrix44_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdVector2_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/IVRTrackedCamera.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VRTextureBounds_t.h"

namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_ACQUIREVIDEOSTREAMINGSERVICE_OFFSET UNITYSDK_OFFSET(0x1A6E50F0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_GETCAMERAERRORNAMEFROMENUM_OFFSET UNITYSDK_OFFSET(0x1A6E5010)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_GETCAMERAFRAMESIZE_OFFSET UNITYSDK_OFFSET(0x1A6E5070)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_GETCAMERAINTRINSICS_OFFSET UNITYSDK_OFFSET(0x1A6E50B0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_GETCAMERAPROJECTION_OFFSET UNITYSDK_OFFSET(0x1A6E50D0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_GETVIDEOSTREAMFRAMEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A6E5140)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_GETVIDEOSTREAMTEXTURED3D11_OFFSET UNITYSDK_OFFSET(0x1A6E51A0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_GETVIDEOSTREAMTEXTUREGL_OFFSET UNITYSDK_OFFSET(0x1A6E51C0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_GETVIDEOSTREAMTEXTURESIZE_OFFSET UNITYSDK_OFFSET(0x1A6E5160)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_HASCAMERA_OFFSET UNITYSDK_OFFSET(0x1A6E5050)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_RELEASEVIDEOSTREAMINGSERVICE_OFFSET UNITYSDK_OFFSET(0x1A6E5120)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_RELEASEVIDEOSTREAMTEXTUREGL_OFFSET UNITYSDK_OFFSET(0x1A6E51F0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6E4F10)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int CVRTrackedCamera_TypeDefinitionIndex = 35959;

	class CVRTrackedCamera : public ::System::Object
	{
	public:
		::ZenFulcrum::VR::OpenVRBinding::IVRTrackedCamera FnTable; // 0x10

		::System::Void _ctor(::System::IntPtr pInterface)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA__CTOR_OFFSET))(this, pInterface);
		}

		::System::String* GetCameraErrorNameFromEnum(::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError eCameraError)
		{
			return ((::System::String*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_GETCAMERAERRORNAMEFROMENUM_OFFSET))(this, eCameraError);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError HasCamera(::System::UInt32 nDeviceIndex, ::System::Boolean& pHasCamera)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::UInt32, ::System::Boolean&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_HASCAMERA_OFFSET))(this, nDeviceIndex, pHasCamera);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError GetCameraFrameSize(::System::UInt32 nDeviceIndex, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType eFrameType, ::System::UInt32& pnWidth, ::System::UInt32& pnHeight, ::System::UInt32& pnFrameBufferSize)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_GETCAMERAFRAMESIZE_OFFSET))(this, nDeviceIndex, eFrameType, pnWidth, pnHeight, pnFrameBufferSize);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError GetCameraIntrinsics(::System::UInt32 nDeviceIndex, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType eFrameType, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t& pFocalLength, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t& pCenter)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t&, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_GETCAMERAINTRINSICS_OFFSET))(this, nDeviceIndex, eFrameType, pFocalLength, pCenter);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError GetCameraProjection(::System::UInt32 nDeviceIndex, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType eFrameType, ::System::Single flZNear, ::System::Single flZFar, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix44_t& pProjection)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType, ::System::Single, ::System::Single, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix44_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_GETCAMERAPROJECTION_OFFSET))(this, nDeviceIndex, eFrameType, flZNear, flZFar, pProjection);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError AcquireVideoStreamingService(::System::UInt32 nDeviceIndex, ::System::UInt64& pHandle)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::UInt32, ::System::UInt64&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_ACQUIREVIDEOSTREAMINGSERVICE_OFFSET))(this, nDeviceIndex, pHandle);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError ReleaseVideoStreamingService(::System::UInt64 hTrackedCamera)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_RELEASEVIDEOSTREAMINGSERVICE_OFFSET))(this, hTrackedCamera);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError GetVideoStreamFrameBuffer(::System::UInt64 hTrackedCamera, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType eFrameType, ::System::IntPtr pFrameBuffer, ::System::UInt32 nFrameBufferSize, ::ZenFulcrum::VR::OpenVRBinding::CameraVideoStreamFrameHeader_t& pFrameHeader, ::System::UInt32 nFrameHeaderSize)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType, ::System::IntPtr, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::CameraVideoStreamFrameHeader_t&, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_GETVIDEOSTREAMFRAMEBUFFER_OFFSET))(this, hTrackedCamera, eFrameType, pFrameBuffer, nFrameBufferSize, pFrameHeader, nFrameHeaderSize);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError GetVideoStreamTextureSize(::System::UInt32 nDeviceIndex, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType eFrameType, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t& pTextureBounds, ::System::UInt32& pnWidth, ::System::UInt32& pnHeight)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_GETVIDEOSTREAMTEXTURESIZE_OFFSET))(this, nDeviceIndex, eFrameType, pTextureBounds, pnWidth, pnHeight);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError GetVideoStreamTextureD3D11(::System::UInt64 hTrackedCamera, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType eFrameType, ::System::IntPtr pD3D11DeviceOrResource, ::System::IntPtr& ppD3D11ShaderResourceView, ::ZenFulcrum::VR::OpenVRBinding::CameraVideoStreamFrameHeader_t& pFrameHeader, ::System::UInt32 nFrameHeaderSize)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType, ::System::IntPtr, ::System::IntPtr&, ::ZenFulcrum::VR::OpenVRBinding::CameraVideoStreamFrameHeader_t&, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_GETVIDEOSTREAMTEXTURED3D11_OFFSET))(this, hTrackedCamera, eFrameType, pD3D11DeviceOrResource, ppD3D11ShaderResourceView, pFrameHeader, nFrameHeaderSize);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError GetVideoStreamTextureGL(::System::UInt64 hTrackedCamera, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType eFrameType, ::System::UInt32& pglTextureId, ::ZenFulcrum::VR::OpenVRBinding::CameraVideoStreamFrameHeader_t& pFrameHeader, ::System::UInt32 nFrameHeaderSize)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType, ::System::UInt32&, ::ZenFulcrum::VR::OpenVRBinding::CameraVideoStreamFrameHeader_t&, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_GETVIDEOSTREAMTEXTUREGL_OFFSET))(this, hTrackedCamera, eFrameType, pglTextureId, pFrameHeader, nFrameHeaderSize);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError ReleaseVideoStreamTextureGL(::System::UInt64 hTrackedCamera, ::System::UInt32 glTextureId)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::UInt64, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_RELEASEVIDEOSTREAMTEXTUREGL_OFFSET))(this, hTrackedCamera, glTextureId);
		}
	};
}
