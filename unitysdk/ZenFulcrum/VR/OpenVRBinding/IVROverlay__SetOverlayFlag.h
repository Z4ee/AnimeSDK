#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VROverlayFlags.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYFLAG_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A703E90)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYFLAG_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A703F40)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYFLAG_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A703B00)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A703AE0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__SetOverlayFlag_TypeDefinitionIndex = 35833;

	class IVROverlay__SetOverlayFlag : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYFLAG__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::VROverlayFlags eOverlayFlag, ::System::Boolean bEnabled)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::VROverlayFlags, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYFLAG_INVOKE_OFFSET))(this, ulOverlayHandle, eOverlayFlag, bEnabled);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::VROverlayFlags eOverlayFlag, ::System::Boolean bEnabled, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::VROverlayFlags, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYFLAG_BEGININVOKE_OFFSET))(this, ulOverlayHandle, eOverlayFlag, bEnabled, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYFLAG_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
