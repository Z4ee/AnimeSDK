#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__DESTROYOVERLAY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CBAB20)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__DESTROYOVERLAY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CBAB70)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__DESTROYOVERLAY_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CBA830)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__DESTROYOVERLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x18CBA810)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__DestroyOverlay_TypeDefinitionIndex = 30103;

	class IVROverlay__DestroyOverlay : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__DESTROYOVERLAY__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::UInt64 ulOverlayHandle)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__DESTROYOVERLAY_INVOKE_OFFSET))(this, ulOverlayHandle);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__DESTROYOVERLAY_BEGININVOKE_OFFSET))(this, ulOverlayHandle, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__DESTROYOVERLAY_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
