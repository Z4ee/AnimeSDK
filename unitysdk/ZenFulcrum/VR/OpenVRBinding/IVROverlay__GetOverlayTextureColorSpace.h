#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EColorSpace.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTEXTURECOLORSPACE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CC1600)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTEXTURECOLORSPACE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CC1690)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTEXTURECOLORSPACE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CC1290)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTEXTURECOLORSPACE__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC1270)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__GetOverlayTextureColorSpace_TypeDefinitionIndex = 30128;

	class IVROverlay__GetOverlayTextureColorSpace : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTEXTURECOLORSPACE__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::EColorSpace& peTextureColorSpace)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::EColorSpace&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTEXTURECOLORSPACE_INVOKE_OFFSET))(this, ulOverlayHandle, peTextureColorSpace);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::EColorSpace& peTextureColorSpace, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::EColorSpace&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTEXTURECOLORSPACE_BEGININVOKE_OFFSET))(this, ulOverlayHandle, peTextureColorSpace, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::ZenFulcrum::VR::OpenVRBinding::EColorSpace& peTextureColorSpace, ::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EColorSpace&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTEXTURECOLORSPACE_ENDINVOKE_OFFSET))(this, peTextureColorSpace, result);
		}
	};
}
