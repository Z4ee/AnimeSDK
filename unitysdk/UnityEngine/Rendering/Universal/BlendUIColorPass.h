#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderTargetHandle.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_BLENDUICOLORPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1A693140)
#define UNITYENGINE_RENDERING_UNIVERSAL_BLENDUICOLORPASS_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1A6944E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_BLENDUICOLORPASS_GET_MAT_OFFSET UNITYSDK_OFFSET(0x1A692F50)
#define UNITYENGINE_RENDERING_UNIVERSAL_BLENDUICOLORPASS_SETUP_OFFSET UNITYSDK_OFFSET(0x1A6930F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_BLENDUICOLORPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A6945F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_BLENDUICOLORPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A692FB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_BLENDUICOLORPASS___BASE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1A6946E0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int BlendUIColorPass_TypeDefinitionIndex = 30179;

	class BlendUIColorPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet__FrameGenUIRTID()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(BlendUIColorPass_TypeDefinitionIndex)->GetStaticField(0x6DA0);
		}
		static ::System::Int32* StaticGet__FrameGenUI()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BlendUIColorPass_TypeDefinitionIndex)->GetStaticField(0x6DC8);
		}
		static ::System::Int32* StaticGet__FrameGenHudless()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BlendUIColorPass_TypeDefinitionIndex)->GetStaticField(0x6DCC);
		}
		static ::System::Int32* StaticGet__PreUIBackBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BlendUIColorPass_TypeDefinitionIndex)->GetStaticField(0x6DD0);
		}
		static ::System::Int32* StaticGet__UITexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BlendUIColorPass_TypeDefinitionIndex)->GetStaticField(0x6DD4);
		}
		static ::System::Int32* StaticGet__FlipUITexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BlendUIColorPass_TypeDefinitionIndex)->GetStaticField(0x6DD8);
		}
		static ::System::Int32* StaticGet__FlipPreUIBackBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BlendUIColorPass_TypeDefinitionIndex)->GetStaticField(0x6DDC);
		}
		static ::System::Int32* StaticGet__OffScreenUI()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BlendUIColorPass_TypeDefinitionIndex)->GetStaticField(0x6DE0);
		}
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_Sampler; // 0xA8

		::System::Void _ctor(::System::String* profilerTag, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* renderPassEventConfig)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_BLENDUICOLORPASS__CTOR_OFFSET))(this, profilerTag, renderPassEventConfig);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_BLENDUICOLORPASS__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Material* get_mat()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_BLENDUICOLORPASS_GET_MAT_OFFSET))();
		}

		::System::Void Setup(::UnityEngine::NAPRenderPipeline0::RenderTargetHandle cameraTarget)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_BLENDUICOLORPASS_SETUP_OFFSET))(this, cameraTarget);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_BLENDUICOLORPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_BLENDUICOLORPASS_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		::System::Void __base_FrameCleanup(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_BLENDUICOLORPASS___BASE_FRAMECLEANUP_OFFSET))(this, P0);
		}
	};
}
