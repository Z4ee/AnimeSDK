#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRTrackedCameraError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__ACQUIREVIDEOSTREAMINGSERVICE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CE9900)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__ACQUIREVIDEOSTREAMINGSERVICE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CE9970)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__ACQUIREVIDEOSTREAMINGSERVICE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CE95B0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__ACQUIREVIDEOSTREAMINGSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x18CE9590)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRTrackedCamera__AcquireVideoStreamingService_TypeDefinitionIndex = 29987;

	class IVRTrackedCamera__AcquireVideoStreamingService : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__ACQUIREVIDEOSTREAMINGSERVICE__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError Invoke(::System::UInt32 nDeviceIndex, ::System::UInt64& pHandle)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::UInt32, ::System::UInt64&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__ACQUIREVIDEOSTREAMINGSERVICE_INVOKE_OFFSET))(this, nDeviceIndex, pHandle);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 nDeviceIndex, ::System::UInt64& pHandle, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::UInt64&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__ACQUIREVIDEOSTREAMINGSERVICE_BEGININVOKE_OFFSET))(this, nDeviceIndex, pHandle, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError EndInvoke(::System::UInt64& pHandle, ::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::UInt64&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__ACQUIREVIDEOSTREAMINGSERVICE_ENDINVOKE_OFFSET))(this, pHandle, result);
		}
	};
}
