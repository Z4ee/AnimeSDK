#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONPROCESSID_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CAA180)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONPROCESSID_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CAA1B0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONPROCESSID_INVOKE_OFFSET UNITYSDK_OFFSET(0x18C990A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONPROCESSID__CTOR_OFFSET UNITYSDK_OFFSET(0x18CAA160)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRApplications__GetApplicationProcessId_TypeDefinitionIndex = 30007;

	class IVRApplications__GetApplicationProcessId : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONPROCESSID__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt32 Invoke(::System::String* pchAppKey)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONPROCESSID_INVOKE_OFFSET))(this, pchAppKey);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pchAppKey, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONPROCESSID_BEGININVOKE_OFFSET))(this, pchAppKey, callback, object);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONPROCESSID_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
