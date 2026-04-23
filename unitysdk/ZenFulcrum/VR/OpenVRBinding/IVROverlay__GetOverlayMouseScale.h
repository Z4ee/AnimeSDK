#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdVector2_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYMOUSESCALE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6FA490)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYMOUSESCALE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6FA520)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYMOUSESCALE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6FA120)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYMOUSESCALE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6FA100)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__GetOverlayMouseScale_TypeDefinitionIndex = 35869;

	class IVROverlay__GetOverlayMouseScale : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYMOUSESCALE__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t& pvecMouseScale)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYMOUSESCALE_INVOKE_OFFSET))(this, ulOverlayHandle, pvecMouseScale);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t& pvecMouseScale, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYMOUSESCALE_BEGININVOKE_OFFSET))(this, ulOverlayHandle, pvecMouseScale, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t& pvecMouseScale, ::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYMOUSESCALE_ENDINVOKE_OFFSET))(this, pvecMouseScale, result);
		}
	};
}
