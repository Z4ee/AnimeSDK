#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETrackedDeviceProperty.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETrackedPropertyError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETUINT64TRACKEDDEVICEPROPERTY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CE6F60)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETUINT64TRACKEDDEVICEPROPERTY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CE7010)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETUINT64TRACKEDDEVICEPROPERTY_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CE6BD0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETUINT64TRACKEDDEVICEPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x18CE6BB0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__GetUint64TrackedDeviceProperty_TypeDefinitionIndex = 29957;

	class IVRSystem__GetUint64TrackedDeviceProperty : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETUINT64TRACKEDDEVICEPROPERTY__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt64 Invoke(::System::UInt32 unDeviceIndex, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty prop, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError& pError)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETUINT64TRACKEDDEVICEPROPERTY_INVOKE_OFFSET))(this, unDeviceIndex, prop, pError);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 unDeviceIndex, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty prop, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError& pError, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETUINT64TRACKEDDEVICEPROPERTY_BEGININVOKE_OFFSET))(this, unDeviceIndex, prop, pError, callback, object);
		}

		::System::UInt64 EndInvoke(::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError& pError, ::System::IAsyncResult* result)
		{
			return ((::System::UInt64(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETUINT64TRACKEDDEVICEPROPERTY_ENDINVOKE_OFFSET))(this, pError, result);
		}
	};
}
