#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class VolumetricCloudConfig; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPVOLUMETRICCLOUDMANGER_BLITVOLUMETRICCLOUD_OFFSET UNITYSDK_OFFSET(0x1AF0B390)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPVOLUMETRICCLOUDMANGER_DRAWFALLBACKCLOUD_OFFSET UNITYSDK_OFFSET(0x1AF0B750)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPVOLUMETRICCLOUDMANGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1AF0B2A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPVOLUMETRICCLOUDMANGER_RENDERVOLUMETRICRT_OFFSET UNITYSDK_OFFSET(0x1AF0BB40)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPVOLUMETRICCLOUDMANGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF0E160)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPVOLUMETRICCLOUDMANGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF0B380)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int NapVolumetricCloudManger_TypeDefinitionIndex = 26408;

	class NapVolumetricCloudManger : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_s_pattern_array0()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapVolumetricCloudManger_TypeDefinitionIndex)->GetStaticField(0x22480);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_pattern_array1()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapVolumetricCloudManger_TypeDefinitionIndex)->GetStaticField(0x22488);
		}
		static ::UnityEngine::Rendering::Universal::Internal::NapVolumetricCloudManger** StaticGet_m_Instance()
		{
			return (::UnityEngine::Rendering::Universal::Internal::NapVolumetricCloudManger**)Il2CppClass::FromTypeDefinitionIndex(NapVolumetricCloudManger_TypeDefinitionIndex)->GetStaticField(0x22490);
		}
		::UnityEngine::Vector2Int ResScaled; // 0x10
		::UnityEngine::Vector2Int traceRes; // 0x18
		::UnityEngine::Vector2Int targetRes; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPVOLUMETRICCLOUDMANGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPVOLUMETRICCLOUDMANGER__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Rendering::Universal::Internal::NapVolumetricCloudManger* get_instance()
		{
			return ((::UnityEngine::Rendering::Universal::Internal::NapVolumetricCloudManger*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPVOLUMETRICCLOUDMANGER_GET_INSTANCE_OFFSET))();
		}

		::System::Void BlitVolumetricCloud(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::Universal::VolumetricCloudConfig* cloudConfig)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::Universal::VolumetricCloudConfig*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPVOLUMETRICCLOUDMANGER_BLITVOLUMETRICCLOUD_OFFSET))(this, context, cmd, renderingData, cloudConfig);
		}

		::System::Void DrawFallBackCloud(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::VolumetricCloudConfig*& cloudConfig, ::UnityEngine::Material* cloudSampleMat)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::VolumetricCloudConfig*&, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPVOLUMETRICCLOUDMANGER_DRAWFALLBACKCLOUD_OFFSET))(this, context, cmd, cloudConfig, cloudSampleMat);
		}

		::System::Void RenderVolumetricRT(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::ComputeShader* cloudCompute, ::UnityEngine::Rendering::Universal::VolumetricCloudConfig* cloudConfig)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*, ::UnityEngine::Rendering::Universal::VolumetricCloudConfig*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPVOLUMETRICCLOUDMANGER_RENDERVOLUMETRICRT_OFFSET))(this, context, renderingData, cmd, cloudCompute, cloudConfig);
		}
	};
}
