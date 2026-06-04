#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ISQUITUSERPROMPTREQUESTED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B515260)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ISQUITUSERPROMPTREQUESTED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B515290)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ISQUITUSERPROMPTREQUESTED_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B50E610)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ISQUITUSERPROMPTREQUESTED__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5151F0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRApplications__IsQuitUserPromptRequested_TypeDefinitionIndex = 36043;

	class IVRApplications__IsQuitUserPromptRequested : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ISQUITUSERPROMPTREQUESTED__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ISQUITUSERPROMPTREQUESTED_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ISQUITUSERPROMPTREQUESTED_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ISQUITUSERPROMPTREQUESTED_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
