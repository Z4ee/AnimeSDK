#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRApplicationError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRApplicationProperty.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONPROPERTYUINT64_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CAA410)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONPROPERTYUINT64_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CAA4B0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONPROPERTYUINT64_INVOKE_OFFSET UNITYSDK_OFFSET(0x18C9A660)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONPROPERTYUINT64__CTOR_OFFSET UNITYSDK_OFFSET(0x18CAA3F0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRApplications__GetApplicationPropertyUint64_TypeDefinitionIndex = 30011;

	class IVRApplications__GetApplicationPropertyUint64 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONPROPERTYUINT64__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt64 Invoke(::System::String* pchAppKey, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationProperty eProperty, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError& peError)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationProperty, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONPROPERTYUINT64_INVOKE_OFFSET))(this, pchAppKey, eProperty, peError);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pchAppKey, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationProperty eProperty, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError& peError, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationProperty, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONPROPERTYUINT64_BEGININVOKE_OFFSET))(this, pchAppKey, eProperty, peError, callback, object);
		}

		::System::UInt64 EndInvoke(::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError& peError, ::System::IAsyncResult* result)
		{
			return ((::System::UInt64(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONPROPERTYUINT64_ENDINVOKE_OFFSET))(this, peError, result);
		}
	};
}
