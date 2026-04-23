#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRFirmwareError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__PERFORMFIRMWAREUPDATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A7232A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__PERFORMFIRMWAREUPDATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A7232F0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__PERFORMFIRMWAREUPDATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A722FB0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__PERFORMFIRMWAREUPDATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A722F90)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__PerformFirmwareUpdate_TypeDefinitionIndex = 35694;

	class IVRSystem__PerformFirmwareUpdate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__PERFORMFIRMWAREUPDATE__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRFirmwareError Invoke(::System::UInt32 unDeviceIndex)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRFirmwareError(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__PERFORMFIRMWAREUPDATE_INVOKE_OFFSET))(this, unDeviceIndex);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 unDeviceIndex, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__PERFORMFIRMWAREUPDATE_BEGININVOKE_OFFSET))(this, unDeviceIndex, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRFirmwareError EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRFirmwareError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__PERFORMFIRMWAREUPDATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
