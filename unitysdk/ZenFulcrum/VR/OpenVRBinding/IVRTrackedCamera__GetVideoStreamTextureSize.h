#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRTrackedCameraError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRTrackedCameraFrameType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VRTextureBounds_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETVIDEOSTREAMTEXTURESIZE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B528A30)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETVIDEOSTREAMTEXTURESIZE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B528B30)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETVIDEOSTREAMTEXTURESIZE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B528A00)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETVIDEOSTREAMTEXTURESIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B528990)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRTrackedCamera__GetVideoStreamTextureSize_TypeDefinitionIndex = 36010;

	class IVRTrackedCamera__GetVideoStreamTextureSize : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETVIDEOSTREAMTEXTURESIZE__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError Invoke(::System::UInt32 a1, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType a2, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t& a3, ::System::UInt32& a4, ::System::UInt32& a5)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETVIDEOSTREAMTEXTURESIZE_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType a2, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t& a3, ::System::UInt32& a4, ::System::UInt32& a5, ::System::AsyncCallback* a6, ::System::Object* a7)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t&, ::System::UInt32&, ::System::UInt32&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETVIDEOSTREAMTEXTURESIZE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError EndInvoke(::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t& a1, ::System::UInt32& a2, ::System::UInt32& a3, ::System::IAsyncResult* a4)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t&, ::System::UInt32&, ::System::UInt32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETVIDEOSTREAMTEXTURESIZE_ENDINVOKE_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
