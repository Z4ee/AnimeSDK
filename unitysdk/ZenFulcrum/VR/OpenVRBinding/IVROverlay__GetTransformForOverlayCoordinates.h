#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETrackingUniverseOrigin.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdMatrix34_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdVector2_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETTRANSFORMFOROVERLAYCOORDINATES_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CC3D80)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETTRANSFORMFOROVERLAYCOORDINATES_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CC3E50)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETTRANSFORMFOROVERLAYCOORDINATES_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CC3980)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETTRANSFORMFOROVERLAYCOORDINATES__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC3960)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__GetTransformForOverlayCoordinates_TypeDefinitionIndex = 30145;

	class IVROverlay__GetTransformForOverlayCoordinates : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETTRANSFORMFOROVERLAYCOORDINATES__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin eTrackingOrigin, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t coordinatesInOverlay, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pmatTransform)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETTRANSFORMFOROVERLAYCOORDINATES_INVOKE_OFFSET))(this, ulOverlayHandle, eTrackingOrigin, coordinatesInOverlay, pmatTransform);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin eTrackingOrigin, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t coordinatesInOverlay, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pmatTransform, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETTRANSFORMFOROVERLAYCOORDINATES_BEGININVOKE_OFFSET))(this, ulOverlayHandle, eTrackingOrigin, coordinatesInOverlay, pmatTransform, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pmatTransform, ::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETTRANSFORMFOROVERLAYCOORDINATES_ENDINVOKE_OFFSET))(this, pmatTransform, result);
		}
	};
}
