#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderTargetHandle.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACEPLANARREFLECTIONSPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1EE26890)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACEPLANARREFLECTIONSPASS_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1EE29750)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACEPLANARREFLECTIONSPASS_GETRENDERTARGETRESOURCE_OFFSET UNITYSDK_OFFSET(0x1EE25CD0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACEPLANARREFLECTIONSPASS_SETUP_OFFSET UNITYSDK_OFFSET(0x1EE25CB0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACEPLANARREFLECTIONSPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE25960)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ScreenSpacePlanarReflectionsPass_TypeDefinitionIndex = 5839;

	class ScreenSpacePlanarReflectionsPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::System::String* profileTag; // 0xA8
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* mProfilingSampler; // 0xB0
		::System::Int32 COMPUTEBUFFER_STRIDE; // 0xB8
		::UnityEngine::ComputeShader* m_PixelIndexedCS; // 0xC0
		::System::Int32 PixelProjectedReflectionClearKernel; // 0xC8
		::System::Int32 PixelProjectedReflectionKernel; // 0xCC
		::System::Int32 PixelIndexedReflectionKernel; // 0xD0
		::System::Int32 FillHoleKernal; // 0xD4
		::System::Int32 TemporalFilterKernel; // 0xD8
		::System::Int32 FinalColorFilterKernel; // 0xDC
		::UnityEngine::RenderTextureDescriptor m_SSPRRTDescriptor; // 0xE0
		::UnityEngine::RenderTextureDescriptor m_SSPRHeightRTDescriptor; // 0x118
		::UnityEngine::RenderTextureDescriptor m_SSPRPackedDataDescriptor; // 0x150
		::System::Int32 m_frameCount; // 0x188
		::System::Boolean m_useSsprTemporalFilter; // 0x18C
		::System::Boolean m_useSsprFinalColorFilter; // 0x18D
		::UnityEngine::Vector2Int m_SSPRHistoryRTsSize; // 0x190
		::Il2CppArray<::UnityEngine::RenderTexture*>* m_SSPRHistoryRTs; // 0x198
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_SSPRRenderTexture; // 0x1A0
		::UnityEngine::ComputeBuffer* m_SSPRPackedDataBuffer; // 0x1A8
		::UnityEngine::ComputeBuffer* m_SSPRPackedFillHoleBuffer; // 0x1B0
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_SSPRHeightRT; // 0x1B8
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_SSPRPackedDataRT; // 0x1BC
		::UnityEngine::Vector2Int m_RTSize; // 0x1C0
		::UnityEngine::Vector3Int m_ThreadGroups; // 0x1C8
		::System::Single m_PlaneHeightWS; // 0x1D4
		::System::Single m_TaauScale; // 0x1D8
		::System::Boolean m_TaaUseLdrFormat; // 0x1DC
		::Il2CppArray<::UnityEngine::RenderTexture*>* m_TempRTs; // 0x1E0

		::System::Void _ctor(::System::String* profilerTag, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* renderPassEventConfig, ::UnityEngine::ComputeShader* computeShader)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>*, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACEPLANARREFLECTIONSPASS__CTOR_OFFSET))(this, profilerTag, renderPassEventConfig, computeShader);
		}

		::System::Void Setup(::System::Single InPlaneHeightWS, ::System::Single taauScale, ::System::Boolean taaUseLdrFormat)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACEPLANARREFLECTIONSPASS_SETUP_OFFSET))(this, InPlaneHeightWS, taauScale, taaUseLdrFormat);
		}

		::System::Void GetRenderTargetResource(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACEPLANARREFLECTIONSPASS_GETRENDERTARGETRESOURCE_OFFSET))(this, cmd, renderingData);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACEPLANARREFLECTIONSPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACEPLANARREFLECTIONSPASS_FRAMECLEANUP_OFFSET))(this, cmd);
		}
	};
}
