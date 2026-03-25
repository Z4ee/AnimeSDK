#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ISQUITUSERPROMPTREQUESTED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CAABA0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ISQUITUSERPROMPTREQUESTED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CAABD0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ISQUITUSERPROMPTREQUESTED_INVOKE_OFFSET UNITYSDK_OFFSET(0x18C9E5C0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ISQUITUSERPROMPTREQUESTED__CTOR_OFFSET UNITYSDK_OFFSET(0x18CAAB80)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRApplications__IsQuitUserPromptRequested_TypeDefinitionIndex = 30023;

	class IVRApplications__IsQuitUserPromptRequested : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ISQUITUSERPROMPTREQUESTED__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ISQUITUSERPROMPTREQUESTED_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ISQUITUSERPROMPTREQUESTED_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ISQUITUSERPROMPTREQUESTED_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
