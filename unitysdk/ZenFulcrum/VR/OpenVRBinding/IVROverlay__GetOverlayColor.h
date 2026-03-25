#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYCOLOR_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CBCF70)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYCOLOR_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CBD020)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYCOLOR_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CBCB80)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18CBCB60)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__GetOverlayColor_TypeDefinitionIndex = 30116;

	class IVROverlay__GetOverlayColor : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYCOLOR__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::UInt64 ulOverlayHandle, ::System::Single& pfRed, ::System::Single& pfGreen, ::System::Single& pfBlue)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYCOLOR_INVOKE_OFFSET))(this, ulOverlayHandle, pfRed, pfGreen, pfBlue);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 ulOverlayHandle, ::System::Single& pfRed, ::System::Single& pfGreen, ::System::Single& pfBlue, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::Single&, ::System::Single&, ::System::Single&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYCOLOR_BEGININVOKE_OFFSET))(this, ulOverlayHandle, pfRed, pfGreen, pfBlue, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::System::Single& pfRed, ::System::Single& pfGreen, ::System::Single& pfBlue, ::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::Single&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYCOLOR_ENDINVOKE_OFFSET))(this, pfRed, pfGreen, pfBlue, result);
		}
	};
}
