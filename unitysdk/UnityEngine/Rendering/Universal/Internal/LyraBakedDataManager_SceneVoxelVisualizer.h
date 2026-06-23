#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderTargetHandle.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_SCENEVOXELVISUALIZER_CLEARINIDIRECTARGS_OFFSET UNITYSDK_OFFSET(0x1B181AE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_SCENEVOXELVISUALIZER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B181940)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_SCENEVOXELVISUALIZER_INITIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1B181950)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_SCENEVOXELVISUALIZER_SETBUFFERPARAMS_OFFSET UNITYSDK_OFFSET(0x1B181C30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_SCENEVOXELVISUALIZER_SETCOORDTOWORLDPOSOFFSETANDSCALE_OFFSET UNITYSDK_OFFSET(0x1B181E20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_SCENEVOXELVISUALIZER_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x1B181EA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_SCENEVOXELVISUALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1818F0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraBakedDataManager_SceneVoxelVisualizer_TypeDefinitionIndex = 27318;

	class LyraBakedDataManager_SceneVoxelVisualizer : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle* StaticGet_m_TempSceneVoxelVisualizingDepthHandle()
		{
			return (::UnityEngine::NAPRenderPipeline0::RenderTargetHandle*)Il2CppClass::FromTypeDefinitionIndex(LyraBakedDataManager_SceneVoxelVisualizer_TypeDefinitionIndex)->GetStaticField(0x5650);
		}
		::Il2CppArray<::UnityEngine::Vector4>* m_SceneVoxelCoordToWorldPosOffsetAndScale; // 0x10
		::UnityEngine::ComputeBuffer* m_VisualizationIndirectDrawBuffer; // 0x18
		::UnityEngine::ComputeBuffer* m_VisualizationCubeInfoBuffer; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_SCENEVOXELVISUALIZER__CTOR_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_SCENEVOXELVISUALIZER_FINALIZE_OFFSET))(this);
		}

		::System::Void InitIfNeeded(::System::Int32 maxVoxelNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_SCENEVOXELVISUALIZER_INITIFNEEDED_OFFSET))(this, maxVoxelNum);
		}

		::System::Void ClearInidirectArgs(::UnityEngine::Rendering::CommandBuffer* cb)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_SCENEVOXELVISUALIZER_CLEARINIDIRECTARGS_OFFSET))(this, cb);
		}

		::System::Void SetBufferParams(::UnityEngine::Rendering::CommandBuffer* cb, ::UnityEngine::ComputeShader* cs, ::System::Int32 kernel)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_SCENEVOXELVISUALIZER_SETBUFFERPARAMS_OFFSET))(this, cb, cs, kernel);
		}

		::System::Void SetCoordToWorldPosOffsetAndScale(::System::Int32 clipmapIndex, ::UnityEngine::Vector4& coordToWorldPosOffsetAndScale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_SCENEVOXELVISUALIZER_SETCOORDTOWORLDPOSOFFSETANDSCALE_OFFSET))(this, clipmapIndex, coordToWorldPosOffsetAndScale);
		}

		::System::Void Visualize(::UnityEngine::Rendering::CommandBuffer* cb, ::UnityEngine::Camera* cam, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle colorHandle, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle depthHandle, ::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Camera*, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_SCENEVOXELVISUALIZER_VISUALIZE_OFFSET))(this, cb, cam, colorHandle, depthHandle, width, height);
		}
	};
}
