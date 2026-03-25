#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYRAW_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CCA880)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYRAW_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CCA950)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYRAW_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CCA4A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYRAW__CTOR_OFFSET UNITYSDK_OFFSET(0x18CCA480)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__SetOverlayRaw_TypeDefinitionIndex = 30160;

	class IVROverlay__SetOverlayRaw : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYRAW__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::UInt64 ulOverlayHandle, ::System::IntPtr pvBuffer, ::System::UInt32 unWidth, ::System::UInt32 unHeight, ::System::UInt32 unDepth)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::IntPtr, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYRAW_INVOKE_OFFSET))(this, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 ulOverlayHandle, ::System::IntPtr pvBuffer, ::System::UInt32 unWidth, ::System::UInt32 unHeight, ::System::UInt32 unDepth, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::IntPtr, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYRAW_BEGININVOKE_OFFSET))(this, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYRAW_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
