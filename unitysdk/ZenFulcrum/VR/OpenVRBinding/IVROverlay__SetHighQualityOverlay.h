#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETHIGHQUALITYOVERLAY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B22AC90)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETHIGHQUALITYOVERLAY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B22ACE0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETHIGHQUALITYOVERLAY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B22AC80)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETHIGHQUALITYOVERLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B22AC10)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__SetHighQualityOverlay_TypeDefinitionIndex = 36906;

	class IVROverlay__SetHighQualityOverlay : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETHIGHQUALITYOVERLAY__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::UInt64 a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETHIGHQUALITYOVERLAY_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETHIGHQUALITYOVERLAY_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETHIGHQUALITYOVERLAY_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
