#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__TRIGGERHAPTICPULSE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D26A1B0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__TRIGGERHAPTICPULSE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D26A240)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__TRIGGERHAPTICPULSE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D26A190)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__TRIGGERHAPTICPULSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D26A120)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__TriggerHapticPulse_TypeDefinitionIndex = 36769;

	class IVRSystem__TriggerHapticPulse : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__TRIGGERHAPTICPULSE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::UInt32 a1, ::System::UInt32 a2, ::System::Char a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Char))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__TRIGGERHAPTICPULSE_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::System::UInt32 a2, ::System::Char a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Char, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__TRIGGERHAPTICPULSE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__TRIGGERHAPTICPULSE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
