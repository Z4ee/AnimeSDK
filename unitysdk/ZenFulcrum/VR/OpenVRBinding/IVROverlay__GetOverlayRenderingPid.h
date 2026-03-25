#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYRENDERINGPID_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CBFDC0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYRENDERINGPID_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CBFE10)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYRENDERINGPID_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CBFAD0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYRENDERINGPID__CTOR_OFFSET UNITYSDK_OFFSET(0x18CBFAB0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__GetOverlayRenderingPid_TypeDefinitionIndex = 30112;

	class IVROverlay__GetOverlayRenderingPid : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYRENDERINGPID__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt32 Invoke(::System::UInt64 ulOverlayHandle)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYRENDERINGPID_INVOKE_OFFSET))(this, ulOverlayHandle);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYRENDERINGPID_BEGININVOKE_OFFSET))(this, ulOverlayHandle, callback, object);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYRENDERINGPID_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
