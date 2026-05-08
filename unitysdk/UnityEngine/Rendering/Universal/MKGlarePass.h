#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PostProcess/MKGlow/RenderTarget.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/TextureDimension.h"

namespace PostProcess::MKGlow { class Effect; }
namespace System { class String; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class MKGlow; }

#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLAREPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xF7FC3C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLAREPASS_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0xF7FC740)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLAREPASS_GETASPECT_OFFSET UNITYSDK_OFFSET(0xF7FBE90)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLAREPASS_GETCAMERAHEIGHT_OFFSET UNITYSDK_OFFSET(0xF7FBE00)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLAREPASS_GETCAMERAWIDTH_OFFSET UNITYSDK_OFFSET(0xF7FBDB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLAREPASS_GETOVERWRITEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0xF7FBFD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLAREPASS_GETOVERWRITEDIMENSION_OFFSET UNITYSDK_OFFSET(0xF7FC010)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLAREPASS_GETOVERWRITEVOLUMEDEPTH_OFFSET UNITYSDK_OFFSET(0xF7FC060)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLAREPASS_GETSTEREOENABLED_OFFSET UNITYSDK_OFFSET(0xF7FBE50)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLAREPASS_GETTARGETTEXTURE_OFFSET UNITYSDK_OFFSET(0xF7FC0B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLAREPASS_GETWORLDTOCAMERAMATRIX_OFFSET UNITYSDK_OFFSET(0xF7FBEF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLAREPASS_SETUP_OFFSET UNITYSDK_OFFSET(0xF7FC2A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLAREPASS__CTOR_OFFSET UNITYSDK_OFFSET(0xF7FC220)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLAREPASS___BASE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0xF7FC7C0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MKGlarePass_TypeDefinitionIndex = 30194;

	class MKGlarePass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::System::String* _profilerName; // 0xA8
		::PostProcess::MKGlow::RenderTarget sourceRenderTarget; // 0xB0
		::UnityEngine::Rendering::Universal::MKGlow* _mkGlow; // 0xE8
		::PostProcess::MKGlow::RenderTarget destinationRenderTarget; // 0xF0
		::UnityEngine::NAPRenderPipeline0::RenderingData _renderingData; // 0x128
		::PostProcess::MKGlow::Effect* effect; // 0x6C0
		::System::Boolean mkGlareIsReady; // 0x6C8
		::UnityEngine::RenderTextureDescriptor _sourceDescriptor; // 0x6CC

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent renderPassEvent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLAREPASS__CTOR_OFFSET))(this, renderPassEvent);
		}

		::System::Int32 GetCameraWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLAREPASS_GETCAMERAWIDTH_OFFSET))(this);
		}

		::System::Int32 GetCameraHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLAREPASS_GETCAMERAHEIGHT_OFFSET))(this);
		}

		::System::Boolean GetStereoEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLAREPASS_GETSTEREOENABLED_OFFSET))(this);
		}

		::System::Single GetAspect()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLAREPASS_GETASPECT_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 GetWorldToCameraMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLAREPASS_GETWORLDTOCAMERAMATRIX_OFFSET))(this);
		}

		::System::Boolean GetOverwriteDescriptor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLAREPASS_GETOVERWRITEDESCRIPTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::TextureDimension GetOverwriteDimension()
		{
			return ((::UnityEngine::Rendering::TextureDimension(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLAREPASS_GETOVERWRITEDIMENSION_OFFSET))(this);
		}

		::System::Int32 GetOverwriteVolumeDepth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLAREPASS_GETOVERWRITEVOLUMEDEPTH_OFFSET))(this);
		}

		::System::Boolean GetTargetTexture()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLAREPASS_GETTARGETTEXTURE_OFFSET))(this);
		}

		::System::Void Setup(::UnityEngine::RenderTextureDescriptor cameraTextureDescriptor, ::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::Universal::MKGlow* mkGlow)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::Universal::MKGlow*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLAREPASS_SETUP_OFFSET))(this, cameraTextureDescriptor, source, mkGlow);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLAREPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLAREPASS_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		::System::Void __base_FrameCleanup(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLAREPASS___BASE_FRAMECLEANUP_OFFSET))(this, P0);
		}
	};
}
