#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdColor_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYRENDERMODEL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B51FD70)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYRENDERMODEL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B51FE10)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYRENDERMODEL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B51FD50)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYRENDERMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B51FCE0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__SetOverlayRenderModel_TypeDefinitionIndex = 36152;

	class IVROverlay__SetOverlayRenderModel : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYRENDERMODEL__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::UInt64 a1, ::System::String* a2, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t& a3)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYRENDERMODEL_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 a1, ::System::String* a2, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t& a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYRENDERMODEL_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::ZenFulcrum::VR::OpenVRBinding::HmdColor_t& a1, ::System::IAsyncResult* a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYRENDERMODEL_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
