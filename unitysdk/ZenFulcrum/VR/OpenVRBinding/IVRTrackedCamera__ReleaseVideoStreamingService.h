#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRTrackedCameraError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__RELEASEVIDEOSTREAMINGSERVICE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A7284E0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__RELEASEVIDEOSTREAMINGSERVICE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A728530)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__RELEASEVIDEOSTREAMINGSERVICE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A7281F0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__RELEASEVIDEOSTREAMINGSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7281D0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRTrackedCamera__ReleaseVideoStreamingService_TypeDefinitionIndex = 35708;

	class IVRTrackedCamera__ReleaseVideoStreamingService : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__RELEASEVIDEOSTREAMINGSERVICE__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError Invoke(::System::UInt64 hTrackedCamera)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__RELEASEVIDEOSTREAMINGSERVICE_INVOKE_OFFSET))(this, hTrackedCamera);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 hTrackedCamera, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__RELEASEVIDEOSTREAMINGSERVICE_BEGININVOKE_OFFSET))(this, hTrackedCamera, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__RELEASEVIDEOSTREAMINGSERVICE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
