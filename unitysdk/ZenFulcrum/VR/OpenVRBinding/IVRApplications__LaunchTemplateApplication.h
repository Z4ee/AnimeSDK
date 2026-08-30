#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/AppOverrideKeys_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRApplicationError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__LAUNCHTEMPLATEAPPLICATION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D7FE260)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__LAUNCHTEMPLATEAPPLICATION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D7FE2D0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__LAUNCHTEMPLATEAPPLICATION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D7F6B00)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__LAUNCHTEMPLATEAPPLICATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7FE1E0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRApplications__LaunchTemplateApplication_TypeDefinitionIndex = 37663;

	class IVRApplications__LaunchTemplateApplication : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__LAUNCHTEMPLATEAPPLICATION__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError Invoke(::System::String* a1, ::System::String* a2, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::AppOverrideKeys_t>* a3, ::System::UInt32 a4)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::String*, ::System::String*, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::AppOverrideKeys_t>*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__LAUNCHTEMPLATEAPPLICATION_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::String* a2, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::AppOverrideKeys_t>* a3, ::System::UInt32 a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::AppOverrideKeys_t>*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__LAUNCHTEMPLATEAPPLICATION_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__LAUNCHTEMPLATEAPPLICATION_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
