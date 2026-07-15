#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ISAPPLICATIONINSTALLED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BBF5EC0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ISAPPLICATIONINSTALLED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BBF5EF0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ISAPPLICATIONINSTALLED_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BBEEB80)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ISAPPLICATIONINSTALLED__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBF5E50)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRApplications__IsApplicationInstalled_TypeDefinitionIndex = 36799;

	class IVRApplications__IsApplicationInstalled : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ISAPPLICATIONINSTALLED__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ISAPPLICATIONINSTALLED_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ISAPPLICATIONINSTALLED_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ISAPPLICATIONINSTALLED_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
