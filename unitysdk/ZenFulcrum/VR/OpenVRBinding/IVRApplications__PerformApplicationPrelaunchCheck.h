#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRApplicationError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__PERFORMAPPLICATIONPRELAUNCHCHECK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B5157D0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__PERFORMAPPLICATIONPRELAUNCHCHECK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B515800)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__PERFORMAPPLICATIONPRELAUNCHCHECK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B50E570)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__PERFORMAPPLICATIONPRELAUNCHCHECK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B515760)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRApplications__PerformApplicationPrelaunchCheck_TypeDefinitionIndex = 36041;

	class IVRApplications__PerformApplicationPrelaunchCheck : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__PERFORMAPPLICATIONPRELAUNCHCHECK__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError Invoke(::System::String* a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__PERFORMAPPLICATIONPRELAUNCHCHECK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__PERFORMAPPLICATIONPRELAUNCHCHECK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__PERFORMAPPLICATIONPRELAUNCHCHECK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
