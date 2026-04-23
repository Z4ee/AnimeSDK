#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/CameraVideoStreamFrameHeader_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRTrackedCameraError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRTrackedCameraFrameType.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETVIDEOSTREAMFRAMEBUFFER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A726730)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETVIDEOSTREAMFRAMEBUFFER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A726840)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETVIDEOSTREAMFRAMEBUFFER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A726300)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETVIDEOSTREAMFRAMEBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7262E0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRTrackedCamera__GetVideoStreamFrameBuffer_TypeDefinitionIndex = 35709;

	class IVRTrackedCamera__GetVideoStreamFrameBuffer : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETVIDEOSTREAMFRAMEBUFFER__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError Invoke(::System::UInt64 hTrackedCamera, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType eFrameType, ::System::IntPtr pFrameBuffer, ::System::UInt32 nFrameBufferSize, ::ZenFulcrum::VR::OpenVRBinding::CameraVideoStreamFrameHeader_t& pFrameHeader, ::System::UInt32 nFrameHeaderSize)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType, ::System::IntPtr, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::CameraVideoStreamFrameHeader_t&, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETVIDEOSTREAMFRAMEBUFFER_INVOKE_OFFSET))(this, hTrackedCamera, eFrameType, pFrameBuffer, nFrameBufferSize, pFrameHeader, nFrameHeaderSize);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 hTrackedCamera, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType eFrameType, ::System::IntPtr pFrameBuffer, ::System::UInt32 nFrameBufferSize, ::ZenFulcrum::VR::OpenVRBinding::CameraVideoStreamFrameHeader_t& pFrameHeader, ::System::UInt32 nFrameHeaderSize, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType, ::System::IntPtr, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::CameraVideoStreamFrameHeader_t&, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETVIDEOSTREAMFRAMEBUFFER_BEGININVOKE_OFFSET))(this, hTrackedCamera, eFrameType, pFrameBuffer, nFrameBufferSize, pFrameHeader, nFrameHeaderSize, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError EndInvoke(::ZenFulcrum::VR::OpenVRBinding::CameraVideoStreamFrameHeader_t& pFrameHeader, ::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::CameraVideoStreamFrameHeader_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETVIDEOSTREAMFRAMEBUFFER_ENDINVOKE_OFFSET))(this, pFrameHeader, result);
		}
	};
}
