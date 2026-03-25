#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__CREATEDASHBOARDOVERLAY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CBA070)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__CREATEDASHBOARDOVERLAY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CBA0F0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__CREATEDASHBOARDOVERLAY_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CB99B0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__CREATEDASHBOARDOVERLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x18CB9990)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__CreateDashboardOverlay_TypeDefinitionIndex = 30165;

	class IVROverlay__CreateDashboardOverlay : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__CREATEDASHBOARDOVERLAY__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::String* pchOverlayKey, ::System::String* pchOverlayFriendlyName, ::System::UInt64& pMainHandle, ::System::UInt64& pThumbnailHandle)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::String*, ::System::String*, ::System::UInt64&, ::System::UInt64&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__CREATEDASHBOARDOVERLAY_INVOKE_OFFSET))(this, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pchOverlayKey, ::System::String* pchOverlayFriendlyName, ::System::UInt64& pMainHandle, ::System::UInt64& pThumbnailHandle, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::System::UInt64&, ::System::UInt64&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__CREATEDASHBOARDOVERLAY_BEGININVOKE_OFFSET))(this, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::System::UInt64& pMainHandle, ::System::UInt64& pThumbnailHandle, ::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64&, ::System::UInt64&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__CREATEDASHBOARDOVERLAY_ENDINVOKE_OFFSET))(this, pMainHandle, pThumbnailHandle, result);
		}
	};
}
