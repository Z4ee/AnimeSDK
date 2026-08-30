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

#define ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_ACQUIREVIDEOSTREAMINGSERVICE_OFFSET UNITYSDK_OFFSET(0x1D7FC5D0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_GETCAMERAERRORNAMEFROMENUM_OFFSET UNITYSDK_OFFSET(0x1D7FC470)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_GETCAMERAFRAMESIZE_OFFSET UNITYSDK_OFFSET(0x1D7FC4F0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_GETCAMERAINTRINSICS_OFFSET UNITYSDK_OFFSET(0x1D7FC550)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_GETCAMERAPROJECTION_OFFSET UNITYSDK_OFFSET(0x1D7FC590)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_GETVIDEOSTREAMFRAMEBUFFER_OFFSET UNITYSDK_OFFSET(0x1D7FC630)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_GETVIDEOSTREAMTEXTURED3D11_OFFSET UNITYSDK_OFFSET(0x1D7FC6E0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_GETVIDEOSTREAMTEXTUREGL_OFFSET UNITYSDK_OFFSET(0x1D7FC740)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_GETVIDEOSTREAMTEXTURESIZE_OFFSET UNITYSDK_OFFSET(0x1D7FC690)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_HASCAMERA_OFFSET UNITYSDK_OFFSET(0x1D7FC4C0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_RELEASEVIDEOSTREAMINGSERVICE_OFFSET UNITYSDK_OFFSET(0x1D7FC600)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_RELEASEVIDEOSTREAMTEXTUREGL_OFFSET UNITYSDK_OFFSET(0x1D7FC790)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7FC370)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int CVRTrackedCamera_TypeDefinitionIndex = 37900;

	class CVRTrackedCamera : public ::System::Object
	{
	public:
		::ZenFulcrum::VR::OpenVRBinding::IVRTrackedCamera FnTable; // 0x10

		::System::Void _ctor(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA__CTOR_OFFSET))(this, a1);
		}

		::System::String* GetCameraErrorNameFromEnum(::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError a1)
		{
			return ((::System::String*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_GETCAMERAERRORNAMEFROMENUM_OFFSET))(this, a1);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError HasCamera(::System::UInt32 a1, ::System::Boolean& a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::UInt32, ::System::Boolean&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_HASCAMERA_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError GetCameraFrameSize(::System::UInt32 a1, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType a2, ::System::UInt32& a3, ::System::UInt32& a4, ::System::UInt32& a5)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_GETCAMERAFRAMESIZE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError GetCameraIntrinsics(::System::UInt32 a1, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType a2, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t& a3, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t& a4)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t&, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_GETCAMERAINTRINSICS_OFFSET))(this, a1, a2, a3, a4);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError GetCameraProjection(::System::UInt32 a1, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType a2, ::System::Single a3, ::System::Single a4, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix44_t& a5)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType, ::System::Single, ::System::Single, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix44_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_GETCAMERAPROJECTION_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError AcquireVideoStreamingService(::System::UInt32 a1, ::System::UInt64& a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::UInt32, ::System::UInt64&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_ACQUIREVIDEOSTREAMINGSERVICE_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError ReleaseVideoStreamingService(::System::UInt64 a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_RELEASEVIDEOSTREAMINGSERVICE_OFFSET))(this, a1);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError GetVideoStreamFrameBuffer(::System::UInt64 a1, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType a2, ::System::IntPtr a3, ::System::UInt32 a4, ::ZenFulcrum::VR::OpenVRBinding::CameraVideoStreamFrameHeader_t& a5, ::System::UInt32 a6)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType, ::System::IntPtr, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::CameraVideoStreamFrameHeader_t&, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_GETVIDEOSTREAMFRAMEBUFFER_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError GetVideoStreamTextureSize(::System::UInt32 a1, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType a2, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t& a3, ::System::UInt32& a4, ::System::UInt32& a5)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_GETVIDEOSTREAMTEXTURESIZE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError GetVideoStreamTextureD3D11(::System::UInt64 a1, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType a2, ::System::IntPtr a3, ::System::IntPtr& a4, ::ZenFulcrum::VR::OpenVRBinding::CameraVideoStreamFrameHeader_t& a5, ::System::UInt32 a6)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType, ::System::IntPtr, ::System::IntPtr&, ::ZenFulcrum::VR::OpenVRBinding::CameraVideoStreamFrameHeader_t&, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_GETVIDEOSTREAMTEXTURED3D11_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError GetVideoStreamTextureGL(::System::UInt64 a1, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType a2, ::System::UInt32& a3, ::ZenFulcrum::VR::OpenVRBinding::CameraVideoStreamFrameHeader_t& a4, ::System::UInt32 a5)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType, ::System::UInt32&, ::ZenFulcrum::VR::OpenVRBinding::CameraVideoStreamFrameHeader_t&, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_GETVIDEOSTREAMTEXTUREGL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError ReleaseVideoStreamTextureGL(::System::UInt64 a1, ::System::UInt32 a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::UInt64, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRTRACKEDCAMERA_RELEASEVIDEOSTREAMTEXTUREGL_OFFSET))(this, a1, a2);
		}
	};
}
