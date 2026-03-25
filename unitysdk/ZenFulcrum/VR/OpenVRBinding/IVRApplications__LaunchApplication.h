#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRApplicationError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__LAUNCHAPPLICATION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CAAC20)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__LAUNCHAPPLICATION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CAAC50)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__LAUNCHAPPLICATION_INVOKE_OFFSET UNITYSDK_OFFSET(0x18C96FE0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__LAUNCHAPPLICATION__CTOR_OFFSET UNITYSDK_OFFSET(0x18CAAC00)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRApplications__LaunchApplication_TypeDefinitionIndex = 30001;

	class IVRApplications__LaunchApplication : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__LAUNCHAPPLICATION__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError Invoke(::System::String* pchAppKey)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__LAUNCHAPPLICATION_INVOKE_OFFSET))(this, pchAppKey);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pchAppKey, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__LAUNCHAPPLICATION_BEGININVOKE_OFFSET))(this, pchAppKey, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__LAUNCHAPPLICATION_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
