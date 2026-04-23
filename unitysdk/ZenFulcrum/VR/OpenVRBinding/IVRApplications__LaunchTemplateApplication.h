#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/AppOverrideKeys_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRApplicationError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__LAUNCHTEMPLATEAPPLICATION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6E6390)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__LAUNCHTEMPLATEAPPLICATION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6E6400)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__LAUNCHTEMPLATEAPPLICATION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6D2AC0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__LAUNCHTEMPLATEAPPLICATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6E6370)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRApplications__LaunchTemplateApplication_TypeDefinitionIndex = 35722;

	class IVRApplications__LaunchTemplateApplication : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__LAUNCHTEMPLATEAPPLICATION__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError Invoke(::System::String* pchTemplateAppKey, ::System::String* pchNewAppKey, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::AppOverrideKeys_t>* pKeys, ::System::UInt32 unKeys)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::String*, ::System::String*, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::AppOverrideKeys_t>*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__LAUNCHTEMPLATEAPPLICATION_INVOKE_OFFSET))(this, pchTemplateAppKey, pchNewAppKey, pKeys, unKeys);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pchTemplateAppKey, ::System::String* pchNewAppKey, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::AppOverrideKeys_t>* pKeys, ::System::UInt32 unKeys, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::AppOverrideKeys_t>*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__LAUNCHTEMPLATEAPPLICATION_BEGININVOKE_OFFSET))(this, pchTemplateAppKey, pchNewAppKey, pKeys, unKeys, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__LAUNCHTEMPLATEAPPLICATION_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
