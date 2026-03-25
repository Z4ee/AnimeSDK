#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETrackingUniverseOrigin.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdMatrix34_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYTRANSFORMABSOLUTE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CCCB10)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYTRANSFORMABSOLUTE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CCCBC0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYTRANSFORMABSOLUTE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CCC780)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYTRANSFORMABSOLUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18CCC760)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__SetOverlayTransformAbsolute_TypeDefinitionIndex = 30134;

	class IVROverlay__SetOverlayTransformAbsolute : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYTRANSFORMABSOLUTE__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin eTrackingOrigin, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pmatTrackingOriginToOverlayTransform)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYTRANSFORMABSOLUTE_INVOKE_OFFSET))(this, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin eTrackingOrigin, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pmatTrackingOriginToOverlayTransform, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYTRANSFORMABSOLUTE_BEGININVOKE_OFFSET))(this, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pmatTrackingOriginToOverlayTransform, ::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYTRANSFORMABSOLUTE_ENDINVOKE_OFFSET))(this, pmatTrackingOriginToOverlayTransform, result);
		}
	};
}
