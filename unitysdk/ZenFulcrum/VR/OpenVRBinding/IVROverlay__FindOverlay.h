#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__FINDOVERLAY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6F66D0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__FINDOVERLAY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6F6730)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__FINDOVERLAY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6F6110)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__FINDOVERLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6F60F0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__FindOverlay_TypeDefinitionIndex = 35821;

	class IVROverlay__FindOverlay : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__FINDOVERLAY__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::String* pchOverlayKey, ::System::UInt64& pOverlayHandle)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::String*, ::System::UInt64&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__FINDOVERLAY_INVOKE_OFFSET))(this, pchOverlayKey, pOverlayHandle);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pchOverlayKey, ::System::UInt64& pOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::UInt64&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__FINDOVERLAY_BEGININVOKE_OFFSET))(this, pchOverlayKey, pOverlayHandle, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::System::UInt64& pOverlayHandle, ::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__FINDOVERLAY_ENDINVOKE_OFFSET))(this, pOverlayHandle, result);
		}
	};
}
