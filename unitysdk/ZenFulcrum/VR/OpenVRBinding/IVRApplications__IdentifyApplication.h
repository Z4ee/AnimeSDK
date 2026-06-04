#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRApplicationError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__IDENTIFYAPPLICATION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B515090)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__IDENTIFYAPPLICATION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B5150F0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__IDENTIFYAPPLICATION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B50E0E0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__IDENTIFYAPPLICATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B515020)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRApplications__IdentifyApplication_TypeDefinitionIndex = 36026;

	class IVRApplications__IdentifyApplication : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__IDENTIFYAPPLICATION__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError Invoke(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__IDENTIFYAPPLICATION_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::System::String* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__IDENTIFYAPPLICATION_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__IDENTIFYAPPLICATION_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
