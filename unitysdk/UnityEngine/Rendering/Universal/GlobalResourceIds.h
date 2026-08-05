#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"

namespace UnityEngine { class Texture; }

#define UNITYENGINE_RENDERING_UNIVERSAL_GLOBALRESOURCEIDS_SETUPONSRPINIT_OFFSET UNITYSDK_OFFSET(0x1BC56DB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GLOBALRESOURCEIDS_SETUPPERFRAME_OFFSET UNITYSDK_OFFSET(0x1BC56F30)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GlobalResourceIds_TypeDefinitionIndex = 27658;

	class GlobalResourceIds : public ::System::Object
	{
	public:
		static ::UnityEngine::Texture** StaticGet_BlackTextureObj()
		{
			return (::UnityEngine::Texture**)Il2CppClass::FromTypeDefinitionIndex(GlobalResourceIds_TypeDefinitionIndex)->GetStaticField(0x210B0);
		}
		static ::UnityEngine::Texture** StaticGet_WhiteTextureObj()
		{
			return (::UnityEngine::Texture**)Il2CppClass::FromTypeDefinitionIndex(GlobalResourceIds_TypeDefinitionIndex)->GetStaticField(0x210B8);
		}
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet_FSRLuminanceBiasLutID()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(GlobalResourceIds_TypeDefinitionIndex)->GetStaticField(0x4FE0);
		}
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet_RedTextureID()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(GlobalResourceIds_TypeDefinitionIndex)->GetStaticField(0x5008);
		}
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet_WhiteTextureID()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(GlobalResourceIds_TypeDefinitionIndex)->GetStaticField(0x5030);
		}
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet_BlackTextureID()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(GlobalResourceIds_TypeDefinitionIndex)->GetStaticField(0x5058);
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
