#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/ShaderTagId.h"

class WeatherConfig;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }

#define UNITYENGINE_RENDERING_UNIVERSAL_BRIGHTSPOTSFLAREPASS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CC7D8F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_BRIGHTSPOTSFLAREPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1CC7C710)
#define UNITYENGINE_RENDERING_UNIVERSAL_BRIGHTSPOTSFLAREPASS_SETUP_OFFSET UNITYSDK_OFFSET(0x1CC7BF70)
#define UNITYENGINE_RENDERING_UNIVERSAL_BRIGHTSPOTSFLAREPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC7D970)
#define UNITYENGINE_RENDERING_UNIVERSAL_BRIGHTSPOTSFLAREPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC7BC80)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int BrightSpotsFlarePass_TypeDefinitionIndex = 27910;

	class BrightSpotsFlarePass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::Il2CppArray<::System::UInt32>** StaticGet_k_DefaultDrawArgs()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(BrightSpotsFlarePass_TypeDefinitionIndex)->GetStaticField(0x234E0);
		}
		static ::System::Int32* StaticGet__WidthRatio()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BrightSpotsFlarePass_TypeDefinitionIndex)->GetStaticField(0x6A90);
		}
		static ::System::Int32* StaticGet__Opacity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BrightSpotsFlarePass_TypeDefinitionIndex)->GetStaticField(0x6A94);
		}
		static ::System::Int32* StaticGet__SourceTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BrightSpotsFlarePass_TypeDefinitionIndex)->GetStaticField(0x6A98);
		}
		static ::System::Int32* StaticGet__MinSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BrightSpotsFlarePass_TypeDefinitionIndex)->GetStaticField(0x6A9C);
		}
		static ::System::Int32* StaticGet__FlareSourceTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BrightSpotsFlarePass_TypeDefinitionIndex)->GetStaticField(0x6AA0);
		}
		static ::System::Int32* StaticGet__BrightPoints()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BrightSpotsFlarePass_TypeDefinitionIndex)->GetStaticField(0x6AA4);
		}
		static ::System::Int32* StaticGet__MaxSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BrightSpotsFlarePass_TypeDefinitionIndex)->GetStaticField(0x6AA8);
		}
		static ::System::Int32* StaticGet__DrawArgsBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BrightSpotsFlarePass_TypeDefinitionIndex)->GetStaticField(0x6AAC);
		}
		static ::System::Int32* StaticGet__FlareParamsBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BrightSpotsFlarePass_TypeDefinitionIndex)->GetStaticField(0x6AB0);
		}
		static ::System::Int32* StaticGet__FlareScreenSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BrightSpotsFlarePass_TypeDefinitionIndex)->GetStaticField(0x6AB4);
		}
		static ::System::Int32* StaticGet__FlareTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BrightSpotsFlarePass_TypeDefinitionIndex)->GetStaticField(0x6AB8);
		}
		// static const ::System::String* k_ProfilerTag; // 0x0
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* m_ShaderTagIdList; // 0xA8
		::UnityEngine::Material* drawFlareMat; // 0xB0
		::UnityEngine::ComputeBuffer* flareParamsBuffer; // 0xB8
		::UnityEngine::ComputeBuffer* drawArgsBuffer; // 0xC0
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* profilingSampler; // 0xC8
		::UnityEngine::ComputeShader* findBrightsComputeShader; // 0xD0
		::UnityEngine::ComputeBuffer* brightPoints; // 0xD8
		::UnityEngine::Texture2D* flareTexture; // 0xE0
		::System::Int32 groupSizeY; // 0xE8
		::System::Int32 groupSizeX; // 0xEC
		::System::Single opacity; // 0xF0
		::System::Single maxSize; // 0xF4
		::System::Single luminanceThreshold; // 0xF8
		::System::Int32 findBrightsKernel; // 0xFC
		::System::Int32 verticalGridCount; // 0x100
		::System::Single minSize; // 0x104
		::UnityEngine::Rendering::RenderTargetIdentifier cameraColorIdent; // 0x108
		::UnityEngine::Rendering::RenderTargetIdentifier cameraDepthIdent; // 0x130

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt, ::UnityEngine::ComputeShader* findBrightsCompute, ::UnityEngine::Material* flareMaterial)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent, ::UnityEngine::ComputeShader*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_BRIGHTSPOTSFLAREPASS__CTOR_OFFSET))(this, evt, findBrightsCompute, flareMaterial);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_BRIGHTSPOTSFLAREPASS__CCTOR_OFFSET))();
		}

		::System::Void Setup(::UnityEngine::Rendering::RenderTargetIdentifier cameraColorIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier cameraDepthIdentifier, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::WeatherConfig* inWeatherConfig, ::System::Boolean& needDrawPass)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::WeatherConfig*, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_BRIGHTSPOTSFLAREPASS_SETUP_OFFSET))(this, cameraColorIdentifier, cameraDepthIdentifier, renderingData, inWeatherConfig, needDrawPass);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_BRIGHTSPOTSFLAREPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_BRIGHTSPOTSFLAREPASS_DISPOSE_OFFSET))(this);
		}
	};
}
