#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/Texture_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYTEXTURE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CCBE00)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYTEXTURE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CCBE90)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYTEXTURE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CCBA90)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYTEXTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x18CCBA70)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__SetOverlayTexture_TypeDefinitionIndex = 30158;

	class IVROverlay__SetOverlayTexture : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYTEXTURE__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::Texture_t& pTexture)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::Texture_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYTEXTURE_INVOKE_OFFSET))(this, ulOverlayHandle, pTexture);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::Texture_t& pTexture, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::Texture_t&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYTEXTURE_BEGININVOKE_OFFSET))(this, ulOverlayHandle, pTexture, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::ZenFulcrum::VR::OpenVRBinding::Texture_t& pTexture, ::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::Texture_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYTEXTURE_ENDINVOKE_OFFSET))(this, pTexture, result);
		}
	};
}
