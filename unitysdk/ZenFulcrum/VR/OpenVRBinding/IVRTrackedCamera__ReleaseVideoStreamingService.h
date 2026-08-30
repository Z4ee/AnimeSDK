#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRTrackedCameraError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__RELEASEVIDEOSTREAMINGSERVICE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EF5C7E0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__RELEASEVIDEOSTREAMINGSERVICE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EF5C830)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__RELEASEVIDEOSTREAMINGSERVICE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EF5C7D0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__RELEASEVIDEOSTREAMINGSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF5C760)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRTrackedCamera__ReleaseVideoStreamingService_TypeDefinitionIndex = 37649;

	class IVRTrackedCamera__ReleaseVideoStreamingService : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__RELEASEVIDEOSTREAMINGSERVICE__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError Invoke(::System::UInt64 a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__RELEASEVIDEOSTREAMINGSERVICE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__RELEASEVIDEOSTREAMINGSERVICE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__RELEASEVIDEOSTREAMINGSERVICE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
