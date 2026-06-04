#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETrackedControllerRole.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTRACKEDDEVICEINDEXFORCONTROLLERROLE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B526FC0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTRACKEDDEVICEINDEXFORCONTROLLERROLE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B527030)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTRACKEDDEVICEINDEXFORCONTROLLERROLE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B526FB0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTRACKEDDEVICEINDEXFORCONTROLLERROLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B526F40)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__GetTrackedDeviceIndexForControllerRole_TypeDefinitionIndex = 35970;

	class IVRSystem__GetTrackedDeviceIndexForControllerRole : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTRACKEDDEVICEINDEXFORCONTROLLERROLE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 Invoke(::ZenFulcrum::VR::OpenVRBinding::ETrackedControllerRole a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackedControllerRole))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTRACKEDDEVICEINDEXFORCONTROLLERROLE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::ETrackedControllerRole a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackedControllerRole, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTRACKEDDEVICEINDEXFORCONTROLLERROLE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTRACKEDDEVICEINDEXFORCONTROLLERROLE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
