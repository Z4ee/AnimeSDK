#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/Downsampling.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class String; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_COPYCOLORPASS_EXECUTECOPYCOLORPASS_OFFSET UNITYSDK_OFFSET(0x1D6F6980)
#define UNITYENGINE_NAPRENDERPIPELINE0_COPYCOLORPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1D6F7CE0)
#define UNITYENGINE_NAPRENDERPIPELINE0_COPYCOLORPASS_RELEASETEMPBUFFER_OFFSET UNITYSDK_OFFSET(0x1D6F7DF0)
#define UNITYENGINE_NAPRENDERPIPELINE0_COPYCOLORPASS_SETLOCALRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x1D6F66C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_COPYCOLORPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D6F7FA0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int CopyColorPass_TypeDefinitionIndex = 5819;

	class CopyColorPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_blurryTextureStrings()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CopyColorPass_TypeDefinitionIndex)->GetStaticField(0x51D0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_sizes()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CopyColorPass_TypeDefinitionIndex)->GetStaticField(0x51D8);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_blurryPing()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CopyColorPass_TypeDefinitionIndex)->GetStaticField(0x51E0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_blurryPong()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CopyColorPass_TypeDefinitionIndex)->GetStaticField(0x51E8);
		}
		static ::System::Boolean* StaticGet_s_TempMipBufferExist()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CopyColorPass_TypeDefinitionIndex)->GetStaticField(0x2A20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COPYCOLORPASS__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Rendering::RenderTargetIdentifier SetLocalRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTextureDescriptor cameraTextureDescriptor, ::UnityEngine::NAPRenderPipeline0::Downsampling m_DownsamplingMethod)
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTextureDescriptor, ::UnityEngine::NAPRenderPipeline0::Downsampling))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COPYCOLORPASS_SETLOCALRENDERTARGET_OFFSET))(cmd, cameraTextureDescriptor, m_DownsamplingMethod);
		}

		static ::System::Void ExecuteCopyColorPass(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::RenderTargetIdentifier targetColorBuffer, ::System::Boolean needResetRT, ::System::Boolean needBlur)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COPYCOLORPASS_EXECUTECOPYCOLORPASS_OFFSET))(context, renderingData, targetColorBuffer, needResetRT, needBlur);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COPYCOLORPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		static ::System::Void ReleaseTempBuffer(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COPYCOLORPASS_RELEASETEMPBUFFER_OFFSET))(cmd);
		}
	};
}
