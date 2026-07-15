#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRTrackedCameraError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__RELEASEVIDEOSTREAMTEXTUREGL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D26B330)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__RELEASEVIDEOSTREAMTEXTUREGL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D26B3A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__RELEASEVIDEOSTREAMTEXTUREGL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D26B320)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__RELEASEVIDEOSTREAMTEXTUREGL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D26B2B0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRTrackedCamera__ReleaseVideoStreamTextureGL_TypeDefinitionIndex = 36795;

	class IVRTrackedCamera__ReleaseVideoStreamTextureGL : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__RELEASEVIDEOSTREAMTEXTUREGL__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError Invoke(::System::UInt64 a1, ::System::UInt32 a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::UInt64, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__RELEASEVIDEOSTREAMTEXTUREGL_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 a1, ::System::UInt32 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__RELEASEVIDEOSTREAMTEXTUREGL_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__RELEASEVIDEOSTREAMTEXTUREGL_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
