#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTEXTURESIZE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CC1A80)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTEXTURESIZE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CC1B10)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTEXTURESIZE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CC16E0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTEXTURESIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC16C0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__GetOverlayTextureSize_TypeDefinitionIndex = 30164;

	class IVROverlay__GetOverlayTextureSize : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTEXTURESIZE__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::UInt64 ulOverlayHandle, ::System::UInt32& pWidth, ::System::UInt32& pHeight)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTEXTURESIZE_INVOKE_OFFSET))(this, ulOverlayHandle, pWidth, pHeight);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 ulOverlayHandle, ::System::UInt32& pWidth, ::System::UInt32& pHeight, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::UInt32&, ::System::UInt32&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTEXTURESIZE_BEGININVOKE_OFFSET))(this, ulOverlayHandle, pWidth, pHeight, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::System::UInt32& pWidth, ::System::UInt32& pHeight, ::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt32&, ::System::UInt32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTEXTURESIZE_ENDINVOKE_OFFSET))(this, pWidth, pHeight, result);
		}
	};
}
