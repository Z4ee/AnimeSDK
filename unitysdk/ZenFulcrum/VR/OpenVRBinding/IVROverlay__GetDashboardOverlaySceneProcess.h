#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETDASHBOARDOVERLAYSCENEPROCESS_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CBB5A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETDASHBOARDOVERLAYSCENEPROCESS_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CBB610)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETDASHBOARDOVERLAYSCENEPROCESS_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CBB230)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETDASHBOARDOVERLAYSCENEPROCESS__CTOR_OFFSET UNITYSDK_OFFSET(0x18CBB210)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__GetDashboardOverlaySceneProcess_TypeDefinitionIndex = 30169;

	class IVROverlay__GetDashboardOverlaySceneProcess : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETDASHBOARDOVERLAYSCENEPROCESS__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::UInt64 ulOverlayHandle, ::System::UInt32& punProcessId)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETDASHBOARDOVERLAYSCENEPROCESS_INVOKE_OFFSET))(this, ulOverlayHandle, punProcessId);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 ulOverlayHandle, ::System::UInt32& punProcessId, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::UInt32&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETDASHBOARDOVERLAYSCENEPROCESS_BEGININVOKE_OFFSET))(this, ulOverlayHandle, punProcessId, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::System::UInt32& punProcessId, ::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETDASHBOARDOVERLAYSCENEPROCESS_ENDINVOKE_OFFSET))(this, punProcessId, result);
		}
	};
}
