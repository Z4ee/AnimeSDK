#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdRect2_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETKEYBOARDPOSITIONFOROVERLAY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CC73E0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETKEYBOARDPOSITIONFOROVERLAY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CC7470)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETKEYBOARDPOSITIONFOROVERLAY_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CC6FD0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETKEYBOARDPOSITIONFOROVERLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC6FB0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__SetKeyboardPositionForOverlay_TypeDefinitionIndex = 30177;

	class IVROverlay__SetKeyboardPositionForOverlay : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETKEYBOARDPOSITIONFOROVERLAY__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::HmdRect2_t avoidRect)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::HmdRect2_t))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETKEYBOARDPOSITIONFOROVERLAY_INVOKE_OFFSET))(this, ulOverlayHandle, avoidRect);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::HmdRect2_t avoidRect, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::HmdRect2_t, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETKEYBOARDPOSITIONFOROVERLAY_BEGININVOKE_OFFSET))(this, ulOverlayHandle, avoidRect, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETKEYBOARDPOSITIONFOROVERLAY_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
