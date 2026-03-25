#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRApplicationError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ADDAPPLICATIONMANIFEST_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CA9CE0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ADDAPPLICATIONMANIFEST_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CA9D40)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ADDAPPLICATIONMANIFEST_INVOKE_OFFSET UNITYSDK_OFFSET(0x18C954A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ADDAPPLICATIONMANIFEST__CTOR_OFFSET UNITYSDK_OFFSET(0x18CA9CC0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRApplications__AddApplicationManifest_TypeDefinitionIndex = 29995;

	class IVRApplications__AddApplicationManifest : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ADDAPPLICATIONMANIFEST__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError Invoke(::System::String* pchApplicationManifestFullPath, ::System::Boolean bTemporary)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ADDAPPLICATIONMANIFEST_INVOKE_OFFSET))(this, pchApplicationManifestFullPath, bTemporary);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pchApplicationManifestFullPath, ::System::Boolean bTemporary, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ADDAPPLICATIONMANIFEST_BEGININVOKE_OFFSET))(this, pchApplicationManifestFullPath, bTemporary, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ADDAPPLICATIONMANIFEST_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
