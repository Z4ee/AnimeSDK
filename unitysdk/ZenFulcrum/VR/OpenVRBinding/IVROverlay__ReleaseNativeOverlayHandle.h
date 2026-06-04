#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__RELEASENATIVEOVERLAYHANDLE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B51E7B0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__RELEASENATIVEOVERLAYHANDLE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B51E820)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__RELEASENATIVEOVERLAYHANDLE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B51E7A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__RELEASENATIVEOVERLAYHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B51E730)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__ReleaseNativeOverlayHandle_TypeDefinitionIndex = 36183;

	class IVROverlay__ReleaseNativeOverlayHandle : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__RELEASENATIVEOVERLAYHANDLE__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::UInt64 a1, ::System::IntPtr a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__RELEASENATIVEOVERLAYHANDLE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 a1, ::System::IntPtr a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__RELEASENATIVEOVERLAYHANDLE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__RELEASENATIVEOVERLAYHANDLE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
