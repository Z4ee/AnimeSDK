#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Rendering::Universal::Internal { class CpuIntParams; }
namespace UnityEngine::Rendering::Universal::Internal { class CpuVector4Params; }

#define VOLUMETRICCLOUDV2RECONSTRUCTIONPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1CF1A7D0)
#define VOLUMETRICCLOUDV2RECONSTRUCTIONPASS_GETTEXTURESAFEUVCOORDBOUND_OFFSET UNITYSDK_OFFSET(0x1CF1A720)
#define VOLUMETRICCLOUDV2RECONSTRUCTIONPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF1C120)
#define VOLUMETRICCLOUDV2RECONSTRUCTIONPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF1A220)

inline static constexpr unsigned int VolumetricCloudV2ReconstructionPass_TypeDefinitionIndex = 27733;

class VolumetricCloudV2ReconstructionPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
{
public:
	static ::System::Int32* StaticGet_HistoryColorRT_ID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2ReconstructionPass_TypeDefinitionIndex)->GetStaticField(0x6220);
	}
	static ::System::Int32* StaticGet_HistoryDepthRT_ID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2ReconstructionPass_TypeDefinitionIndex)->GetStaticField(0x6224);
	}
	// static const ::System::Int32 kReconstructionPassIndex = 0x2; // 0x0
	// static const ::System::String* kReconstructionQuarterKeyword; // 0x0
	::UnityEngine::NAPRenderPipeline0::ProfilingSampler* profileSampler; // 0xA8
	::UnityEngine::Rendering::Universal::Internal::CpuIntParams* CurrentTracingPixelOffsetY; // 0xB0
	::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* PreviousFrameVolumetricTextureValidUvRect; // 0xB8
	::Il2CppArray<::System::Int32>* orderDithering4x4; // 0xC0
	::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* TracingVolumetricTextureValidCoordRect; // 0xC8
	::UnityEngine::Rendering::Universal::Internal::CpuIntParams* CurrentTracingPixelOffsetX; // 0xD0
	::UnityEngine::Material* material; // 0xD8
	::Il2CppArray<::System::Int32>* orderDithering2x2; // 0xE0
	::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* TracingVolumetricTextureValidUvRect; // 0xE8
	::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* DstVolumetricTextureSizeAndInvSize; // 0xF0
	::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* _mrt2_reconstruction; // 0xF8
	::System::Int32 HistoryColorRT; // 0x100
	::System::Int32 VolumetricCloudDepthRT; // 0x104
	::UnityEngine::Rendering::RenderTargetIdentifier _HistoryColorRT; // 0x108
	::System::Int32 VolumetricCloudRT; // 0x130
	::System::Int32 HistoryDepthRT; // 0x134
	::UnityEngine::Rendering::RenderTargetIdentifier _HistoryDepthRT; // 0x138
	::UnityEngine::Rendering::RenderTargetIdentifier _DstColorRT; // 0x160
	::UnityEngine::Rendering::RenderTargetIdentifier _DstDepthRT; // 0x188

	::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt, ::UnityEngine::Material* cloudMaterial)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDV2RECONSTRUCTIONPASS__CTOR_OFFSET))(this, evt, cloudMaterial);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDV2RECONSTRUCTIONPASS__CCTOR_OFFSET))();
	}

	::System::Void GetTextureSafeUvCoordBound(::System::Single inWidth, ::System::Single inHeight, ::UnityEngine::Vector4& uvRect, ::UnityEngine::Vector4& coordRect)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Vector4&, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDV2RECONSTRUCTIONPASS_GETTEXTURESAFEUVCOORDBOUND_OFFSET))(this, inWidth, inHeight, uvRect, coordRect);
	}

	::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDV2RECONSTRUCTIONPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
	}
};
