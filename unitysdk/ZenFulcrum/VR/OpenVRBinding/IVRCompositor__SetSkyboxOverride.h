#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRCompositorError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/Texture_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SETSKYBOXOVERRIDE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CB5040)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SETSKYBOXOVERRIDE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CB50A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SETSKYBOXOVERRIDE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CB4CE0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SETSKYBOXOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x18CB4CC0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__SetSkyboxOverride_TypeDefinitionIndex = 30073;

	class IVRCompositor__SetSkyboxOverride : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SETSKYBOXOVERRIDE__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError Invoke(::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::Texture_t>* pTextures, ::System::UInt32 unTextureCount)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError(*)(::PVOID, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::Texture_t>*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SETSKYBOXOVERRIDE_INVOKE_OFFSET))(this, pTextures, unTextureCount);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::Texture_t>* pTextures, ::System::UInt32 unTextureCount, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::Texture_t>*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SETSKYBOXOVERRIDE_BEGININVOKE_OFFSET))(this, pTextures, unTextureCount, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SETSKYBOXOVERRIDE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
