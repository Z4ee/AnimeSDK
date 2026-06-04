#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETrackedDeviceProperty.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETrackedPropertyError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Text { class StringBuilder; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETSTRINGTRACKEDDEVICEPROPERTY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B526B00)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETSTRINGTRACKEDDEVICEPROPERTY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B526BE0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETSTRINGTRACKEDDEVICEPROPERTY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B526AC0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETSTRINGTRACKEDDEVICEPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B526A50)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__GetStringTrackedDeviceProperty_TypeDefinitionIndex = 35979;

	class IVRSystem__GetStringTrackedDeviceProperty : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETSTRINGTRACKEDDEVICEPROPERTY__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 Invoke(::System::UInt32 a1, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty a2, ::System::Text::StringBuilder* a3, ::System::UInt32 a4, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError& a5)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty, ::System::Text::StringBuilder*, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETSTRINGTRACKEDDEVICEPROPERTY_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty a2, ::System::Text::StringBuilder* a3, ::System::UInt32 a4, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError& a5, ::System::AsyncCallback* a6, ::System::Object* a7)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty, ::System::Text::StringBuilder*, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETSTRINGTRACKEDDEVICEPROPERTY_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::UInt32 EndInvoke(::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETSTRINGTRACKEDDEVICEPROPERTY_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
