#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETHIGHQUALITYOVERLAY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CC6F30)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETHIGHQUALITYOVERLAY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CC6F80)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETHIGHQUALITYOVERLAY_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CC6C40)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETHIGHQUALITYOVERLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC6C20)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__SetHighQualityOverlay_TypeDefinitionIndex = 30104;

	class IVROverlay__SetHighQualityOverlay : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETHIGHQUALITYOVERLAY__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::UInt64 ulOverlayHandle)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETHIGHQUALITYOVERLAY_INVOKE_OFFSET))(this, ulOverlayHandle);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETHIGHQUALITYOVERLAY_BEGININVOKE_OFFSET))(this, ulOverlayHandle, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETHIGHQUALITYOVERLAY_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
