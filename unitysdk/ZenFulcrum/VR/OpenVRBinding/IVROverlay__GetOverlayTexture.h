#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EColorSpace.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETextureType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VRTextureBounds_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTEXTURE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CC0C50)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTEXTURE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CC0DC0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTEXTURE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CC06C0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTEXTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC06A0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__GetOverlayTexture_TypeDefinitionIndex = 30162;

	class IVROverlay__GetOverlayTexture : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTEXTURE__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::UInt64 ulOverlayHandle, ::System::IntPtr& pNativeTextureHandle, ::System::IntPtr pNativeTextureRef, ::System::UInt32& pWidth, ::System::UInt32& pHeight, ::System::UInt32& pNativeFormat, ::ZenFulcrum::VR::OpenVRBinding::ETextureType& pAPIType, ::ZenFulcrum::VR::OpenVRBinding::EColorSpace& pColorSpace, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t& pTextureBounds)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::IntPtr&, ::System::IntPtr, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&, ::ZenFulcrum::VR::OpenVRBinding::ETextureType&, ::ZenFulcrum::VR::OpenVRBinding::EColorSpace&, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTEXTURE_INVOKE_OFFSET))(this, ulOverlayHandle, pNativeTextureHandle, pNativeTextureRef, pWidth, pHeight, pNativeFormat, pAPIType, pColorSpace, pTextureBounds);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 ulOverlayHandle, ::System::IntPtr& pNativeTextureHandle, ::System::IntPtr pNativeTextureRef, ::System::UInt32& pWidth, ::System::UInt32& pHeight, ::System::UInt32& pNativeFormat, ::ZenFulcrum::VR::OpenVRBinding::ETextureType& pAPIType, ::ZenFulcrum::VR::OpenVRBinding::EColorSpace& pColorSpace, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t& pTextureBounds, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::IntPtr&, ::System::IntPtr, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&, ::ZenFulcrum::VR::OpenVRBinding::ETextureType&, ::ZenFulcrum::VR::OpenVRBinding::EColorSpace&, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTEXTURE_BEGININVOKE_OFFSET))(this, ulOverlayHandle, pNativeTextureHandle, pNativeTextureRef, pWidth, pHeight, pNativeFormat, pAPIType, pColorSpace, pTextureBounds, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::System::IntPtr& pNativeTextureHandle, ::System::UInt32& pWidth, ::System::UInt32& pHeight, ::System::UInt32& pNativeFormat, ::ZenFulcrum::VR::OpenVRBinding::ETextureType& pAPIType, ::ZenFulcrum::VR::OpenVRBinding::EColorSpace& pColorSpace, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t& pTextureBounds, ::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::IntPtr&, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&, ::ZenFulcrum::VR::OpenVRBinding::ETextureType&, ::ZenFulcrum::VR::OpenVRBinding::EColorSpace&, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTEXTURE_ENDINVOKE_OFFSET))(this, pNativeTextureHandle, pWidth, pHeight, pNativeFormat, pAPIType, pColorSpace, pTextureBounds, result);
		}
	};
}
