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

#define UNITYENGINE_RENDERING_UNIVERSAL_BRIGHTSPOTSFLAREPASS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B8702B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_BRIGHTSPOTSFLAREPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B86F030)
#define UNITYENGINE_RENDERING_UNIVERSAL_BRIGHTSPOTSFLAREPASS_SETUP_OFFSET UNITYSDK_OFFSET(0x1B86E8B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_BRIGHTSPOTSFLAREPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B870330)
#define UNITYENGINE_RENDERING_UNIVERSAL_BRIGHTSPOTSFLAREPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B86E5C0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int BrightSpotsFlarePass_TypeDefinitionIndex = 26816;

	class BrightSpotsFlarePass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::Il2CppArray<::System::UInt32>** StaticGet_k_DefaultDrawArgs()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(BrightSpotsFlarePass_TypeDefinitionIndex)->GetStaticField(0x21D40);
		}
		static ::System::Int32* StaticGet__Opacity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BrightSpotsFlarePass_TypeDefinitionIndex)->GetStaticField(0x6B10);
		}
		static ::System::Int32* StaticGet__SourceTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BrightSpotsFlarePass_TypeDefinitionIndex)->GetStaticField(0x6B14);
		}
		static ::System::Int32* StaticGet__DrawArgsBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BrightSpotsFlarePass_TypeDefinitionIndex)->GetStaticField(0x6B18);
		}
		static ::System::Int32* StaticGet__MinSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BrightSpotsFlarePass_TypeDefinitionIndex)->GetStaticField(0x6B1C);
		}
		static ::System::Int32* StaticGet__MaxSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BrightSpotsFlarePass_TypeDefinitionIndex)->GetStaticField(0x6B20);
		}
		static ::System::Int32* StaticGet__WidthRatio()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BrightSpotsFlarePass_TypeDefinitionIndex)->GetStaticField(0x6B24);
		}
		static ::System::Int32* StaticGet__FlareScreenSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BrightSpotsFlarePass_TypeDefinitionIndex)->GetStaticField(0x6B28);
		}
		static ::System::Int32* StaticGet__FlareSourceTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BrightSpotsFlarePass_TypeDefinitionIndex)->GetStaticField(0x6B2C);
		}
		static ::System::Int32* StaticGet__FlareTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BrightSpotsFlarePass_TypeDefinitionIndex)->GetStaticField(0x6B30);
		}
		static ::System::Int32* StaticGet__FlareParamsBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BrightSpotsFlarePass_TypeDefinitionIndex)->GetStaticField(0x6B34);
		}
		static ::System::Int32* StaticGet__BrightPoints()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BrightSpotsFlarePass_TypeDefinitionIndex)->GetStaticField(0x6B38);
		}
		// static const ::System::String* k_ProfilerTag; // 0x0
		::UnityEngine::Texture2D* flareTexture; // 0xA8
		::UnityEngine::ComputeBuffer* flareParamsBuffer; // 0xB0
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* profilingSampler; // 0xB8
		::UnityEngine::ComputeBuffer* brightPoints; // 0xC0
		::UnityEngine::Material* drawFlareMat; // 0xC8
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* m_ShaderTagIdList; // 0xD0
		::UnityEngine::ComputeBuffer* drawArgsBuffer; // 0xD8
		::UnityEngine::ComputeShader* findBrightsComputeShader; // 0xE0
		::System::Single minSize; // 0xE8
		::System::Int32 groupSizeX; // 0xEC
		::UnityEngine::Rendering::RenderTargetIdentifier cameraDepthIdent; // 0xF0
		::UnityEngine::Rendering::RenderTargetIdentifier cameraColorIdent; // 0x118
		::System::Int32 groupSizeY; // 0x140
		::System::Single luminanceThreshold; // 0x144
		::System::Single opacity; // 0x148
		::System::Int32 findBrightsKernel; // 0x14C
		::System::Single maxSize; // 0x150
		::System::Int32 verticalGridCount; // 0x154

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
