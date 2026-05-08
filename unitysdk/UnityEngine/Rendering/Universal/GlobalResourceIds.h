#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"

namespace UnityEngine { class Texture; }

#define UNITYENGINE_RENDERING_UNIVERSAL_GLOBALRESOURCEIDS_SETUPONSRPINIT_OFFSET UNITYSDK_OFFSET(0x18FE77E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GLOBALRESOURCEIDS_SETUPPERFRAME_OFFSET UNITYSDK_OFFSET(0x18FE7960)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GlobalResourceIds_TypeDefinitionIndex = 30002;

	class GlobalResourceIds : public ::System::Object
	{
	public:
		static ::UnityEngine::Texture** StaticGet_BlackTextureObj()
		{
			return (::UnityEngine::Texture**)Il2CppClass::FromTypeDefinitionIndex(GlobalResourceIds_TypeDefinitionIndex)->GetStaticField(0x22930);
		}
		static ::UnityEngine::Texture** StaticGet_WhiteTextureObj()
		{
			return (::UnityEngine::Texture**)Il2CppClass::FromTypeDefinitionIndex(GlobalResourceIds_TypeDefinitionIndex)->GetStaticField(0x22938);
		}
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet_RedTextureID()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(GlobalResourceIds_TypeDefinitionIndex)->GetStaticField(0x56F0);
		}
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet_BlackTextureID()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(GlobalResourceIds_TypeDefinitionIndex)->GetStaticField(0x5718);
		}
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet_FSRLuminanceBiasLutID()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(GlobalResourceIds_TypeDefinitionIndex)->GetStaticField(0x5740);
		}
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet_WhiteTextureID()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(GlobalResourceIds_TypeDefinitionIndex)->GetStaticField(0x5768);
		}

		static ::System::Void SetupOnSRPInit()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GLOBALRESOURCEIDS_SETUPONSRPINIT_OFFSET))();
		}

		static ::System::Void SetupPerFrame()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GLOBALRESOURCEIDS_SETUPPERFRAME_OFFSET))();
		}
	};
}
