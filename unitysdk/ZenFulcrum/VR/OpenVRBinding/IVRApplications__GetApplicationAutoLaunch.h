#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONAUTOLAUNCH_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CA9E10)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONAUTOLAUNCH_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CA9E40)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONAUTOLAUNCH_INVOKE_OFFSET UNITYSDK_OFFSET(0x18C9B280)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONAUTOLAUNCH__CTOR_OFFSET UNITYSDK_OFFSET(0x18CA9DF0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRApplications__GetApplicationAutoLaunch_TypeDefinitionIndex = 30013;

	class IVRApplications__GetApplicationAutoLaunch : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONAUTOLAUNCH__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::String* pchAppKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONAUTOLAUNCH_INVOKE_OFFSET))(this, pchAppKey);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pchAppKey, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONAUTOLAUNCH_BEGININVOKE_OFFSET))(this, pchAppKey, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONAUTOLAUNCH_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
