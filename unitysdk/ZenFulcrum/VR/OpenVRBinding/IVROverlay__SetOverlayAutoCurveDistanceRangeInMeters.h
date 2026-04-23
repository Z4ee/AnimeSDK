#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYAUTOCURVEDISTANCERANGEINMETERS_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A703570)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYAUTOCURVEDISTANCERANGEINMETERS_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A703610)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYAUTOCURVEDISTANCERANGEINMETERS_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A703210)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYAUTOCURVEDISTANCERANGEINMETERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7031F0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters_TypeDefinitionIndex = 35845;

	class IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYAUTOCURVEDISTANCERANGEINMETERS__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::UInt64 ulOverlayHandle, ::System::Single fMinDistanceInMeters, ::System::Single fMaxDistanceInMeters)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYAUTOCURVEDISTANCERANGEINMETERS_INVOKE_OFFSET))(this, ulOverlayHandle, fMinDistanceInMeters, fMaxDistanceInMeters);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 ulOverlayHandle, ::System::Single fMinDistanceInMeters, ::System::Single fMaxDistanceInMeters, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::Single, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYAUTOCURVEDISTANCERANGEINMETERS_BEGININVOKE_OFFSET))(this, ulOverlayHandle, fMinDistanceInMeters, fMaxDistanceInMeters, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYAUTOCURVEDISTANCERANGEINMETERS_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
