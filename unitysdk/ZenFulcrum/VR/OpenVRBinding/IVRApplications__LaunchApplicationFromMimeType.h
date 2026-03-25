#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRApplicationError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__LAUNCHAPPLICATIONFROMMIMETYPE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CAACA0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__LAUNCHAPPLICATIONFROMMIMETYPE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CAACE0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__LAUNCHAPPLICATIONFROMMIMETYPE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18C97C50)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__LAUNCHAPPLICATIONFROMMIMETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x18CAAC80)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRApplications__LaunchApplicationFromMimeType_TypeDefinitionIndex = 30003;

	class IVRApplications__LaunchApplicationFromMimeType : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__LAUNCHAPPLICATIONFROMMIMETYPE__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError Invoke(::System::String* pchMimeType, ::System::String* pchArgs)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__LAUNCHAPPLICATIONFROMMIMETYPE_INVOKE_OFFSET))(this, pchMimeType, pchArgs);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pchMimeType, ::System::String* pchArgs, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__LAUNCHAPPLICATIONFROMMIMETYPE_BEGININVOKE_OFFSET))(this, pchMimeType, pchArgs, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__LAUNCHAPPLICATIONFROMMIMETYPE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
