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

#define VOLUMETRICCLOUDV2RECONSTRUCTIONPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1BDDEE50)
#define VOLUMETRICCLOUDV2RECONSTRUCTIONPASS_GETTEXTURESAFEUVCOORDBOUND_OFFSET UNITYSDK_OFFSET(0x1BDDEDA0)
#define VOLUMETRICCLOUDV2RECONSTRUCTIONPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BDE0400)
#define VOLUMETRICCLOUDV2RECONSTRUCTIONPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDDEA80)

inline static constexpr unsigned int VolumetricCloudV2ReconstructionPass_TypeDefinitionIndex = 27159;

class VolumetricCloudV2ReconstructionPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
{
public:
	static ::System::Int32* StaticGet__CurrentTracingPixelOffsetX()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2ReconstructionPass_TypeDefinitionIndex)->GetStaticField(0x6240);
	}
	static ::System::Int32* StaticGet__TracingVolumetricTextureValidUvRect()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2ReconstructionPass_TypeDefinitionIndex)->GetStaticField(0x6244);
	}
	static ::System::Int32* StaticGet__TracingVolumetricTextureValidCoordRect()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2ReconstructionPass_TypeDefinitionIndex)->GetStaticField(0x6248);
	}
	static ::System::Int32* StaticGet__PreviousFrameVolumetricTextureValidUvRect()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2ReconstructionPass_TypeDefinitionIndex)->GetStaticField(0x624C);
	}
	static ::System::Int32* StaticGet_HistoryDepthRT_ID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2ReconstructionPass_TypeDefinitionIndex)->GetStaticField(0x6250);
	}
	static ::System::Int32* StaticGet_HistoryColorRT_ID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2ReconstructionPass_TypeDefinitionIndex)->GetStaticField(0x6254);
	}
	static ::System::Int32* StaticGet__VolumetricCloudDepthRT()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2ReconstructionPass_TypeDefinitionIndex)->GetStaticField(0x6258);
	}
	static ::System::Int32* StaticGet__CurrentTracingPixelOffsetY()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2ReconstructionPass_TypeDefinitionIndex)->GetStaticField(0x625C);
	}
	static ::System::Int32* StaticGet__DstVolumetricTextureSizeAndInvSize()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2ReconstructionPass_TypeDefinitionIndex)->GetStaticField(0x6260);
	}
	static ::System::Int32* StaticGet__VolumetricCloudRT()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2ReconstructionPass_TypeDefinitionIndex)->GetStaticField(0x6264);
	}
	// static const ::System::Int32 kReconstructionPassIndex = 0x2; // 0x0
	// static const ::System::String* kReconstructionQuarterKeyword; // 0x0
	::Il2CppArray<::System::Int32>* orderDithering4x4; // 0xA8
	::Il2CppArray<::System::Int32>* orderDithering2x2; // 0xB0
	::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* _mrt2_reconstruction; // 0xB8
	::UnityEngine::NAPRenderPipeline0::ProfilingSampler* profileSampler; // 0xC0
	::UnityEngine::Material* material; // 0xC8
	::UnityEngine::Rendering::RenderTargetIdentifier _HistoryDepthRT; // 0xD0
	::UnityEngine::Rendering::RenderTargetIdentifier _HistoryColorRT; // 0xF8
	::UnityEngine::Rendering::RenderTargetIdentifier _DstDepthRT; // 0x120
	::UnityEngine::Rendering::RenderTargetIdentifier _DstColorRT; // 0x148

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
