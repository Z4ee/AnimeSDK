#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal::Internal { class CpuFloatParams; }
namespace UnityEngine::Rendering::Universal::Internal { class CpuVector4Params; }
namespace UnityEngine::Rendering::Universal::Internal { class ICpuParams; }

#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1CEE2870)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASS_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1CEE5960)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEE5A10)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEE2460)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASS___BASE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1CEE5A80)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int PerObjectShadowPass_TypeDefinitionIndex = 27527;

	class PerObjectShadowPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::UnityEngine::ComputeBuffer** StaticGet_dummyUAV()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowPass_TypeDefinitionIndex)->GetStaticField(0x22CB0);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Vector4>** StaticGet_dummyUAVData()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowPass_TypeDefinitionIndex)->GetStaticField(0x22CB8);
		}
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* profilingSampler; // 0xA8
		::UnityEngine::Rendering::Universal::Internal::CpuFloatParams* PerObjectShadowDepthBias; // 0xB0
		::UnityEngine::Rendering::Universal::Internal::CpuFloatParams* PerObjectShadowOptimizeBias; // 0xB8
		::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* PerObjectShadowPassOffsetWS; // 0xC0
		::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* ShadowPartsIDs; // 0xC8
		::UnityEngine::Rendering::Universal::Internal::CpuFloatParams* PerObjectShadowTargetIndex; // 0xD0
		::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* PerObjectShadowAtlasSize; // 0xD8
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::ICpuParams*>* m_CpuParamsList; // 0xE0
		::UnityEngine::Rendering::Universal::Internal::CpuFloatParams* PerObjectShadowFade; // 0xE8

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent renderPassEvent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASS__CTOR_OFFSET))(this, renderPassEvent);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASS__CCTOR_OFFSET))();
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASS_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		::System::Void __base_FrameCleanup(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASS___BASE_FRAMECLEANUP_OFFSET))(this, P0);
		}
	};
}
