#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EColorSpace.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYTEXTURECOLORSPACE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CCC6A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYTEXTURECOLORSPACE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CCC730)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYTEXTURECOLORSPACE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CCC330)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYTEXTURECOLORSPACE__CTOR_OFFSET UNITYSDK_OFFSET(0x18CCC310)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__SetOverlayTextureColorSpace_TypeDefinitionIndex = 30127;

	class IVROverlay__SetOverlayTextureColorSpace : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYTEXTURECOLORSPACE__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::EColorSpace eTextureColorSpace)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::EColorSpace))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYTEXTURECOLORSPACE_INVOKE_OFFSET))(this, ulOverlayHandle, eTextureColorSpace);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::EColorSpace eTextureColorSpace, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::EColorSpace, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYTEXTURECOLORSPACE_BEGININVOKE_OFFSET))(this, ulOverlayHandle, eTextureColorSpace, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYTEXTURECOLORSPACE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
