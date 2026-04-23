#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRTrackedCameraError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRTrackedCameraFrameType.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETCAMERAFRAMESIZE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A725710)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETCAMERAFRAMESIZE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A725810)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETCAMERAFRAMESIZE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A7252C0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETCAMERAFRAMESIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7252A0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRTrackedCamera__GetCameraFrameSize_TypeDefinitionIndex = 35704;

	class IVRTrackedCamera__GetCameraFrameSize : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETCAMERAFRAMESIZE__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError Invoke(::System::UInt32 nDeviceIndex, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType eFrameType, ::System::UInt32& pnWidth, ::System::UInt32& pnHeight, ::System::UInt32& pnFrameBufferSize)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETCAMERAFRAMESIZE_INVOKE_OFFSET))(this, nDeviceIndex, eFrameType, pnWidth, pnHeight, pnFrameBufferSize);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 nDeviceIndex, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType eFrameType, ::System::UInt32& pnWidth, ::System::UInt32& pnHeight, ::System::UInt32& pnFrameBufferSize, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETCAMERAFRAMESIZE_BEGININVOKE_OFFSET))(this, nDeviceIndex, eFrameType, pnWidth, pnHeight, pnFrameBufferSize, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError EndInvoke(::System::UInt32& pnWidth, ::System::UInt32& pnHeight, ::System::UInt32& pnFrameBufferSize, ::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETCAMERAFRAMESIZE_ENDINVOKE_OFFSET))(this, pnWidth, pnHeight, pnFrameBufferSize, result);
		}
	};
}
