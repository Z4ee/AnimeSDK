#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__RELEASENATIVEOVERLAYHANDLE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A701910)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__RELEASENATIVEOVERLAYHANDLE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A701980)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__RELEASENATIVEOVERLAYHANDLE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A7015A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__RELEASENATIVEOVERLAYHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A701580)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__ReleaseNativeOverlayHandle_TypeDefinitionIndex = 35883;

	class IVROverlay__ReleaseNativeOverlayHandle : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__RELEASENATIVEOVERLAYHANDLE__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::UInt64 ulOverlayHandle, ::System::IntPtr pNativeTextureHandle)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__RELEASENATIVEOVERLAYHANDLE_INVOKE_OFFSET))(this, ulOverlayHandle, pNativeTextureHandle);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 ulOverlayHandle, ::System::IntPtr pNativeTextureHandle, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__RELEASENATIVEOVERLAYHANDLE_BEGININVOKE_OFFSET))(this, ulOverlayHandle, pNativeTextureHandle, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__RELEASENATIVEOVERLAYHANDLE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
