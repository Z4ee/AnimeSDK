#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__CREATEOVERLAY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CBA780)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__CREATEOVERLAY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CBA7E0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__CREATEOVERLAY_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CBA140)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__CREATEOVERLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x18CBA120)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__CreateOverlay_TypeDefinitionIndex = 30102;

	class IVROverlay__CreateOverlay : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__CREATEOVERLAY__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::String* pchOverlayKey, ::System::String* pchOverlayName, ::System::UInt64& pOverlayHandle)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::String*, ::System::String*, ::System::UInt64&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__CREATEOVERLAY_INVOKE_OFFSET))(this, pchOverlayKey, pchOverlayName, pOverlayHandle);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pchOverlayKey, ::System::String* pchOverlayName, ::System::UInt64& pOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::System::UInt64&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__CREATEOVERLAY_BEGININVOKE_OFFSET))(this, pchOverlayKey, pchOverlayName, pOverlayHandle, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::System::UInt64& pOverlayHandle, ::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__CREATEOVERLAY_ENDINVOKE_OFFSET))(this, pOverlayHandle, result);
		}
	};
}
