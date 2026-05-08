#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CommandBufferWrapper.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DistortionQueueType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/DrawingSettings.h"
#include "unitysdk/UnityEngine/Rendering/FilteringSettings.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferLoadAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferStoreAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderQueueRange.h"
#include "unitysdk/UnityEngine/Rendering/RenderStateBlock.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/ShaderTagId.h"
#include "unitysdk/UnityEngine/Rendering/StencilState.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::NAPRenderPipeline0 { class Distortion_NativeSRP; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DRAWOFFSCREENTRANSPARENTOBJECTSPASSNOTNATIVE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x19AAF330)
#define UNITYENGINE_RENDERING_UNIVERSAL_DRAWOFFSCREENTRANSPARENTOBJECTSPASSNOTNATIVE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x19AB0370)
#define UNITYENGINE_RENDERING_UNIVERSAL_DRAWOFFSCREENTRANSPARENTOBJECTSPASSNOTNATIVE_GETMSAA4XJITTEREDPROJECTIONMATRIX_OFFSET UNITYSDK_OFFSET(0x19AAE540)
#define UNITYENGINE_RENDERING_UNIVERSAL_DRAWOFFSCREENTRANSPARENTOBJECTSPASSNOTNATIVE_POSTPROCESSOFFSCREENPARTICLES_OFFSET UNITYSDK_OFFSET(0x19AAFD30)
#define UNITYENGINE_RENDERING_UNIVERSAL_DRAWOFFSCREENTRANSPARENTOBJECTSPASSNOTNATIVE_PREDRAWRENDERERPREPARING_OFFSET UNITYSDK_OFFSET(0x19AAF9B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DRAWOFFSCREENTRANSPARENTOBJECTSPASSNOTNATIVE_PREPROCESSOFFSCREENPARTICLES_OFFSET UNITYSDK_OFFSET(0x19AB0470)
#define UNITYENGINE_RENDERING_UNIVERSAL_DRAWOFFSCREENTRANSPARENTOBJECTSPASSNOTNATIVE_SETUP_OFFSET UNITYSDK_OFFSET(0x19AAF130)
#define UNITYENGINE_RENDERING_UNIVERSAL_DRAWOFFSCREENTRANSPARENTOBJECTSPASSNOTNATIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x19AAE900)
#define UNITYENGINE_RENDERING_UNIVERSAL_DRAWOFFSCREENTRANSPARENTOBJECTSPASSNOTNATIVE___BASE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x19AB1480)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DrawOffScreenTransparentObjectsPassNotNative_TypeDefinitionIndex = 30191;

	class DrawOffScreenTransparentObjectsPassNotNative : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::System::Int32* StaticGet_PassPropertyId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrawOffScreenTransparentObjectsPassNotNative_TypeDefinitionIndex)->GetStaticField(0x6590);
		}
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_ProfilingSampler; // 0xA8
		::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>* colorBuffersStoreAction_MSAA; // 0xB0
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* m_TransparentShaderTagIdListForOffScreenParticle; // 0xB8
		::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>* colorBuffersLoadActions; // 0xC0
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* m_TransparentShaderTagIdList; // 0xC8
		::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* colorBuffers; // 0xD0
		::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>* colorBuffersStoreAction; // 0xD8
		::System::String* m_ProfilerTag; // 0xE0
		::UnityEngine::Rendering::FilteringSettings m_FilteringSettingsForBlackCanvas; // 0xE8
		::UnityEngine::Rendering::FilteringSettings m_FilteringSettings; // 0x104
		::UnityEngine::NAPRenderPipeline0::DistortionQueueType m_DistortionQueueType; // 0x120
		::System::Single m_DistortionIntensity; // 0x124
		::UnityEngine::Rendering::FilteringSettings m_FilteringSettingsForDecalBlackCanvas; // 0x128
		::UnityEngine::Rendering::DrawingSettings m_DrawSetting; // 0x144
		::System::Boolean m_NeedResetProjectionMatrix; // 0x27C
		::System::Boolean m_IsOffScreenParticlePassMSAA; // 0x27D
		::System::Boolean m_IsOffScreenParticlePass; // 0x27E
		::UnityEngine::Rendering::FilteringSettings m_DrawTimeFilterSetting; // 0x280
		::UnityEngine::Rendering::FilteringSettings m_FilteringSettingsForDecal; // 0x29C
		::UnityEngine::Rendering::RenderStateBlock m_RenderStateBlock; // 0x2B8

		::System::Void _ctor(::System::String* profilerTag, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* renderPassEventConfig, ::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask, ::UnityEngine::Rendering::StencilState stencilState, ::System::Int32 stencilReference)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>*, ::UnityEngine::Rendering::RenderQueueRange, ::UnityEngine::LayerMask, ::UnityEngine::Rendering::StencilState, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DRAWOFFSCREENTRANSPARENTOBJECTSPASSNOTNATIVE__CTOR_OFFSET))(this, profilerTag, renderPassEventConfig, renderQueueRange, layerMask, stencilState, stencilReference);
		}

		static ::UnityEngine::Matrix4x4 GetMSAA4XJitteredProjectionMatrix(::UnityEngine::Matrix4x4& origProj, ::UnityEngine::Camera*& camera, ::System::Int32 actualWidth, ::System::Int32 actualHeight, ::UnityEngine::Vector4 taaJitter)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Camera*&, ::System::Int32, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DRAWOFFSCREENTRANSPARENTOBJECTSPASSNOTNATIVE_GETMSAA4XJITTEREDPROJECTIONMATRIX_OFFSET))(origProj, camera, actualWidth, actualHeight, taaJitter);
		}

		::System::Void Setup(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::Distortion_NativeSRP* distortion)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::Distortion_NativeSRP*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DRAWOFFSCREENTRANSPARENTOBJECTSPASSNOTNATIVE_SETUP_OFFSET))(this, renderingData, distortion);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DRAWOFFSCREENTRANSPARENTOBJECTSPASSNOTNATIVE_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DRAWOFFSCREENTRANSPARENTOBJECTSPASSNOTNATIVE_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		::System::Void PreprocessOffscreenParticles(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::System::Boolean isOffScreenParticlePass, ::System::Boolean isOffScreenParticlePassMSAA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DRAWOFFSCREENTRANSPARENTOBJECTSPASSNOTNATIVE_PREPROCESSOFFSCREENPARTICLES_OFFSET))(this, cmd, renderingData, isOffScreenParticlePass, isOffScreenParticlePassMSAA);
		}

		::System::Void PostProcessOffscreenParticles(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DRAWOFFSCREENTRANSPARENTOBJECTSPASSNOTNATIVE_POSTPROCESSOFFSCREENPARTICLES_OFFSET))(this, cmd, renderingData);
		}

		::System::Void PreDrawRendererPreparing(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DRAWOFFSCREENTRANSPARENTOBJECTSPASSNOTNATIVE_PREDRAWRENDERERPREPARING_OFFSET))(this, cmdWrapper, renderingData);
		}

		::System::Void __base_FrameCleanup(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DRAWOFFSCREENTRANSPARENTOBJECTSPASSNOTNATIVE___BASE_FRAMECLEANUP_OFFSET))(this, P0);
		}
	};
}
