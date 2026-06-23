#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/Downsampling.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferLoadAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferStoreAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineAsset; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYCOLORPASS_NOTNATIVE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B88F200)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYCOLORPASS_NOTNATIVE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1B891890)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYCOLORPASS_NOTNATIVE_RELEASETEMPBUFFER_OFFSET UNITYSDK_OFFSET(0x1B891690)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYCOLORPASS_NOTNATIVE_SETLOCALRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x1B88EEC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYCOLORPASS_NOTNATIVE_SETUP_OFFSET UNITYSDK_OFFSET(0x1B88EE60)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYCOLORPASS_NOTNATIVE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B891920)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYCOLORPASS_NOTNATIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B88EAE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYCOLORPASS_NOTNATIVE___BASE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1B891C60)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int CopyColorPass_NotNative_TypeDefinitionIndex = 26942;

	class CopyColorPass_NotNative : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>** StaticGet_glassFilterBuffers()
		{
			return (::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>**)Il2CppClass::FromTypeDefinitionIndex(CopyColorPass_NotNative_TypeDefinitionIndex)->GetStaticField(0x21D70);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_sizes()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CopyColorPass_NotNative_TypeDefinitionIndex)->GetStaticField(0x21D78);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_blurryPing()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CopyColorPass_NotNative_TypeDefinitionIndex)->GetStaticField(0x21D80);
		}
		static ::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>** StaticGet_glassFilterLoadActions()
		{
			return (::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>**)Il2CppClass::FromTypeDefinitionIndex(CopyColorPass_NotNative_TypeDefinitionIndex)->GetStaticField(0x21D88);
		}
		static ::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>** StaticGet_glassFilterStoreActions()
		{
			return (::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>**)Il2CppClass::FromTypeDefinitionIndex(CopyColorPass_NotNative_TypeDefinitionIndex)->GetStaticField(0x21D90);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_blurryPong()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CopyColorPass_NotNative_TypeDefinitionIndex)->GetStaticField(0x21D98);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_blurryTextureStrings()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CopyColorPass_NotNative_TypeDefinitionIndex)->GetStaticField(0x21DA0);
		}
		static ::System::Int32* StaticGet__TempGlassBlurTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CopyColorPass_NotNative_TypeDefinitionIndex)->GetStaticField(0x6B50);
		}
		static ::System::Int32* StaticGet__FinalGlassBlurTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CopyColorPass_NotNative_TypeDefinitionIndex)->GetStaticField(0x6B54);
		}
		static ::System::UInt32* StaticGet_RTLifetime_BlurRT1_0()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CopyColorPass_NotNative_TypeDefinitionIndex)->GetStaticField(0x6B58);
		}
		static ::System::UInt32* StaticGet_RTLifetime_TempGlassBlurTexture()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CopyColorPass_NotNative_TypeDefinitionIndex)->GetStaticField(0x6B5C);
		}
		static ::System::Int32* StaticGet__GlassBlurTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CopyColorPass_NotNative_TypeDefinitionIndex)->GetStaticField(0x6B60);
		}
		static ::System::UInt32* StaticGet_RTLifetime_TempGlassBlurCoCTexture()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CopyColorPass_NotNative_TypeDefinitionIndex)->GetStaticField(0x6B64);
		}
		static ::System::Boolean* StaticGet_s_TempMipBufferExist()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CopyColorPass_NotNative_TypeDefinitionIndex)->GetStaticField(0x6B68);
		}
		static ::System::Int32* StaticGet__GlassBlurCoCTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CopyColorPass_NotNative_TypeDefinitionIndex)->GetStaticField(0x6B6C);
		}
		static ::System::UInt32* StaticGet_RTLifetime_BlurRT2_0()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CopyColorPass_NotNative_TypeDefinitionIndex)->GetStaticField(0x6B70);
		}
		// static const ::System::String* k_ProfilerTag; // 0x0
		::System::Boolean m_NeedExtraDownSampleForFrostedGlass; // 0xA8
		::System::Boolean m_32BitHDRSupport; // 0xA9

		::System::Void _ctor(::System::String* profilerTag, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* renderPassEventConfig)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYCOLORPASS_NOTNATIVE__CTOR_OFFSET))(this, profilerTag, renderPassEventConfig);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYCOLORPASS_NOTNATIVE__CCTOR_OFFSET))();
		}

		::System::Void Setup(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* globalSetting)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYCOLORPASS_NOTNATIVE_SETUP_OFFSET))(this, globalSetting);
		}

		static ::UnityEngine::Rendering::RenderTargetIdentifier SetLocalRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTextureDescriptor cameraTextureDescriptor, ::UnityEngine::NAPRenderPipeline0::Downsampling m_DownsamplingMethod)
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTextureDescriptor, ::UnityEngine::NAPRenderPipeline0::Downsampling))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYCOLORPASS_NOTNATIVE_SETLOCALRENDERTARGET_OFFSET))(cmd, cameraTextureDescriptor, m_DownsamplingMethod);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYCOLORPASS_NOTNATIVE_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		static ::System::Void ReleaseTempBuffer(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYCOLORPASS_NOTNATIVE_RELEASETEMPBUFFER_OFFSET))(cmd);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYCOLORPASS_NOTNATIVE_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		::System::Void __base_FrameCleanup(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYCOLORPASS_NOTNATIVE___BASE_FRAMECLEANUP_OFFSET))(this, P0);
		}
	};
}
