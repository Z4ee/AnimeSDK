#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__DESTROYOVERLAY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B51B330)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__DESTROYOVERLAY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B51B380)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__DESTROYOVERLAY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B51B320)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__DESTROYOVERLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B51B2B0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__DestroyOverlay_TypeDefinitionIndex = 36123;

	class IVROverlay__DestroyOverlay : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__DESTROYOVERLAY__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::UInt64 a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__DESTROYOVERLAY_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__DESTROYOVERLAY_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__DESTROYOVERLAY_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
