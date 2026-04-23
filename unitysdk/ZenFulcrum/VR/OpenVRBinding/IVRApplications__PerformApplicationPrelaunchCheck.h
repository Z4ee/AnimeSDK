#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRApplicationError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__PERFORMAPPLICATIONPRELAUNCHCHECK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6E6450)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__PERFORMAPPLICATIONPRELAUNCHCHECK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6E6480)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__PERFORMAPPLICATIONPRELAUNCHCHECK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6D9250)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__PERFORMAPPLICATIONPRELAUNCHCHECK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6E6430)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRApplications__PerformApplicationPrelaunchCheck_TypeDefinitionIndex = 35741;

	class IVRApplications__PerformApplicationPrelaunchCheck : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__PERFORMAPPLICATIONPRELAUNCHCHECK__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError Invoke(::System::String* pchAppKey)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__PERFORMAPPLICATIONPRELAUNCHCHECK_INVOKE_OFFSET))(this, pchAppKey);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pchAppKey, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__PERFORMAPPLICATIONPRELAUNCHCHECK_BEGININVOKE_OFFSET))(this, pchAppKey, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__PERFORMAPPLICATIONPRELAUNCHCHECK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
