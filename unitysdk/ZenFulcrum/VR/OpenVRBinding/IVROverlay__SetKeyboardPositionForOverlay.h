#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdRect2_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETKEYBOARDPOSITIONFOROVERLAY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CEDBA00)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETKEYBOARDPOSITIONFOROVERLAY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CEDBA90)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETKEYBOARDPOSITIONFOROVERLAY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CEDB9D0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETKEYBOARDPOSITIONFOROVERLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEDB960)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__SetKeyboardPositionForOverlay_TypeDefinitionIndex = 37838;

	class IVROverlay__SetKeyboardPositionForOverlay : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETKEYBOARDPOSITIONFOROVERLAY__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::UInt64 a1, ::ZenFulcrum::VR::OpenVRBinding::HmdRect2_t a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::HmdRect2_t))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETKEYBOARDPOSITIONFOROVERLAY_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 a1, ::ZenFulcrum::VR::OpenVRBinding::HmdRect2_t a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::HmdRect2_t, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETKEYBOARDPOSITIONFOROVERLAY_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETKEYBOARDPOSITIONFOROVERLAY_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
