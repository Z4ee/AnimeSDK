#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRTrackedCameraError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRTrackedCameraFrameType.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETCAMERAFRAMESIZE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B527F10)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETCAMERAFRAMESIZE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B528010)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETCAMERAFRAMESIZE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B527EE0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETCAMERAFRAMESIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B527E70)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRTrackedCamera__GetCameraFrameSize_TypeDefinitionIndex = 36004;

	class IVRTrackedCamera__GetCameraFrameSize : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETCAMERAFRAMESIZE__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError Invoke(::System::UInt32 a1, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType a2, ::System::UInt32& a3, ::System::UInt32& a4, ::System::UInt32& a5)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETCAMERAFRAMESIZE_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType a2, ::System::UInt32& a3, ::System::UInt32& a4, ::System::UInt32& a5, ::System::AsyncCallback* a6, ::System::Object* a7)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETCAMERAFRAMESIZE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError EndInvoke(::System::UInt32& a1, ::System::UInt32& a2, ::System::UInt32& a3, ::System::IAsyncResult* a4)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError(*)(::PVOID, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETCAMERAFRAMESIZE_ENDINVOKE_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
