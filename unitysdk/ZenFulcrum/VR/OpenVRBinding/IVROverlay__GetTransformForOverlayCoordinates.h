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

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETTRANSFORMFOROVERLAYCOORDINATES_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B51DCC0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETTRANSFORMFOROVERLAYCOORDINATES_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B51DD90)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETTRANSFORMFOROVERLAYCOORDINATES_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B51DC90)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETTRANSFORMFOROVERLAYCOORDINATES__CTOR_OFFSET UNITYSDK_OFFSET(0x1B51DC20)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__GetTransformForOverlayCoordinates_TypeDefinitionIndex = 36165;

	class IVROverlay__GetTransformForOverlayCoordinates : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETTRANSFORMFOROVERLAYCOORDINATES__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::UInt64 a1, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin a2, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t a3, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& a4)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETTRANSFORMFOROVERLAYCOORDINATES_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 a1, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin a2, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t a3, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETTRANSFORMFOROVERLAYCOORDINATES_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& a1, ::System::IAsyncResult* a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETTRANSFORMFOROVERLAYCOORDINATES_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
