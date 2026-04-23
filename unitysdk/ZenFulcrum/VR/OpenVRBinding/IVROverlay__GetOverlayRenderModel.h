#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdColor_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYRENDERMODEL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6FAEE0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYRENDERMODEL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6FAFD0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYRENDERMODEL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6FAA80)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYRENDERMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6FAA60)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__GetOverlayRenderModel_TypeDefinitionIndex = 35851;

	class IVROverlay__GetOverlayRenderModel : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYRENDERMODEL__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt32 Invoke(::System::UInt64 ulOverlayHandle, ::System::String* pchValue, ::System::UInt32 unBufferSize, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t& pColor, ::ZenFulcrum::VR::OpenVRBinding::EVROverlayError& pError)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt64, ::System::String*, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t&, ::ZenFulcrum::VR::OpenVRBinding::EVROverlayError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYRENDERMODEL_INVOKE_OFFSET))(this, ulOverlayHandle, pchValue, unBufferSize, pColor, pError);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 ulOverlayHandle, ::System::String* pchValue, ::System::UInt32 unBufferSize, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t& pColor, ::ZenFulcrum::VR::OpenVRBinding::EVROverlayError& pError, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::String*, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t&, ::ZenFulcrum::VR::OpenVRBinding::EVROverlayError&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYRENDERMODEL_BEGININVOKE_OFFSET))(this, ulOverlayHandle, pchValue, unBufferSize, pColor, pError, callback, object);
		}

		::System::UInt32 EndInvoke(::ZenFulcrum::VR::OpenVRBinding::HmdColor_t& pColor, ::ZenFulcrum::VR::OpenVRBinding::EVROverlayError& pError, ::System::IAsyncResult* result)
		{
			return ((::System::UInt32(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t&, ::ZenFulcrum::VR::OpenVRBinding::EVROverlayError&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYRENDERMODEL_ENDINVOKE_OFFSET))(this, pColor, pError, result);
		}
	};
}
