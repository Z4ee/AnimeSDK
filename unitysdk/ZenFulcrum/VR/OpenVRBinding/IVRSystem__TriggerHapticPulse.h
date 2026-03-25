#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__TRIGGERHAPTICPULSE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CE94F0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__TRIGGERHAPTICPULSE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CE9580)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__TRIGGERHAPTICPULSE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CE9160)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__TRIGGERHAPTICPULSE__CTOR_OFFSET UNITYSDK_OFFSET(0x18CE9140)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__TriggerHapticPulse_TypeDefinitionIndex = 29967;

	class IVRSystem__TriggerHapticPulse : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__TRIGGERHAPTICPULSE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::UInt32 unControllerDeviceIndex, ::System::UInt32 unAxisId, ::System::Char usDurationMicroSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Char))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__TRIGGERHAPTICPULSE_INVOKE_OFFSET))(this, unControllerDeviceIndex, unAxisId, usDurationMicroSec);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 unControllerDeviceIndex, ::System::UInt32 unAxisId, ::System::Char usDurationMicroSec, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Char, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__TRIGGERHAPTICPULSE_BEGININVOKE_OFFSET))(this, unControllerDeviceIndex, unAxisId, usDurationMicroSec, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__TRIGGERHAPTICPULSE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
