#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETDASHBOARDOVERLAYSCENEPROCESS_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6F6AF0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETDASHBOARDOVERLAYSCENEPROCESS_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6F6B60)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETDASHBOARDOVERLAYSCENEPROCESS_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6F6780)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETDASHBOARDOVERLAYSCENEPROCESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6F6760)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__GetDashboardOverlaySceneProcess_TypeDefinitionIndex = 35889;

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
