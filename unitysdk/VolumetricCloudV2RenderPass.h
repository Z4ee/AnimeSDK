#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/ShaderTagId.h"
#include "unitysdk/UnityEngine/Rendering/Universal/VolumetricCloudV2Quality.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class VolumetricCloudConfigV2; }
namespace UnityEngine::Rendering::Universal { class VolumetricCloudV2Config; }

#define VOLUMETRICCLOUDV2RENDERPASS_ENSUREMERGEDTRACINGRT_OFFSET UNITYSDK_OFFSET(0x1BC3E590)
#define VOLUMETRICCLOUDV2RENDERPASS_ENSURESINGLECLOUDTRACINGRT_OFFSET UNITYSDK_OFFSET(0x1BC3E340)
#define VOLUMETRICCLOUDV2RENDERPASS_ENSUREVOLUMETRICTRACINGRT_OFFSET UNITYSDK_OFFSET(0x1BC3E0E0)
#define VOLUMETRICCLOUDV2RENDERPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1BC3B810)
#define VOLUMETRICCLOUDV2RENDERPASS_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1BC3E7E0)
#define VOLUMETRICCLOUDV2RENDERPASS_GETTRACINGDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BC3E980)
#define VOLUMETRICCLOUDV2RENDERPASS_SETPACKEDCLOUDPARAMS_OFFSET UNITYSDK_OFFSET(0x1BC3B220)
#define VOLUMETRICCLOUDV2RENDERPASS_SETUP_OFFSET UNITYSDK_OFFSET(0x1BC3AB80)
#define VOLUMETRICCLOUDV2RENDERPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC3EB80)
#define VOLUMETRICCLOUDV2RENDERPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC3A9C0)
#define VOLUMETRICCLOUDV2RENDERPASS___BASE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1BC3EDE0)

inline static constexpr unsigned int VolumetricCloudV2RenderPass_TypeDefinitionIndex = 27002;

