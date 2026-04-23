#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VRMessageOverlayResponse.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWMESSAGEOVERLAY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A70AC70)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWMESSAGEOVERLAY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A70ACD0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWMESSAGEOVERLAY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A70A4E0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWMESSAGEOVERLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A70A4C0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__ShowMessageOverlay_TypeDefinitionIndex = 35900;

	class IVROverlay__ShowMessageOverlay : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWMESSAGEOVERLAY__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::VRMessageOverlayResponse Invoke(::System::String* pchText, ::System::String* pchCaption, ::System::String* pchButton0Text, ::System::String* pchButton1Text, ::System::String* pchButton2Text, ::System::String* pchButton3Text)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::VRMessageOverlayResponse(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWMESSAGEOVERLAY_INVOKE_OFFSET))(this, pchText, pchCaption, pchButton0Text, pchButton1Text, pchButton2Text, pchButton3Text);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pchText, ::System::String* pchCaption, ::System::String* pchButton0Text, ::System::String* pchButton1Text, ::System::String* pchButton2Text, ::System::String* pchButton3Text, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWMESSAGEOVERLAY_BEGININVOKE_OFFSET))(this, pchText, pchCaption, pchButton0Text, pchButton1Text, pchButton2Text, pchButton3Text, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::VRMessageOverlayResponse EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::VRMessageOverlayResponse(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWMESSAGEOVERLAY_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
