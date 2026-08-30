#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRTrackedCameraError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__ACQUIREVIDEOSTREAMINGSERVICE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFC48A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__ACQUIREVIDEOSTREAMINGSERVICE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFC4910)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__ACQUIREVIDEOSTREAMINGSERVICE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFC4890)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__ACQUIREVIDEOSTREAMINGSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFC4820)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRTrackedCamera__AcquireVideoStreamingService_TypeDefinitionIndex = 37648;

	class IVRTrackedCamera__AcquireVideoStreamingService : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__ACQUIREVIDEOSTREAMINGSERVICE__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError Invoke(::System::UInt32 a1, ::System::UInt64& a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::UInt32, ::System::UInt64&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__ACQUIREVIDEOSTREAMINGSERVICE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::System::UInt64& a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::UInt64&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__ACQUIREVIDEOSTREAMINGSERVICE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError EndInvoke(::System::UInt64& a1, ::System::IAsyncResult* a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::UInt64&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__ACQUIREVIDEOSTREAMINGSERVICE_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
