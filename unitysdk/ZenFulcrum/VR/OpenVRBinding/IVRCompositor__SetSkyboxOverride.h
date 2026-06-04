#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRCompositorError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/Texture_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SETSKYBOXOVERRIDE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B519A20)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SETSKYBOXOVERRIDE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B519A80)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SETSKYBOXOVERRIDE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B519A10)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SETSKYBOXOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B519990)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__SetSkyboxOverride_TypeDefinitionIndex = 36093;

	class IVRCompositor__SetSkyboxOverride : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SETSKYBOXOVERRIDE__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError Invoke(::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::Texture_t>* a1, ::System::UInt32 a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError(*)(::PVOID, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::Texture_t>*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SETSKYBOXOVERRIDE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::Texture_t>* a1, ::System::UInt32 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::Texture_t>*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SETSKYBOXOVERRIDE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SETSKYBOXOVERRIDE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
