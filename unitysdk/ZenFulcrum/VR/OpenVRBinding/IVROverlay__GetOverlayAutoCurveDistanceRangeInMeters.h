#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYAUTOCURVEDISTANCERANGEINMETERS_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CBCAA0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYAUTOCURVEDISTANCERANGEINMETERS_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CBCB30)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYAUTOCURVEDISTANCERANGEINMETERS_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CBC700)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYAUTOCURVEDISTANCERANGEINMETERS__CTOR_OFFSET UNITYSDK_OFFSET(0x18CBC6E0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters_TypeDefinitionIndex = 30126;

	class IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYAUTOCURVEDISTANCERANGEINMETERS__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::UInt64 ulOverlayHandle, ::System::Single& pfMinDistanceInMeters, ::System::Single& pfMaxDistanceInMeters)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYAUTOCURVEDISTANCERANGEINMETERS_INVOKE_OFFSET))(this, ulOverlayHandle, pfMinDistanceInMeters, pfMaxDistanceInMeters);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 ulOverlayHandle, ::System::Single& pfMinDistanceInMeters, ::System::Single& pfMaxDistanceInMeters, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::Single&, ::System::Single&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYAUTOCURVEDISTANCERANGEINMETERS_BEGININVOKE_OFFSET))(this, ulOverlayHandle, pfMinDistanceInMeters, pfMaxDistanceInMeters, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::System::Single& pfMinDistanceInMeters, ::System::Single& pfMaxDistanceInMeters, ::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYAUTOCURVEDISTANCERANGEINMETERS_ENDINVOKE_OFFSET))(this, pfMinDistanceInMeters, pfMaxDistanceInMeters, result);
		}
	};
}
