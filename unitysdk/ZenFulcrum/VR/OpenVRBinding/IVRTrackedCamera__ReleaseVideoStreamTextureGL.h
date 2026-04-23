#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRTrackedCameraError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__RELEASEVIDEOSTREAMTEXTUREGL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A728130)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__RELEASEVIDEOSTREAMTEXTUREGL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A7281A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__RELEASEVIDEOSTREAMTEXTUREGL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A727DC0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__RELEASEVIDEOSTREAMTEXTUREGL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A727DA0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRTrackedCamera__ReleaseVideoStreamTextureGL_TypeDefinitionIndex = 35713;

	class IVRTrackedCamera__ReleaseVideoStreamTextureGL : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__RELEASEVIDEOSTREAMTEXTUREGL__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError Invoke(::System::UInt64 hTrackedCamera, ::System::UInt32 glTextureId)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::UInt64, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__RELEASEVIDEOSTREAMTEXTUREGL_INVOKE_OFFSET))(this, hTrackedCamera, glTextureId);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 hTrackedCamera, ::System::UInt32 glTextureId, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__RELEASEVIDEOSTREAMTEXTUREGL_BEGININVOKE_OFFSET))(this, hTrackedCamera, glTextureId, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__RELEASEVIDEOSTREAMTEXTUREGL_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
