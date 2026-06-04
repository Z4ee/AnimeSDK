#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRApplicationError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__SETDEFAULTAPPLICATIONFORMIMETYPE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B515A90)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__SETDEFAULTAPPLICATIONFORMIMETYPE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B515AD0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__SETDEFAULTAPPLICATIONFORMIMETYPE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B50E370)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__SETDEFAULTAPPLICATIONFORMIMETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B515A10)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRApplications__SetDefaultApplicationForMimeType_TypeDefinitionIndex = 36034;

	class IVRApplications__SetDefaultApplicationForMimeType : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__SETDEFAULTAPPLICATIONFORMIMETYPE__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError Invoke(::System::String* a1, ::System::String* a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__SETDEFAULTAPPLICATIONFORMIMETYPE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::String* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__SETDEFAULTAPPLICATIONFORMIMETYPE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__SETDEFAULTAPPLICATIONFORMIMETYPE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
