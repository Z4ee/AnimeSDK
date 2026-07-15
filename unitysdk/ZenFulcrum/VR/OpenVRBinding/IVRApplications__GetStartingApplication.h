#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRApplicationError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETSTARTINGAPPLICATION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BBF5BF0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETSTARTINGAPPLICATION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BBF5C50)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETSTARTINGAPPLICATION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BBEF220)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETSTARTINGAPPLICATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBF5B70)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRApplications__GetStartingApplication_TypeDefinitionIndex = 36821;

	class IVRApplications__GetStartingApplication : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETSTARTINGAPPLICATION__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError Invoke(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETSTARTINGAPPLICATION_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::UInt32 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETSTARTINGAPPLICATION_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETSTARTINGAPPLICATION_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
