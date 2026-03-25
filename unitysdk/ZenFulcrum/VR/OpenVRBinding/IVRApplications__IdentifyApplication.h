#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRApplicationError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__IDENTIFYAPPLICATION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CAAA70)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__IDENTIFYAPPLICATION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CAAAD0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__IDENTIFYAPPLICATION_INVOKE_OFFSET UNITYSDK_OFFSET(0x18C98D30)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__IDENTIFYAPPLICATION__CTOR_OFFSET UNITYSDK_OFFSET(0x18CAAA50)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRApplications__IdentifyApplication_TypeDefinitionIndex = 30006;

	class IVRApplications__IdentifyApplication : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__IDENTIFYAPPLICATION__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError Invoke(::System::UInt32 unProcessId, ::System::String* pchAppKey)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__IDENTIFYAPPLICATION_INVOKE_OFFSET))(this, unProcessId, pchAppKey);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 unProcessId, ::System::String* pchAppKey, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__IDENTIFYAPPLICATION_BEGININVOKE_OFFSET))(this, unProcessId, pchAppKey, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__IDENTIFYAPPLICATION_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
