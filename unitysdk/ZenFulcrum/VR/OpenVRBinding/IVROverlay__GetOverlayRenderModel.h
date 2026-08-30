#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdColor_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYRENDERMODEL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFB9450)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYRENDERMODEL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFB9540)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYRENDERMODEL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFB9420)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYRENDERMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFB93B0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__GetOverlayRenderModel_TypeDefinitionIndex = 37792;

	class IVROverlay__GetOverlayRenderModel : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYRENDERMODEL__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 Invoke(::System::UInt64 a1, ::System::String* a2, ::System::UInt32 a3, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t& a4, ::ZenFulcrum::VR::OpenVRBinding::EVROverlayError& a5)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt64, ::System::String*, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t&, ::ZenFulcrum::VR::OpenVRBinding::EVROverlayError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYRENDERMODEL_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 a1, ::System::String* a2, ::System::UInt32 a3, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t& a4, ::ZenFulcrum::VR::OpenVRBinding::EVROverlayError& a5, ::System::AsyncCallback* a6, ::System::Object* a7)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::String*, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t&, ::ZenFulcrum::VR::OpenVRBinding::EVROverlayError&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYRENDERMODEL_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::UInt32 EndInvoke(::ZenFulcrum::VR::OpenVRBinding::HmdColor_t& a1, ::ZenFulcrum::VR::OpenVRBinding::EVROverlayError& a2, ::System::IAsyncResult* a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t&, ::ZenFulcrum::VR::OpenVRBinding::EVROverlayError&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYRENDERMODEL_ENDINVOKE_OFFSET))(this, a1, a2, a3);
		}
	};
}
