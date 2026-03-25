#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__ISHOVERTARGETOVERLAY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CC5330)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__ISHOVERTARGETOVERLAY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CC5380)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__ISHOVERTARGETOVERLAY_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CC5030)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__ISHOVERTARGETOVERLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC5010)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__IsHoverTargetOverlay_TypeDefinitionIndex = 30153;

	class IVROverlay__IsHoverTargetOverlay : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__ISHOVERTARGETOVERLAY__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::UInt64 ulOverlayHandle)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__ISHOVERTARGETOVERLAY_INVOKE_OFFSET))(this, ulOverlayHandle);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__ISHOVERTARGETOVERLAY_BEGININVOKE_OFFSET))(this, ulOverlayHandle, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__ISHOVERTARGETOVERLAY_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
