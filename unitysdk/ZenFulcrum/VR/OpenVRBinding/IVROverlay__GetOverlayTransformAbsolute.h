#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETrackingUniverseOrigin.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdMatrix34_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTRANSFORMABSOLUTE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CC1F00)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTRANSFORMABSOLUTE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CC1FB0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTRANSFORMABSOLUTE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CC1B60)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTRANSFORMABSOLUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC1B40)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__GetOverlayTransformAbsolute_TypeDefinitionIndex = 30135;

	class IVROverlay__GetOverlayTransformAbsolute : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTRANSFORMABSOLUTE__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin& peTrackingOrigin, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pmatTrackingOriginToOverlayTransform)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin&, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTRANSFORMABSOLUTE_INVOKE_OFFSET))(this, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin& peTrackingOrigin, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pmatTrackingOriginToOverlayTransform, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin&, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTRANSFORMABSOLUTE_BEGININVOKE_OFFSET))(this, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin& peTrackingOrigin, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pmatTrackingOriginToOverlayTransform, ::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin&, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTRANSFORMABSOLUTE_ENDINVOKE_OFFSET))(this, peTrackingOrigin, pmatTrackingOriginToOverlayTransform, result);
		}
	};
}
