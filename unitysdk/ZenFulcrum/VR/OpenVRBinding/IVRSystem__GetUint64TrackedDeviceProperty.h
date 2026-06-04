#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETrackedDeviceProperty.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETrackedPropertyError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETUINT64TRACKEDDEVICEPROPERTY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B5270F0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETUINT64TRACKEDDEVICEPROPERTY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B5271A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETUINT64TRACKEDDEVICEPROPERTY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B5270D0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETUINT64TRACKEDDEVICEPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B527060)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__GetUint64TrackedDeviceProperty_TypeDefinitionIndex = 35977;

	class IVRSystem__GetUint64TrackedDeviceProperty : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETUINT64TRACKEDDEVICEPROPERTY__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt64 Invoke(::System::UInt32 a1, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty a2, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError& a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETUINT64TRACKEDDEVICEPROPERTY_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty a2, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError& a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETUINT64TRACKEDDEVICEPROPERTY_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::UInt64 EndInvoke(::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::UInt64(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETUINT64TRACKEDDEVICEPROPERTY_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
