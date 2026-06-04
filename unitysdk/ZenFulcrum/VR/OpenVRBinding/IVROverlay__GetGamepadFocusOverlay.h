#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETGAMEPADFOCUSOVERLAY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B51B670)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETGAMEPADFOCUSOVERLAY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B51B6A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETGAMEPADFOCUSOVERLAY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B51B660)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETGAMEPADFOCUSOVERLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B51B5F0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__GetGamepadFocusOverlay_TypeDefinitionIndex = 36174;

	class IVROverlay__GetGamepadFocusOverlay : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETGAMEPADFOCUSOVERLAY__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt64 Invoke()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETGAMEPADFOCUSOVERLAY_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETGAMEPADFOCUSOVERLAY_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::UInt64 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETGAMEPADFOCUSOVERLAY_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
