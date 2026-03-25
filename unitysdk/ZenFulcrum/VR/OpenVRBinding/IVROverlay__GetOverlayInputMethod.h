#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VROverlayInputMethod.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYINPUTMETHOD_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CBE5E0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYINPUTMETHOD_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CBE670)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYINPUTMETHOD_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CBE270)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYINPUTMETHOD__CTOR_OFFSET UNITYSDK_OFFSET(0x18CBE250)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__GetOverlayInputMethod_TypeDefinitionIndex = 30147;

	class IVROverlay__GetOverlayInputMethod : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYINPUTMETHOD__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::VROverlayInputMethod& peInputMethod)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::VROverlayInputMethod&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYINPUTMETHOD_INVOKE_OFFSET))(this, ulOverlayHandle, peInputMethod);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::VROverlayInputMethod& peInputMethod, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::VROverlayInputMethod&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYINPUTMETHOD_BEGININVOKE_OFFSET))(this, ulOverlayHandle, peInputMethod, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::ZenFulcrum::VR::OpenVRBinding::VROverlayInputMethod& peInputMethod, ::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::VROverlayInputMethod&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYINPUTMETHOD_ENDINVOKE_OFFSET))(this, peInputMethod, result);
		}
	};
}
