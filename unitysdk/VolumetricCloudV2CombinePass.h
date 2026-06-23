#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/FilteringSettings.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }

#define VOLUMETRICCLOUDV2COMBINEPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1D4F2F50)
#define VOLUMETRICCLOUDV2COMBINEPASS_GETTEXTURESAFEUVCOORDBOUND_OFFSET UNITYSDK_OFFSET(0x1D4F2EA0)
#define VOLUMETRICCLOUDV2COMBINEPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D4F38A0)
#define VOLUMETRICCLOUDV2COMBINEPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F2D10)

inline static constexpr unsigned int VolumetricCloudV2CombinePass_TypeDefinitionIndex = 26834;

class VolumetricCloudV2CombinePass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
{
public:
	static ::System::Int32* StaticGet__VolumetricTextureValidUvRect()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2CombinePass_TypeDefinitionIndex)->GetStaticField(0x7170);
	}
	static ::System::Int32* StaticGet__VolumetricTextureSizeAndInvSize()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2CombinePass_TypeDefinitionIndex)->GetStaticField(0x7174);
	}
	static ::System::Int32* StaticGet__VolumetricTextureValidCoordRect()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2CombinePass_TypeDefinitionIndex)->GetStaticField(0x7178);
	}
	// static const ::System::Int32 kCombinePassIndex = 0x3; // 0x0
	// static const ::System::String* kCombineQuarterKeyword; // 0x0
	::UnityEngine::NAPRenderPipeline0::ProfilingSampler* profileSampler; // 0xA8
	::UnityEngine::Material* material; // 0xB0
	::UnityEngine::Rendering::FilteringSettings m_FilterSettingsForOpaqueAfterSkyCloud; // 0xB8

	::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt, ::UnityEngine::Material* material)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDV2COMBINEPASS__CTOR_OFFSET))(this, evt, material);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDV2COMBINEPASS__CCTOR_OFFSET))();
	}

	::System::Void GetTextureSafeUvCoordBound(::System::Single width, ::System::Single height, ::UnityEngine::Vector4& uvRect, ::UnityEngine::Vector4& coordRect)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Vector4&, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDV2COMBINEPASS_GETTEXTURESAFEUVCOORDBOUND_OFFSET))(this, width, height, uvRect, coordRect);
	}

	::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDV2COMBINEPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
	}
};
