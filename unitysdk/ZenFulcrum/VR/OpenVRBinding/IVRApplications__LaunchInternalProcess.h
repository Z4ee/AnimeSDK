#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRApplicationError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__LAUNCHINTERNALPROCESS_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CAADB0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__LAUNCHINTERNALPROCESS_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CAADF0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__LAUNCHINTERNALPROCESS_INVOKE_OFFSET UNITYSDK_OFFSET(0x18C9E890)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__LAUNCHINTERNALPROCESS__CTOR_OFFSET UNITYSDK_OFFSET(0x18CAAD90)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRApplications__LaunchInternalProcess_TypeDefinitionIndex = 30024;

	class IVRApplications__LaunchInternalProcess : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__LAUNCHINTERNALPROCESS__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError Invoke(::System::String* pchBinaryPath, ::System::String* pchArguments, ::System::String* pchWorkingDirectory)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__LAUNCHINTERNALPROCESS_INVOKE_OFFSET))(this, pchBinaryPath, pchArguments, pchWorkingDirectory);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pchBinaryPath, ::System::String* pchArguments, ::System::String* pchWorkingDirectory, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__LAUNCHINTERNALPROCESS_BEGININVOKE_OFFSET))(this, pchBinaryPath, pchArguments, pchWorkingDirectory, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__LAUNCHINTERNALPROCESS_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
