#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableCullingParameters.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_SUNSHADOWCACHEPASS_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1AF4D870)
#define UNITYENGINE_NAPRENDERPIPELINE0_SUNSHADOWCACHEPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1AF4D7C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SUNSHADOWCACHEPASS_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1AF4D820)
#define UNITYENGINE_NAPRENDERPIPELINE0_SUNSHADOWCACHEPASS_SETUPCULLINGPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1AF4D770)
#define UNITYENGINE_NAPRENDERPIPELINE0_SUNSHADOWCACHEPASS_SETUP_OFFSET UNITYSDK_OFFSET(0x1AF4D720)
#define UNITYENGINE_NAPRENDERPIPELINE0_SUNSHADOWCACHEPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF4D6A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SUNSHADOWCACHEPASS___BASE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1AF4D8B0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int SunShadowCachePass_TypeDefinitionIndex = 26866;

	class SunShadowCachePass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::Il2CppArray<::UnityEngine::Plane>* m_TempPlanes; // 0xA8
		::System::Int32 m_NameSunShadowCache; // 0xB0
		::System::UInt64 m_TempCustomDirCullParamsPtr; // 0xB8

		::System::Void _ctor(::System::String* profileTag, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* renderPassEventConfig)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SUNSHADOWCACHEPASS__CTOR_OFFSET))(this, profileTag, renderPassEventConfig);
		}

		::System::Boolean Setup(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SUNSHADOWCACHEPASS_SETUP_OFFSET))(this, renderingData);
		}

		::System::Void SetupCullingParameters(::UnityEngine::Rendering::ScriptableCullingParameters& cullingParameters, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableCullingParameters&, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SUNSHADOWCACHEPASS_SETUPCULLINGPARAMETERS_OFFSET))(this, cullingParameters, cameraData);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SUNSHADOWCACHEPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SUNSHADOWCACHEPASS_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SUNSHADOWCACHEPASS_CLEANUP_OFFSET))(this);
		}

		::System::Void __base_FrameCleanup(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SUNSHADOWCACHEPASS___BASE_FRAMECLEANUP_OFFSET))(this, P0);
		}
	};
}
