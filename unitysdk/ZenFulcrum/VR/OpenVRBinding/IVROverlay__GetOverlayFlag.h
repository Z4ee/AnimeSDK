#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VROverlayFlags.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYFLAG_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CBD7C0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYFLAG_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CBD870)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYFLAG_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CBD430)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CBD410)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__GetOverlayFlag_TypeDefinitionIndex = 30114;

	class IVROverlay__GetOverlayFlag : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYFLAG__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::VROverlayFlags eOverlayFlag, ::System::Boolean& pbEnabled)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::VROverlayFlags, ::System::Boolean&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYFLAG_INVOKE_OFFSET))(this, ulOverlayHandle, eOverlayFlag, pbEnabled);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::VROverlayFlags eOverlayFlag, ::System::Boolean& pbEnabled, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::VROverlayFlags, ::System::Boolean&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYFLAG_BEGININVOKE_OFFSET))(this, ulOverlayHandle, eOverlayFlag, pbEnabled, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::System::Boolean& pbEnabled, ::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::Boolean&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYFLAG_ENDINVOKE_OFFSET))(this, pbEnabled, result);
		}
	};
}
