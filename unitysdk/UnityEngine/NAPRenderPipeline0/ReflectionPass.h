#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MirrorData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Rendering/FilteringSettings.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/SortingCriteria.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_REFLECTIONPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1EB62F40)
#define UNITYENGINE_NAPRENDERPIPELINE0_REFLECTIONPASS_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1EB61CE0)
#define UNITYENGINE_NAPRENDERPIPELINE0_REFLECTIONPASS_RENDERPLANARREFLECTIONCUBECORRECTED_OFFSET UNITYSDK_OFFSET(0x1EB61E30)
#define UNITYENGINE_NAPRENDERPIPELINE0_REFLECTIONPASS_SETUP_OFFSET UNITYSDK_OFFSET(0x1EB61CB0)
#define UNITYENGINE_NAPRENDERPIPELINE0_REFLECTIONPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB61AD0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ReflectionPass_TypeDefinitionIndex = 5840;

	class ReflectionPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::UnityEngine::Vector3 m_ReflectionPlanePos; // 0xA8
		::UnityEngine::Vector3 m_ReflectionPlaneNormal; // 0xB4
		::UnityEngine::Rendering::FilteringSettings m_FilterSetting; // 0xC0
		::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::MirrorData>* m_MirrorArrayDataForCPU; // 0xE0
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_ProfilingSampler; // 0xE8
		::System::Int32 m_LodSteps; // 0xF0
		::UnityEngine::RenderTextureDescriptor m_TargetDescriptorForArray; // 0xF4
		::UnityEngine::RenderTexture* m_ReflectionTexArray; // 0x130
		::UnityEngine::Vector2Int preTextureSize; // 0x138
		::UnityEngine::Experimental::Rendering::GraphicsFormat preTextureFormat; // 0x140

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evn)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_REFLECTIONPASS__CTOR_OFFSET))(this, evn);
		}

		::System::Void Setup(::UnityEngine::Vector3 reflectionPlanePos, ::UnityEngine::Vector3 reflectionPlaneNormal)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_REFLECTIONPASS_SETUP_OFFSET))(this, reflectionPlanePos, reflectionPlaneNormal);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_REFLECTIONPASS_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		static ::System::Void RenderPlanarReflectionCubeCorrected(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::SortingCriteria sortFlags, ::UnityEngine::Rendering::FilteringSettings& FilterSetting, ::UnityEngine::Vector3& ViewPos)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::SortingCriteria, ::UnityEngine::Rendering::FilteringSettings&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_REFLECTIONPASS_RENDERPLANARREFLECTIONCUBECORRECTED_OFFSET))(renderingData, postCullRenderingData, context, cmd, sortFlags, FilterSetting, ViewPos);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_REFLECTIONPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}
	};
}
