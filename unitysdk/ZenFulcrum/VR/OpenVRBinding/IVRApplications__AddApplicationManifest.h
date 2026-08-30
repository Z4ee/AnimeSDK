#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRApplicationError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ADDAPPLICATIONMANIFEST_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFB0890)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ADDAPPLICATIONMANIFEST_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFB08F0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ADDAPPLICATIONMANIFEST_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFAA960)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ADDAPPLICATIONMANIFEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFB0810)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRApplications__AddApplicationManifest_TypeDefinitionIndex = 37656;

	class IVRApplications__AddApplicationManifest : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ADDAPPLICATIONMANIFEST__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError Invoke(::System::String* a1, ::System::Boolean a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ADDAPPLICATIONMANIFEST_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::Boolean a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ADDAPPLICATIONMANIFEST_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ADDAPPLICATIONMANIFEST_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
