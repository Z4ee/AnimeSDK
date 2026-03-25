#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRApplicationError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__REMOVEAPPLICATIONMANIFEST_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CAAF80)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__REMOVEAPPLICATIONMANIFEST_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CAAFB0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__REMOVEAPPLICATIONMANIFEST_INVOKE_OFFSET UNITYSDK_OFFSET(0x18C95AB0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__REMOVEAPPLICATIONMANIFEST__CTOR_OFFSET UNITYSDK_OFFSET(0x18CAAF60)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRApplications__RemoveApplicationManifest_TypeDefinitionIndex = 29996;

	class IVRApplications__RemoveApplicationManifest : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__REMOVEAPPLICATIONMANIFEST__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError Invoke(::System::String* pchApplicationManifestFullPath)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__REMOVEAPPLICATIONMANIFEST_INVOKE_OFFSET))(this, pchApplicationManifestFullPath);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pchApplicationManifestFullPath, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__REMOVEAPPLICATIONMANIFEST_BEGININVOKE_OFFSET))(this, pchApplicationManifestFullPath, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__REMOVEAPPLICATIONMANIFEST_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
