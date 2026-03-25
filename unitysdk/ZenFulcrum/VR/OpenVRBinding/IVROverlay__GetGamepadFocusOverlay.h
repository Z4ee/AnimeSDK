#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETGAMEPADFOCUSOVERLAY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CBB910)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETGAMEPADFOCUSOVERLAY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CBB940)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETGAMEPADFOCUSOVERLAY_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CBB660)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETGAMEPADFOCUSOVERLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x18CBB640)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__GetGamepadFocusOverlay_TypeDefinitionIndex = 30154;

	class IVROverlay__GetGamepadFocusOverlay : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETGAMEPADFOCUSOVERLAY__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt64 Invoke()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETGAMEPADFOCUSOVERLAY_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETGAMEPADFOCUSOVERLAY_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::UInt64 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETGAMEPADFOCUSOVERLAY_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
