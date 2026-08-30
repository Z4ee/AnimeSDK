#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETPRIMARYDASHBOARDDEVICE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CEDA9B0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETPRIMARYDASHBOARDDEVICE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CEDA9E0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETPRIMARYDASHBOARDDEVICE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CEDA9A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETPRIMARYDASHBOARDDEVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEDA930)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__GetPrimaryDashboardDevice_TypeDefinitionIndex = 37832;

	class IVROverlay__GetPrimaryDashboardDevice : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETPRIMARYDASHBOARDDEVICE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 Invoke()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETPRIMARYDASHBOARDDEVICE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETPRIMARYDASHBOARDDEVICE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETPRIMARYDASHBOARDDEVICE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
