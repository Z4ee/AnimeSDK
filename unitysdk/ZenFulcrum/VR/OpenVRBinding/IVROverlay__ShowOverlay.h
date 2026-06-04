#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWOVERLAY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B5212D0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWOVERLAY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B521320)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWOVERLAY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B5212C0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWOVERLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B521250)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__ShowOverlay_TypeDefinitionIndex = 36162;

	class IVROverlay__ShowOverlay : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWOVERLAY__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::UInt64 a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWOVERLAY_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWOVERLAY_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWOVERLAY_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
