#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONLAUNCHARGUMENTS_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CAA0B0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONLAUNCHARGUMENTS_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CAA130)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONLAUNCHARGUMENTS_INVOKE_OFFSET UNITYSDK_OFFSET(0x18C9D100)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONLAUNCHARGUMENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x18CAA090)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRApplications__GetApplicationLaunchArguments_TypeDefinitionIndex = 30018;

	class IVRApplications__GetApplicationLaunchArguments : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONLAUNCHARGUMENTS__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt32 Invoke(::System::UInt32 unHandle, ::System::String* pchArgs, ::System::UInt32 unArgs)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONLAUNCHARGUMENTS_INVOKE_OFFSET))(this, unHandle, pchArgs, unArgs);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 unHandle, ::System::String* pchArgs, ::System::UInt32 unArgs, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONLAUNCHARGUMENTS_BEGININVOKE_OFFSET))(this, unHandle, pchArgs, unArgs, callback, object);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONLAUNCHARGUMENTS_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
