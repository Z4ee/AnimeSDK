#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRApplicationError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__SETAPPLICATIONAUTOLAUNCH_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CAB000)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__SETAPPLICATIONAUTOLAUNCH_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CAB060)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__SETAPPLICATIONAUTOLAUNCH_INVOKE_OFFSET UNITYSDK_OFFSET(0x18C9AC70)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__SETAPPLICATIONAUTOLAUNCH__CTOR_OFFSET UNITYSDK_OFFSET(0x18CAAFE0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRApplications__SetApplicationAutoLaunch_TypeDefinitionIndex = 30012;

	class IVRApplications__SetApplicationAutoLaunch : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__SETAPPLICATIONAUTOLAUNCH__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError Invoke(::System::String* pchAppKey, ::System::Boolean bAutoLaunch)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__SETAPPLICATIONAUTOLAUNCH_INVOKE_OFFSET))(this, pchAppKey, bAutoLaunch);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pchAppKey, ::System::Boolean bAutoLaunch, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__SETAPPLICATIONAUTOLAUNCH_BEGININVOKE_OFFSET))(this, pchAppKey, bAutoLaunch, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__SETAPPLICATIONAUTOLAUNCH_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
