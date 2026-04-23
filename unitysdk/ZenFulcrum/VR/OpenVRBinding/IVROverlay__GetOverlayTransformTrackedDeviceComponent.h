#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTRANSFORMTRACKEDDEVICECOMPONENT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6FDD90)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTRANSFORMTRACKEDDEVICECOMPONENT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6FDE30)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTRANSFORMTRACKEDDEVICECOMPONENT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6FD9F0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTRANSFORMTRACKEDDEVICECOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6FD9D0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__GetOverlayTransformTrackedDeviceComponent_TypeDefinitionIndex = 35859;

	class IVROverlay__GetOverlayTransformTrackedDeviceComponent : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTRANSFORMTRACKEDDEVICECOMPONENT__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::UInt64 ulOverlayHandle, ::System::UInt32& punDeviceIndex, ::System::String* pchComponentName, ::System::UInt32 unComponentNameSize)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::UInt32&, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTRANSFORMTRACKEDDEVICECOMPONENT_INVOKE_OFFSET))(this, ulOverlayHandle, punDeviceIndex, pchComponentName, unComponentNameSize);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 ulOverlayHandle, ::System::UInt32& punDeviceIndex, ::System::String* pchComponentName, ::System::UInt32 unComponentNameSize, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::UInt32&, ::System::String*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTRANSFORMTRACKEDDEVICECOMPONENT_BEGININVOKE_OFFSET))(this, ulOverlayHandle, punDeviceIndex, pchComponentName, unComponentNameSize, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::System::UInt32& punDeviceIndex, ::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTRANSFORMTRACKEDDEVICECOMPONENT_ENDINVOKE_OFFSET))(this, punDeviceIndex, result);
		}
	};
}
