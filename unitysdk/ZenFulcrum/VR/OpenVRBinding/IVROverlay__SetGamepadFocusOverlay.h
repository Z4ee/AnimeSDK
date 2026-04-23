#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETGAMEPADFOCUSOVERLAY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A7020F0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETGAMEPADFOCUSOVERLAY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A702140)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETGAMEPADFOCUSOVERLAY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A701E00)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETGAMEPADFOCUSOVERLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A701DE0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__SetGamepadFocusOverlay_TypeDefinitionIndex = 35875;

	class IVROverlay__SetGamepadFocusOverlay : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETGAMEPADFOCUSOVERLAY__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::UInt64 ulNewFocusOverlay)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETGAMEPADFOCUSOVERLAY_INVOKE_OFFSET))(this, ulNewFocusOverlay);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 ulNewFocusOverlay, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETGAMEPADFOCUSOVERLAY_BEGININVOKE_OFFSET))(this, ulNewFocusOverlay, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETGAMEPADFOCUSOVERLAY_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
