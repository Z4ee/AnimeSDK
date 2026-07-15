#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__CREATEDASHBOARDOVERLAY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B227270)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__CREATEDASHBOARDOVERLAY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B2272F0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__CREATEDASHBOARDOVERLAY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B227240)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__CREATEDASHBOARDOVERLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2271C0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__CreateDashboardOverlay_TypeDefinitionIndex = 36967;

	class IVROverlay__CreateDashboardOverlay : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__CREATEDASHBOARDOVERLAY__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::String* a1, ::System::String* a2, ::System::UInt64& a3, ::System::UInt64& a4)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::String*, ::System::String*, ::System::UInt64&, ::System::UInt64&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__CREATEDASHBOARDOVERLAY_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::String* a2, ::System::UInt64& a3, ::System::UInt64& a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::System::UInt64&, ::System::UInt64&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__CREATEDASHBOARDOVERLAY_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::System::UInt64& a1, ::System::UInt64& a2, ::System::IAsyncResult* a3)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64&, ::System::UInt64&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__CREATEDASHBOARDOVERLAY_ENDINVOKE_OFFSET))(this, a1, a2, a3);
		}
	};
}
