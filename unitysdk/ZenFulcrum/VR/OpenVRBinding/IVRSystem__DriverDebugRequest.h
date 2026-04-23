#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__DRIVERDEBUGREQUEST_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A71A6E0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__DRIVERDEBUGREQUEST_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A71A770)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__DRIVERDEBUGREQUEST_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A71A350)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__DRIVERDEBUGREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1A71A330)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__DriverDebugRequest_TypeDefinitionIndex = 35693;

	class IVRSystem__DriverDebugRequest : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__DRIVERDEBUGREQUEST__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt32 Invoke(::System::UInt32 unDeviceIndex, ::System::String* pchRequest, ::System::String* pchResponseBuffer, ::System::UInt32 unResponseBufferSize)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__DRIVERDEBUGREQUEST_INVOKE_OFFSET))(this, unDeviceIndex, pchRequest, pchResponseBuffer, unResponseBufferSize);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 unDeviceIndex, ::System::String* pchRequest, ::System::String* pchResponseBuffer, ::System::UInt32 unResponseBufferSize, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::String*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__DRIVERDEBUGREQUEST_BEGININVOKE_OFFSET))(this, unDeviceIndex, pchRequest, pchResponseBuffer, unResponseBufferSize, callback, object);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__DRIVERDEBUGREQUEST_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