class VolumetricCloudV2RenderPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
{
public:
	static ::System::Int32* StaticGet__CloudV2Params5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2RenderPass_TypeDefinitionIndex)->GetStaticField(0x66F0);
	}
	static ::System::Int32* StaticGet__OutCloudColor()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2RenderPass_TypeDefinitionIndex)->GetStaticField(0x66F4);
	}
	static ::System::Int32* StaticGet__StateFrameIndexMod8()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2RenderPass_TypeDefinitionIndex)->GetStaticField(0x66F8);
	}
	static ::System::Int32* StaticGet__CloudOutputSize()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2RenderPass_TypeDefinitionIndex)->GetStaticField(0x66FC);
	}
	static ::System::Int32* StaticGet__CloudV2Params0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2RenderPass_TypeDefinitionIndex)->GetStaticField(0x6700);
	}
	static ::System::Int32* StaticGet__MobileDensityMapID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2RenderPass_TypeDefinitionIndex)->GetStaticField(0x6704);
	}
	static ::System::Int32* StaticGet__MobileCloudParams0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2RenderPass_TypeDefinitionIndex)->GetStaticField(0x6708);
	}
	static ::System::Int32* StaticGet__MergedCloudDepthRT()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2RenderPass_TypeDefinitionIndex)->GetStaticField(0x670C);
	}
	static ::System::Int32* StaticGet__MsOctaveCount()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2RenderPass_TypeDefinitionIndex)->GetStaticField(0x6710);
	}
	static ::System::Int32* StaticGet__CloudV2Params2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2RenderPass_TypeDefinitionIndex)->GetStaticField(0x6714);
	}
	static ::System::Int32* StaticGet__MobileCloudParams1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2RenderPass_TypeDefinitionIndex)->GetStaticField(0x6718);
	}
	static ::System::Int32* StaticGet__SingleCloudDepthRT()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2RenderPass_TypeDefinitionIndex)->GetStaticField(0x671C);
	}
	static ::System::Int32* StaticGet__CloudModelDataTex()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2RenderPass_TypeDefinitionIndex)->GetStaticField(0x6720);
	}
	static ::System::Int32* StaticGet__CloudDepthRT()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2RenderPass_TypeDefinitionIndex)->GetStaticField(0x6724);
	}
	static ::System::Int32* StaticGet__OutCloudDepth()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2RenderPass_TypeDefinitionIndex)->GetStaticField(0x6728);
	}
	static ::System::Int32* StaticGet__MergedCloudColorRT()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2RenderPass_TypeDefinitionIndex)->GetStaticField(0x672C);
	}
	static ::System::Int32* StaticGet__CloudRampColorTex()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2RenderPass_TypeDefinitionIndex)->GetStaticField(0x6730);
	}
	static ::System::Int32* StaticGet__CloudV2Params7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2RenderPass_TypeDefinitionIndex)->GetStaticField(0x6734);
	}
	static ::System::Int32* StaticGet__CloudV2Params1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2RenderPass_TypeDefinitionIndex)->GetStaticField(0x6738);
	}
	static ::System::Int32* StaticGet__CloudSDFTex()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2RenderPass_TypeDefinitionIndex)->GetStaticField(0x673C);
	}
	static ::System::Int32* StaticGet__SingleCloudColorRT()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2RenderPass_TypeDefinitionIndex)->GetStaticField(0x6740);
	}
	static ::System::Int32* StaticGet__CloudColorRT()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2RenderPass_TypeDefinitionIndex)->GetStaticField(0x6744);
	}
	static ::System::Int32* StaticGet__CloudV2Params3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2RenderPass_TypeDefinitionIndex)->GetStaticField(0x6748);
	}
	static ::System::Int32* StaticGet__MobileCloudParams2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2RenderPass_TypeDefinitionIndex)->GetStaticField(0x674C);
	}
	static ::System::Int32* StaticGet__CloudV2Params8()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2RenderPass_TypeDefinitionIndex)->GetStaticField(0x6750);
	}
	static ::System::Int32* StaticGet__CloudNoiseTex()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2RenderPass_TypeDefinitionIndex)->GetStaticField(0x6754);
	}
	static ::System::Int32* StaticGet__CloudV2Params6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2RenderPass_TypeDefinitionIndex)->GetStaticField(0x6758);
	}
	static ::System::Int32* StaticGet__CloudV2Params4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2RenderPass_TypeDefinitionIndex)->GetStaticField(0x675C);
	}
	static ::System::Int32* StaticGet__CloudV2Params9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2RenderPass_TypeDefinitionIndex)->GetStaticField(0x6760);
	}
	// static const ::System::Int32 kTracePassIndex = 0x1; // 0x0
	// static const ::System::Int32 kSingleCloudMergePassIndex = 0x4; // 0x0
	// static const ::System::String* kTraceFullResKeyword; // 0x0
	// static const ::System::String* kTraceEnableSdfKeyword; // 0x0
	// static const ::System::String* kCloudUseRampColorKeyword; // 0x0
	// static const ::System::String* kTraceMobileEnvelopeKeyword; // 0x0
	::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* _mrt2_merged; // 0xA8
	::UnityEngine::Material* cloudProcessMaterial; // 0xB0
	::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* m_ShaderTagIdList; // 0xB8
	::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* _mrt2_tracing; // 0xC0
	::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* _mrt2_singleCloud; // 0xC8
	::UnityEngine::NAPRenderPipeline0::ProfilingSampler* profileSampler; // 0xD0
	::UnityEngine::Rendering::Universal::VolumetricCloudV2Config* cloudConfig; // 0xD8
	::UnityEngine::Rendering::RenderTargetIdentifier volumetricTracingRTDepth; // 0xE0
	::UnityEngine::Rendering::RenderTargetIdentifier mergedCloudTracingRTDepth; // 0x108
	::System::Int32 frameIndexMod8; // 0x130
	::UnityEngine::Vector2 volumetricRTSize; // 0x134
	::UnityEngine::Rendering::RenderTargetIdentifier singleCloudTracingRT; // 0x140
	::UnityEngine::Rendering::RenderTargetIdentifier singleCloudTracingRTDepth; // 0x168
	::UnityEngine::Rendering::RenderTargetIdentifier volumetricTracingRT; // 0x190
	::UnityEngine::Rendering::RenderTargetIdentifier mergedCloudTracingRT; // 0x1B8

	::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt, ::UnityEngine::Material* cloudMaterial)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDV2RENDERPASS__CTOR_OFFSET))(this, evt, cloudMaterial);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDV2RENDERPASS__CCTOR_OFFSET))();
	}

	::System::Void Setup(::UnityEngine::Rendering::Universal::VolumetricCloudConfigV2* config, ::System::Boolean& needDrawVolumetricCloud)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::VolumetricCloudConfigV2*, ::System::Boolean&))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDV2RENDERPASS_SETUP_OFFSET))(this, config, needDrawVolumetricCloud);
	}

	::System::Void SetPackedCloudParams(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector3 boxCenterWS, ::UnityEngine::Vector3 boxHalfExtentWS, ::System::Single stepDistance, ::UnityEngine::Vector4 tracingCoordToZbufferCoordScaleBias, ::UnityEngine::Vector3 windDirection, ::System::Single skyLightCloudBottomVisibility, ::UnityEngine::Vector3 atmosphericLightCloudScatteredLuminanceScale, ::System::Single shadowTracingMaxDistance, ::UnityEngine::Vector3 distantSkyLightLuminance, ::System::Int32 shadowSampleCountMax, ::UnityEngine::Vector3 detailNoiseScale, ::System::Single stopTracingTransmittanceThreshold, ::System::Single phaseG, ::System::Single msScattFactor, ::System::Single msExtinFactor, ::System::Single msPhaseFactor, ::System::Single detailNoiseMipLevel, ::System::Single detailMipMapDistanceScale, ::System::Single fogWeight, ::System::Single densityMultiplier, ::System::Int32 stepCountMax)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector4, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Int32, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDV2RENDERPASS_SETPACKEDCLOUDPARAMS_OFFSET))(this, cmd, boxCenterWS, boxHalfExtentWS, stepDistance, tracingCoordToZbufferCoordScaleBias, windDirection, skyLightCloudBottomVisibility, atmosphericLightCloudScatteredLuminanceScale, shadowTracingMaxDistance, distantSkyLightLuminance, shadowSampleCountMax, detailNoiseScale, stopTracingTransmittanceThreshold, phaseG, msScattFactor, msExtinFactor, msPhaseFactor, detailNoiseMipLevel, detailMipMapDistanceScale, fogWeight, densityMultiplier, stepCountMax);
	}

	::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDV2RENDERPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
	}

	::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDV2RENDERPASS_FRAMECLEANUP_OFFSET))(this, cmd);
	}

	::System::Void EnsureVolumetricTracingRT(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::Universal::VolumetricCloudV2Quality quality)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::Universal::VolumetricCloudV2Quality))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDV2RENDERPASS_ENSUREVOLUMETRICTRACINGRT_OFFSET))(this, cmd, renderingData, quality);
	}

	::System::Void EnsureSingleCloudTracingRT(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::Universal::VolumetricCloudV2Quality quality)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::Universal::VolumetricCloudV2Quality))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDV2RENDERPASS_ENSURESINGLECLOUDTRACINGRT_OFFSET))(this, cmd, renderingData, quality);
	}

	::System::Void EnsureMergedTracingRT(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::Universal::VolumetricCloudV2Quality quality)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::Universal::VolumetricCloudV2Quality))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDV2RENDERPASS_ENSUREMERGEDTRACINGRT_OFFSET))(this, cmd, renderingData, quality);
	}

	::UnityEngine::RenderTextureDescriptor GetTracingDescriptor(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::Universal::VolumetricCloudV2Quality quality)
	{
		return ((::UnityEngine::RenderTextureDescriptor(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::Universal::VolumetricCloudV2Quality))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDV2RENDERPASS_GETTRACINGDESCRIPTOR_OFFSET))(this, renderingData, quality);
	}

	::System::Void __base_FrameCleanup(::UnityEngine::Rendering::CommandBuffer* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDV2RENDERPASS___BASE_FRAMECLEANUP_OFFSET))(this, P0);
	}
};
