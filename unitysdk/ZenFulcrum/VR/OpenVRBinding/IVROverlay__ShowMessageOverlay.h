#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VRMessageOverlayResponse.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWMESSAGEOVERLAY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFBDDB0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWMESSAGEOVERLAY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFBDE10)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWMESSAGEOVERLAY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFBDD70)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWMESSAGEOVERLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFBDCF0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__ShowMessageOverlay_TypeDefinitionIndex = 37841;

	class IVROverlay__ShowMessageOverlay : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWMESSAGEOVERLAY__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::VRMessageOverlayResponse Invoke(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::String* a6)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::VRMessageOverlayResponse(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWMESSAGEOVERLAY_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::System::AsyncCallback* a7, ::System::Object* a8)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWMESSAGEOVERLAY_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::ZenFulcrum::VR::OpenVRBinding::VRMessageOverlayResponse EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::VRMessageOverlayResponse(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWMESSAGEOVERLAY_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
