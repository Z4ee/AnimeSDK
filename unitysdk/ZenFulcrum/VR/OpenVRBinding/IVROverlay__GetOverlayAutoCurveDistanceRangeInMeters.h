#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYAUTOCURVEDISTANCERANGEINMETERS_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B51BA80)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYAUTOCURVEDISTANCERANGEINMETERS_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B51BB10)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYAUTOCURVEDISTANCERANGEINMETERS_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B51BA60)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYAUTOCURVEDISTANCERANGEINMETERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B51B9F0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters_TypeDefinitionIndex = 36146;

	class IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYAUTOCURVEDISTANCERANGEINMETERS__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::UInt64 a1, ::System::Single& a2, ::System::Single& a3)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYAUTOCURVEDISTANCERANGEINMETERS_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 a1, ::System::Single& a2, ::System::Single& a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::Single&, ::System::Single&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYAUTOCURVEDISTANCERANGEINMETERS_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::System::Single& a1, ::System::Single& a2, ::System::IAsyncResult* a3)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYAUTOCURVEDISTANCERANGEINMETERS_ENDINVOKE_OFFSET))(this, a1, a2, a3);
		}
	};
}
