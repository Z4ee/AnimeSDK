#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__ISTRACKEDDEVICECONNECTED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFC4000)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__ISTRACKEDDEVICECONNECTED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFC4050)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__ISTRACKEDDEVICECONNECTED_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFC3FF0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__ISTRACKEDDEVICECONNECTED__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFC3F80)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__IsTrackedDeviceConnected_TypeDefinitionIndex = 37614;

	class IVRSystem__IsTrackedDeviceConnected : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__ISTRACKEDDEVICECONNECTED__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__ISTRACKEDDEVICECONNECTED_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__ISTRACKEDDEVICECONNECTED_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__ISTRACKEDDEVICECONNECTED_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
