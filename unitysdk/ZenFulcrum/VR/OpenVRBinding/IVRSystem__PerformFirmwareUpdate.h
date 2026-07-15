#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRFirmwareError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__PERFORMFIRMWAREUPDATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D269B30)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__PERFORMFIRMWAREUPDATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D269B80)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__PERFORMFIRMWAREUPDATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D269B20)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__PERFORMFIRMWAREUPDATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D269AB0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__PerformFirmwareUpdate_TypeDefinitionIndex = 36776;

	class IVRSystem__PerformFirmwareUpdate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__PERFORMFIRMWAREUPDATE__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRFirmwareError Invoke(::System::UInt32 a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRFirmwareError(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__PERFORMFIRMWAREUPDATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__PERFORMFIRMWAREUPDATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRFirmwareError EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRFirmwareError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__PERFORMFIRMWAREUPDATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
