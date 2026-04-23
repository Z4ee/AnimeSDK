#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/CameraVideoStreamFrameHeader_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRTrackedCameraError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRTrackedCameraFrameType.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETVIDEOSTREAMTEXTUREGL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A7272C0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETVIDEOSTREAMTEXTUREGL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A7273B0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETVIDEOSTREAMTEXTUREGL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A726E90)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETVIDEOSTREAMTEXTUREGL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A726E70)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRTrackedCamera__GetVideoStreamTextureGL_TypeDefinitionIndex = 35712;

	class IVRTrackedCamera__GetVideoStreamTextureGL : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETVIDEOSTREAMTEXTUREGL__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError Invoke(::System::UInt64 hTrackedCamera, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType eFrameType, ::System::UInt32& pglTextureId, ::ZenFulcrum::VR::OpenVRBinding::CameraVideoStreamFrameHeader_t& pFrameHeader, ::System::UInt32 nFrameHeaderSize)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType, ::System::UInt32&, ::ZenFulcrum::VR::OpenVRBinding::CameraVideoStreamFrameHeader_t&, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETVIDEOSTREAMTEXTUREGL_INVOKE_OFFSET))(this, hTrackedCamera, eFrameType, pglTextureId, pFrameHeader, nFrameHeaderSize);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 hTrackedCamera, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType eFrameType, ::System::UInt32& pglTextureId, ::ZenFulcrum::VR::OpenVRBinding::CameraVideoStreamFrameHeader_t& pFrameHeader, ::System::UInt32 nFrameHeaderSize, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType, ::System::UInt32&, ::ZenFulcrum::VR::OpenVRBinding::CameraVideoStreamFrameHeader_t&, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETVIDEOSTREAMTEXTUREGL_BEGININVOKE_OFFSET))(this, hTrackedCamera, eFrameType, pglTextureId, pFrameHeader, nFrameHeaderSize, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError EndInvoke(::System::UInt32& pglTextureId, ::ZenFulcrum::VR::OpenVRBinding::CameraVideoStreamFrameHeader_t& pFrameHeader, ::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::UInt32&, ::ZenFulcrum::VR::OpenVRBinding::CameraVideoStreamFrameHeader_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETVIDEOSTREAMTEXTUREGL_ENDINVOKE_OFFSET))(this, pglTextureId, pFrameHeader, result);
		}
	};
}
