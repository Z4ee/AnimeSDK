#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETDASHBOARDOVERLAYSCENEPROCESS_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CC67F0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETDASHBOARDOVERLAYSCENEPROCESS_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CC6860)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETDASHBOARDOVERLAYSCENEPROCESS_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CC6480)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETDASHBOARDOVERLAYSCENEPROCESS__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC6460)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__SetDashboardOverlaySceneProcess_TypeDefinitionIndex = 30168;

	class IVROverlay__SetDashboardOverlaySceneProcess : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETDASHBOARDOVERLAYSCENEPROCESS__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::UInt64 ulOverlayHandle, ::System::UInt32 unProcessId)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETDASHBOARDOVERLAYSCENEPROCESS_INVOKE_OFFSET))(this, ulOverlayHandle, unProcessId);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 ulOverlayHandle, ::System::UInt32 unProcessId, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETDASHBOARDOVERLAYSCENEPROCESS_BEGININVOKE_OFFSET))(this, ulOverlayHandle, unProcessId, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETDASHBOARDOVERLAYSCENEPROCESS_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
