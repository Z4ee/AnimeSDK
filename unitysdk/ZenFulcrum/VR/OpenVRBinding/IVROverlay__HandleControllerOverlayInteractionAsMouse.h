#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__HANDLECONTROLLEROVERLAYINTERACTIONASMOUSE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CC4210)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__HANDLECONTROLLEROVERLAYINTERACTIONASMOUSE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CC4280)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__HANDLECONTROLLEROVERLAYINTERACTIONASMOUSE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CC3EA0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__HANDLECONTROLLEROVERLAYINTERACTIONASMOUSE__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC3E80)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__HandleControllerOverlayInteractionAsMouse_TypeDefinitionIndex = 30152;

	class IVROverlay__HandleControllerOverlayInteractionAsMouse : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__HANDLECONTROLLEROVERLAYINTERACTIONASMOUSE__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::UInt64 ulOverlayHandle, ::System::UInt32 unControllerDeviceIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__HANDLECONTROLLEROVERLAYINTERACTIONASMOUSE_INVOKE_OFFSET))(this, ulOverlayHandle, unControllerDeviceIndex);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 ulOverlayHandle, ::System::UInt32 unControllerDeviceIndex, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__HANDLECONTROLLEROVERLAYINTERACTIONASMOUSE_BEGININVOKE_OFFSET))(this, ulOverlayHandle, unControllerDeviceIndex, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__HANDLECONTROLLEROVERLAYINTERACTIONASMOUSE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
