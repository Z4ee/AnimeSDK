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

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTEXTURE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B228F20)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTEXTURE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B229090)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTEXTURE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B228ED0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTEXTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B228E60)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__GetOverlayTexture_TypeDefinitionIndex = 36964;

	class IVROverlay__GetOverlayTexture : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTEXTURE__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::UInt64 a1, ::System::IntPtr& a2, ::System::IntPtr a3, ::System::UInt32& a4, ::System::UInt32& a5, ::System::UInt32& a6, ::ZenFulcrum::VR::OpenVRBinding::ETextureType& a7, ::ZenFulcrum::VR::OpenVRBinding::EColorSpace& a8, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t& a9)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::IntPtr&, ::System::IntPtr, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&, ::ZenFulcrum::VR::OpenVRBinding::ETextureType&, ::ZenFulcrum::VR::OpenVRBinding::EColorSpace&, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTEXTURE_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 a1, ::System::IntPtr& a2, ::System::IntPtr a3, ::System::UInt32& a4, ::System::UInt32& a5, ::System::UInt32& a6, ::ZenFulcrum::VR::OpenVRBinding::ETextureType& a7, ::ZenFulcrum::VR::OpenVRBinding::EColorSpace& a8, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t& a9, ::System::AsyncCallback* a10, ::System::Object* a11)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::IntPtr&, ::System::IntPtr, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&, ::ZenFulcrum::VR::OpenVRBinding::ETextureType&, ::ZenFulcrum::VR::OpenVRBinding::EColorSpace&, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTEXTURE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::System::IntPtr& a1, ::System::UInt32& a2, ::System::UInt32& a3, ::System::UInt32& a4, ::ZenFulcrum::VR::OpenVRBinding::ETextureType& a5, ::ZenFulcrum::VR::OpenVRBinding::EColorSpace& a6, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t& a7, ::System::IAsyncResult* a8)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::IntPtr&, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&, ::ZenFulcrum::VR::OpenVRBinding::ETextureType&, ::ZenFulcrum::VR::OpenVRBinding::EColorSpace&, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTEXTURE_ENDINVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}
	};
}
