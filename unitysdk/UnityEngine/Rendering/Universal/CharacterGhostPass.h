#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderTargetHandle.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class NapRenderContext_CurrentFrameRenderConfigs; }
namespace UnityEngine::Rendering::Universal { class ScreenEffects; }

#define UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERGHOSTPASS_DOCHARACTERGHOST_OFFSET UNITYSDK_OFFSET(0x19F28750)
#define UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERGHOSTPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x19F285B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERGHOSTPASS_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x19F29820)
#define UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERGHOSTPASS_GETCHARACTERGHOSTTEXTURE_OFFSET UNITYSDK_OFFSET(0x19F29900)
#define UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERGHOSTPASS_ISPASSREADY_OFFSET UNITYSDK_OFFSET(0x19F28170)
#define UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERGHOSTPASS_SETUPCHARACTERGHOST_OFFSET UNITYSDK_OFFSET(0x19F29720)
#define UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERGHOSTPASS_SETUP_OFFSET UNITYSDK_OFFSET(0x19F28560)
#define UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERGHOSTPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x19F284D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERGHOSTPASS___BASE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x19F29AC0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int CharacterGhostPass_TypeDefinitionIndex = 30184;

	class CharacterGhostPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::Il2CppArray<::UnityEngine::Vector4>* m_GhostLayerParams; // 0xA8
		::UnityEngine::Rendering::Universal::ScreenEffects* m_ScreenEffects; // 0xB0
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle characterGhostRT; // 0xB8

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent passEvent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERGHOSTPASS__CTOR_OFFSET))(this, passEvent);
		}

		::System::Boolean IsPassReady(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::Universal::NapRenderContext_CurrentFrameRenderConfigs* curConfigs, ::System::Boolean applyPostProcessing)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::Universal::NapRenderContext_CurrentFrameRenderConfigs*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERGHOSTPASS_ISPASSREADY_OFFSET))(this, renderingData, curConfigs, applyPostProcessing);
		}

		::System::Void Setup(::UnityEngine::Rendering::Universal::ScreenEffects* screenEffects)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ScreenEffects*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERGHOSTPASS_SETUP_OFFSET))(this, screenEffects);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERGHOSTPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void DoCharacterGhost(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::Rendering::CommandBuffer* cmdWrapper)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERGHOSTPASS_DOCHARACTERGHOST_OFFSET))(this, cameraData, cmdWrapper);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERGHOSTPASS_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		::System::Void SetupCharacterGhost(::UnityEngine::Rendering::CommandBuffer* cmdWrapper)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERGHOSTPASS_SETUPCHARACTERGHOST_OFFSET))(this, cmdWrapper);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier GetCharacterGhostTexture()
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERGHOSTPASS_GETCHARACTERGHOSTTEXTURE_OFFSET))(this);
		}

		::System::Void __base_FrameCleanup(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERGHOSTPASS___BASE_FRAMECLEANUP_OFFSET))(this, P0);
		}
	};
}
