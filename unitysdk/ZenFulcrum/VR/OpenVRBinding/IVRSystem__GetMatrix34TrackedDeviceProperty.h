#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETrackedDeviceProperty.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETrackedPropertyError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdMatrix34_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETMATRIX34TRACKEDDEVICEPROPERTY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CE3230)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETMATRIX34TRACKEDDEVICEPROPERTY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CE32E0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETMATRIX34TRACKEDDEVICEPROPERTY_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CE2E10)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETMATRIX34TRACKEDDEVICEPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x18CE2DF0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__GetMatrix34TrackedDeviceProperty_TypeDefinitionIndex = 29958;

	class IVRSystem__GetMatrix34TrackedDeviceProperty : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETMATRIX34TRACKEDDEVICEPROPERTY__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t Invoke(::System::UInt32 unDeviceIndex, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty prop, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError& pError)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETMATRIX34TRACKEDDEVICEPROPERTY_INVOKE_OFFSET))(this, unDeviceIndex, prop, pError);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 unDeviceIndex, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty prop, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError& pError, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETMATRIX34TRACKEDDEVICEPROPERTY_BEGININVOKE_OFFSET))(this, unDeviceIndex, prop, pError, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t EndInvoke(::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError& pError, ::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETMATRIX34TRACKEDDEVICEPROPERTY_ENDINVOKE_OFFSET))(this, pError, result);
		}
	};
}
