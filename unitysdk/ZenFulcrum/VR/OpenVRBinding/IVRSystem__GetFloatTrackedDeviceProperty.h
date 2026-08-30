#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETrackedDeviceProperty.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETrackedPropertyError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETFLOATTRACKEDDEVICEPROPERTY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CEE2800)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETFLOATTRACKEDDEVICEPROPERTY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CEE28B0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETFLOATTRACKEDDEVICEPROPERTY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CEE27E0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETFLOATTRACKEDDEVICEPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEE2770)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__GetFloatTrackedDeviceProperty_TypeDefinitionIndex = 37616;

	class IVRSystem__GetFloatTrackedDeviceProperty : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETFLOATTRACKEDDEVICEPROPERTY__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single Invoke(::System::UInt32 a1, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty a2, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError& a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETFLOATTRACKEDDEVICEPROPERTY_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty a2, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError& a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETFLOATTRACKEDDEVICEPROPERTY_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Single EndInvoke(::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Single(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETFLOATTRACKEDDEVICEPROPERTY_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
