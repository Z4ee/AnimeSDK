#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRTrackedCameraError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRTrackedCameraFrameType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VRTextureBounds_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETVIDEOSTREAMTEXTURESIZE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A727850)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETVIDEOSTREAMTEXTURESIZE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A727950)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETVIDEOSTREAMTEXTURESIZE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A727400)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETVIDEOSTREAMTEXTURESIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7273E0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRTrackedCamera__GetVideoStreamTextureSize_TypeDefinitionIndex = 35710;

	class IVRTrackedCamera__GetVideoStreamTextureSize : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETVIDEOSTREAMTEXTURESIZE__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError Invoke(::System::UInt32 nDeviceIndex, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType eFrameType, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t& pTextureBounds, ::System::UInt32& pnWidth, ::System::UInt32& pnHeight)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETVIDEOSTREAMTEXTURESIZE_INVOKE_OFFSET))(this, nDeviceIndex, eFrameType, pTextureBounds, pnWidth, pnHeight);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 nDeviceIndex, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType eFrameType, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t& pTextureBounds, ::System::UInt32& pnWidth, ::System::UInt32& pnHeight, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t&, ::System::UInt32&, ::System::UInt32&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETVIDEOSTREAMTEXTURESIZE_BEGININVOKE_OFFSET))(this, nDeviceIndex, eFrameType, pTextureBounds, pnWidth, pnHeight, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError EndInvoke(::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t& pTextureBounds, ::System::UInt32& pnWidth, ::System::UInt32& pnHeight, ::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t&, ::System::UInt32&, ::System::UInt32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETVIDEOSTREAMTEXTURESIZE_ENDINVOKE_OFFSET))(this, pTextureBounds, pnWidth, pnHeight, result);
		}
	};
}
