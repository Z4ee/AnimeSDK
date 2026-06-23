#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderTargetHandle.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class CharacterIgnisFatuus; }
namespace UnityEngine::Rendering::Universal { class MonsterIgnisFatuus; }
namespace UnityEngine::Rendering::Universal { class NapRenderContext_CurrentFrameRenderConfigs; }

#define UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERIGNISFATUUSPASS_DOCHARACTERIGNISFATUUS_OFFSET UNITYSDK_OFFSET(0x1BC18110)
#define UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERIGNISFATUUSPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1BC17F70)
#define UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERIGNISFATUUSPASS_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1BC1B520)
#define UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERIGNISFATUUSPASS_GETCHARACTERIGNISFATUUSTEXTURE_OFFSET UNITYSDK_OFFSET(0x1BC1B6A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERIGNISFATUUSPASS_GETMONSTERIGNISFATUUSTEXTURE_OFFSET UNITYSDK_OFFSET(0x1BC1B860)
#define UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERIGNISFATUUSPASS_ISPASSREADY_OFFSET UNITYSDK_OFFSET(0x1BC17B60)
#define UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERIGNISFATUUSPASS_SETUPCHARACTERIGNISFATUUS_OFFSET UNITYSDK_OFFSET(0x1BC1AB80)
#define UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERIGNISFATUUSPASS_SETUP_OFFSET UNITYSDK_OFFSET(0x1BC17F10)
#define UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERIGNISFATUUSPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC1BA20)
#define UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERIGNISFATUUSPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC17E80)
#define UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERIGNISFATUUSPASS___BASE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1BC1BA70)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int CharacterIgnisFatuusPass_TypeDefinitionIndex = 27177;

	class CharacterIgnisFatuusPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::System::Int32* StaticGet_gaussianBlur1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterIgnisFatuusPass_TypeDefinitionIndex)->GetStaticField(0x6610);
		}
		static ::System::Int32* StaticGet_gaussianBlur0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterIgnisFatuusPass_TypeDefinitionIndex)->GetStaticField(0x6614);
		}
		::UnityEngine::Texture* ignisFatuusNoiseTexture2; // 0xA8
		::UnityEngine::Texture* ignisFatuusColorTexture_Monster; // 0xB0
		::UnityEngine::Texture* ignisFatuusColorTexture; // 0xB8
		::UnityEngine::Texture* ignisFatuusNoiseTexture_Monster; // 0xC0
		::UnityEngine::Texture* ignisFatuusNoiseTexture; // 0xC8
		::UnityEngine::Texture* ignisFatuusNoiseTexture2_Monster; // 0xD0
		::UnityEngine::Texture* ignisFatuusColorTexture2; // 0xD8
		::UnityEngine::Rendering::Universal::CharacterIgnisFatuus* m_CharacterIgnisFatuus; // 0xE0
		::UnityEngine::Texture* ignisFatuusColorTexture2_Monster; // 0xE8
		::UnityEngine::Rendering::Universal::MonsterIgnisFatuus* m_MonsterIgnisFatuus; // 0xF0
		::UnityEngine::Vector4 ignisFatuusColorParams2; // 0xF8
		::UnityEngine::Vector4 colorTextureUVParams; // 0x108
		::UnityEngine::Vector4 noiseTextureUVParams2_Monster; // 0x118
		::UnityEngine::Vector4 colorTextureUVParams2; // 0x128
		::UnityEngine::Vector4 ignisFatuusDataParams2; // 0x138
		::UnityEngine::Color ignisFatuusColor2_Monster; // 0x148
		::UnityEngine::Vector4 noiseTextureUVParams; // 0x158
		::UnityEngine::Vector4 ignisFatuusColorParams2_Monster; // 0x168
		::UnityEngine::Vector4 ignisFatuusColorParams; // 0x178
		::UnityEngine::Vector4 ignisFatuusDataParams2_Monster; // 0x188
		::UnityEngine::Color ignisFatuusColor2; // 0x198
		::UnityEngine::Vector4 ignisFatuusColorParams_Monster; // 0x1A8
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle characterIgnisFatuusRT; // 0x1B8
		::UnityEngine::Vector4 colorTextureUVParams_Monster; // 0x1BC
		::UnityEngine::Vector4 ignisFatuusDataParams; // 0x1CC
		::UnityEngine::Color ignisFatuusColor; // 0x1DC
		::UnityEngine::Vector4 noiseTextureUVParams2; // 0x1EC
		::UnityEngine::Vector4 colorTextureUVParams2_Monster; // 0x1FC
		::UnityEngine::Vector4 noiseTextureUVParams_Monster; // 0x20C
		::UnityEngine::Color ignisFatuusColor_Monster; // 0x21C
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle monsterIgnisFatuusRT; // 0x22C
		::UnityEngine::Vector4 ignisFatuusDataParams_Monster; // 0x230

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent passEvent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERIGNISFATUUSPASS__CTOR_OFFSET))(this, passEvent);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERIGNISFATUUSPASS__CCTOR_OFFSET))();
		}

		::System::Boolean IsPassReady(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::Universal::NapRenderContext_CurrentFrameRenderConfigs* curConfigs, ::System::Boolean applyPostProcessing)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::Universal::NapRenderContext_CurrentFrameRenderConfigs*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERIGNISFATUUSPASS_ISPASSREADY_OFFSET))(this, renderingData, curConfigs, applyPostProcessing);
		}

		::System::Void Setup(::UnityEngine::Rendering::Universal::CharacterIgnisFatuus* characterIgnisFatuus, ::UnityEngine::Rendering::Universal::MonsterIgnisFatuus* monsterIgnisFatuus)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::CharacterIgnisFatuus*, ::UnityEngine::Rendering::Universal::MonsterIgnisFatuus*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERIGNISFATUUSPASS_SETUP_OFFSET))(this, characterIgnisFatuus, monsterIgnisFatuus);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERIGNISFATUUSPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void DoCharacterIgnisFatuus(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::Rendering::CommandBuffer* cmdWrapper)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERIGNISFATUUSPASS_DOCHARACTERIGNISFATUUS_OFFSET))(this, cameraData, cmdWrapper);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERIGNISFATUUSPASS_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		::System::Void SetupCharacterIgnisFatuus(::UnityEngine::Rendering::CommandBuffer* cmdWrapper)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERIGNISFATUUSPASS_SETUPCHARACTERIGNISFATUUS_OFFSET))(this, cmdWrapper);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier GetCharacterIgnisFatuusTexture()
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERIGNISFATUUSPASS_GETCHARACTERIGNISFATUUSTEXTURE_OFFSET))(this);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier GetMonsterIgnisFatuusTexture()
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERIGNISFATUUSPASS_GETMONSTERIGNISFATUUSTEXTURE_OFFSET))(this);
		}

		::System::Void __base_FrameCleanup(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERIGNISFATUUSPASS___BASE_FRAMECLEANUP_OFFSET))(this, P0);
		}
	};
}
