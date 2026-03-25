#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__ISTRACKEDDEVICECONNECTED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CE79C0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__ISTRACKEDDEVICECONNECTED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CE7A10)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__ISTRACKEDDEVICECONNECTED_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CE76C0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__ISTRACKEDDEVICECONNECTED__CTOR_OFFSET UNITYSDK_OFFSET(0x18CE76A0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__IsTrackedDeviceConnected_TypeDefinitionIndex = 29953;

	class IVRSystem__IsTrackedDeviceConnected : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__ISTRACKEDDEVICECONNECTED__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::UInt32 unDeviceIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__ISTRACKEDDEVICECONNECTED_INVOKE_OFFSET))(this, unDeviceIndex);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 unDeviceIndex, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__ISTRACKEDDEVICECONNECTED_BEGININVOKE_OFFSET))(this, unDeviceIndex, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__ISTRACKEDDEVICECONNECTED_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
