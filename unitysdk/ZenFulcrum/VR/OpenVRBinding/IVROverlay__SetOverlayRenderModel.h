#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdColor_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYRENDERMODEL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CCAD40)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYRENDERMODEL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CCADE0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYRENDERMODEL_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CCA9A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYRENDERMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x18CCA980)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__SetOverlayRenderModel_TypeDefinitionIndex = 30132;

	class IVROverlay__SetOverlayRenderModel : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYRENDERMODEL__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::UInt64 ulOverlayHandle, ::System::String* pchRenderModel, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t& pColor)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYRENDERMODEL_INVOKE_OFFSET))(this, ulOverlayHandle, pchRenderModel, pColor);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 ulOverlayHandle, ::System::String* pchRenderModel, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t& pColor, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYRENDERMODEL_BEGININVOKE_OFFSET))(this, ulOverlayHandle, pchRenderModel, pColor, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::ZenFulcrum::VR::OpenVRBinding::HmdColor_t& pColor, ::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYRENDERMODEL_ENDINVOKE_OFFSET))(this, pColor, result);
		}
	};
}
