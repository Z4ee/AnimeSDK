#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRApplicationError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRApplicationProperty.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONPROPERTYUINT64_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D7FD2C0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONPROPERTYUINT64_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D7FD360)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONPROPERTYUINT64_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D7F6DE0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONPROPERTYUINT64__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7FD240)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRApplications__GetApplicationPropertyUint64_TypeDefinitionIndex = 37672;

	class IVRApplications__GetApplicationPropertyUint64 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONPROPERTYUINT64__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt64 Invoke(::System::String* a1, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationProperty a2, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError& a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationProperty, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONPROPERTYUINT64_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationProperty a2, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError& a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationProperty, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONPROPERTYUINT64_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::UInt64 EndInvoke(::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::UInt64(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONPROPERTYUINT64_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
