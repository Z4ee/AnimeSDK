#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EDeviceActivityLevel.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTRACKEDDEVICEACTIVITYLEVEL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EF5A770)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTRACKEDDEVICEACTIVITYLEVEL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EF5A7C0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTRACKEDDEVICEACTIVITYLEVEL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EF5A760)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTRACKEDDEVICEACTIVITYLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF5A6F0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__GetTrackedDeviceActivityLevel_TypeDefinitionIndex = 37609;

	class IVRSystem__GetTrackedDeviceActivityLevel : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTRACKEDDEVICEACTIVITYLEVEL__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EDeviceActivityLevel Invoke(::System::UInt32 a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EDeviceActivityLevel(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTRACKEDDEVICEACTIVITYLEVEL_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTRACKEDDEVICEACTIVITYLEVEL_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::ZenFulcrum::VR::OpenVRBinding::EDeviceActivityLevel EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EDeviceActivityLevel(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTRACKEDDEVICEACTIVITYLEVEL_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
