#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRTrackedCameraError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__HASCAMERA_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A727D00)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__HASCAMERA_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A727D70)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__HASCAMERA_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A7279B0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__HASCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A727990)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRTrackedCamera__HasCamera_TypeDefinitionIndex = 35703;

	class IVRTrackedCamera__HasCamera : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__HASCAMERA__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError Invoke(::System::UInt32 nDeviceIndex, ::System::Boolean& pHasCamera)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::UInt32, ::System::Boolean&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__HASCAMERA_INVOKE_OFFSET))(this, nDeviceIndex, pHasCamera);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 nDeviceIndex, ::System::Boolean& pHasCamera, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::Boolean&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__HASCAMERA_BEGININVOKE_OFFSET))(this, nDeviceIndex, pHasCamera, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError EndInvoke(::System::Boolean& pHasCamera, ::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::Boolean&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__HASCAMERA_ENDINVOKE_OFFSET))(this, pHasCamera, result);
		}
	};
}
