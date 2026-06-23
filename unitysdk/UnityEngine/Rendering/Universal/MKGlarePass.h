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

#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLAREPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xF7A5C30)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLAREPASS_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0xF7A5FB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLAREPASS_GETASPECT_OFFSET UNITYSDK_OFFSET(0xF7A5700)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLAREPASS_GETCAMERAHEIGHT_OFFSET UNITYSDK_OFFSET(0xF7A5670)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLAREPASS_GETCAMERAWIDTH_OFFSET UNITYSDK_OFFSET(0xF7A5620)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLAREPASS_GETOVERWRITEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0xF7A5840)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLAREPASS_GETOVERWRITEDIMENSION_OFFSET UNITYSDK_OFFSET(0xF7A5880)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLAREPASS_GETOVERWRITEVOLUMEDEPTH_OFFSET UNITYSDK_OFFSET(0xF7A58D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLAREPASS_GETSTEREOENABLED_OFFSET UNITYSDK_OFFSET(0xF7A56C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLAREPASS_GETTARGETTEXTURE_OFFSET UNITYSDK_OFFSET(0xF7A5920)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLAREPASS_GETWORLDTOCAMERAMATRIX_OFFSET UNITYSDK_OFFSET(0xF7A5760)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLAREPASS_SETUP_OFFSET UNITYSDK_OFFSET(0xF7A5B10)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLAREPASS__CTOR_OFFSET UNITYSDK_OFFSET(0xF7A5A90)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLAREPASS___BASE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0xF7A6030)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MKGlarePass_TypeDefinitionIndex = 26748;

	class MKGlarePass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::PostProcess::MKGlow::RenderTarget destinationRenderTarget; // 0xA8
		::UnityEngine::NAPRenderPipeline0::RenderingData _renderingData; // 0xE0
		::System::String* _profilerName; // 0x678
		::PostProcess::MKGlow::Effect* effect; // 0x680
		::UnityEngine::Rendering::Universal::MKGlow* _mkGlow; // 0x688
		::PostProcess::MKGlow::RenderTarget sourceRenderTarget; // 0x690
		::UnityEngine::RenderTextureDescriptor _sourceDescriptor; // 0x6C8
		::System::Boolean mkGlareIsReady; // 0x700

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
