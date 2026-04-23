#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETPRIMARYDASHBOARDDEVICE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6FEE50)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETPRIMARYDASHBOARDDEVICE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6FEE80)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETPRIMARYDASHBOARDDEVICE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6FEBA0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETPRIMARYDASHBOARDDEVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6FEB80)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__GetPrimaryDashboardDevice_TypeDefinitionIndex = 35891;

	class IVROverlay__GetPrimaryDashboardDevice : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETPRIMARYDASHBOARDDEVICE__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt32 Invoke()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETPRIMARYDASHBOARDDEVICE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETPRIMARYDASHBOARDDEVICE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETPRIMARYDASHBOARDDEVICE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
