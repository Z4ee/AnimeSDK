#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETrackedDeviceClass.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTRACKEDDEVICECLASS_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A721CD0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTRACKEDDEVICECLASS_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A721D20)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTRACKEDDEVICECLASS_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A7219E0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTRACKEDDEVICECLASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7219C0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__GetTrackedDeviceClass_TypeDefinitionIndex = 35672;

	class IVRSystem__GetTrackedDeviceClass : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTRACKEDDEVICECLASS__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceClass Invoke(::System::UInt32 unDeviceIndex)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceClass(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTRACKEDDEVICECLASS_INVOKE_OFFSET))(this, unDeviceIndex);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 unDeviceIndex, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTRACKEDDEVICECLASS_BEGININVOKE_OFFSET))(this, unDeviceIndex, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceClass EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceClass(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTRACKEDDEVICECLASS_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
