#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETrackedControllerRole.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTRACKEDDEVICEINDEXFORCONTROLLERROLE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CE6B10)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTRACKEDDEVICEINDEXFORCONTROLLERROLE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CE6B80)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTRACKEDDEVICEINDEXFORCONTROLLERROLE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CE6820)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTRACKEDDEVICEINDEXFORCONTROLLERROLE__CTOR_OFFSET UNITYSDK_OFFSET(0x18CE6800)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__GetTrackedDeviceIndexForControllerRole_TypeDefinitionIndex = 29950;

	class IVRSystem__GetTrackedDeviceIndexForControllerRole : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTRACKEDDEVICEINDEXFORCONTROLLERROLE__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt32 Invoke(::ZenFulcrum::VR::OpenVRBinding::ETrackedControllerRole unDeviceType)
		{
			return ((::System::UInt32(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackedControllerRole))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTRACKEDDEVICEINDEXFORCONTROLLERROLE_INVOKE_OFFSET))(this, unDeviceType);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::ETrackedControllerRole unDeviceType, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackedControllerRole, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTRACKEDDEVICEINDEXFORCONTROLLERROLE_BEGININVOKE_OFFSET))(this, unDeviceType, callback, object);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTRACKEDDEVICEINDEXFORCONTROLLERROLE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
