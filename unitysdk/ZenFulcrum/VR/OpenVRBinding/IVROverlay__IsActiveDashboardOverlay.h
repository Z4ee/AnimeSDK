#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__ISACTIVEDASHBOARDOVERLAY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B22A2C0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__ISACTIVEDASHBOARDOVERLAY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B22A310)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__ISACTIVEDASHBOARDOVERLAY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B22A2B0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__ISACTIVEDASHBOARDOVERLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B22A240)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__IsActiveDashboardOverlay_TypeDefinitionIndex = 36969;

	class IVROverlay__IsActiveDashboardOverlay : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__ISACTIVEDASHBOARDOVERLAY__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::System::UInt64 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__ISACTIVEDASHBOARDOVERLAY_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__ISACTIVEDASHBOARDOVERLAY_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__ISACTIVEDASHBOARDOVERLAY_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
