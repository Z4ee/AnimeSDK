#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRApplicationError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRApplicationProperty.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONPROPERTYBOOL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6E5750)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONPROPERTYBOOL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6E57F0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONPROPERTYBOOL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6D5580)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONPROPERTYBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6E5730)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRApplications__GetApplicationPropertyBool_TypeDefinitionIndex = 35730;

	class IVRApplications__GetApplicationPropertyBool : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONPROPERTYBOOL__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::String* pchAppKey, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationProperty eProperty, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError& peError)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationProperty, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONPROPERTYBOOL_INVOKE_OFFSET))(this, pchAppKey, eProperty, peError);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pchAppKey, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationProperty eProperty, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError& peError, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationProperty, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONPROPERTYBOOL_BEGININVOKE_OFFSET))(this, pchAppKey, eProperty, peError, callback, object);
		}

		::System::Boolean EndInvoke(::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError& peError, ::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONPROPERTYBOOL_ENDINVOKE_OFFSET))(this, peError, result);
		}
	};
}
