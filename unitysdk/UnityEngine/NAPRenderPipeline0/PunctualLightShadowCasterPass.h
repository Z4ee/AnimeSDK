#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PunctualLightShadowCasterPass_ShadowAtlasDynamicUpdateRequest.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PunctualLightShadowCasterPass_ShadowAtlasStaticUpdateRequest.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Profiling { class CustomSampler; }

#define UNITYENGINE_NAPRENDERPIPELINE0_PUNCTUALLIGHTSHADOWCASTERPASS_CONVERTTOATLASMATRIX_OFFSET UNITYSDK_OFFSET(0x1B2F3010)
#define UNITYENGINE_NAPRENDERPIPELINE0_PUNCTUALLIGHTSHADOWCASTERPASS_EXECUTECACHED_OFFSET UNITYSDK_OFFSET(0x1B2F17C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_PUNCTUALLIGHTSHADOWCASTERPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B2F07A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_PUNCTUALLIGHTSHADOWCASTERPASS_FINISHDYNAMICREQ_OFFSET UNITYSDK_OFFSET(0x1B2F3200)
#define UNITYENGINE_NAPRENDERPIPELINE0_PUNCTUALLIGHTSHADOWCASTERPASS_SETTILEVIEWPORT_OFFSET UNITYSDK_OFFSET(0x1B2F2FA0)
#define UNITYENGINE_NAPRENDERPIPELINE0_PUNCTUALLIGHTSHADOWCASTERPASS_SETUPCACHED_OFFSET UNITYSDK_OFFSET(0x1B2F0940)
#define UNITYENGINE_NAPRENDERPIPELINE0_PUNCTUALLIGHTSHADOWCASTERPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2F0640)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int PunctualLightShadowCasterPass_TypeDefinitionIndex = 5805;

	class PunctualLightShadowCasterPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::System::Single m_LastReportErrorTime; // 0xA8
		::UnityEngine::Profiling::CustomSampler* m_Sampler; // 0xB0
		::System::Boolean isPlanarReflectionCameraAndUseBoundCameraShadowMap_Punctual; // 0xB8
		::Il2CppArray<::UnityEngine::NAPRenderPipeline0::PunctualLightShadowCasterPass_ShadowAtlasStaticUpdateRequest>* staticUpdateRequests; // 0xC0
		::System::Int32 staticUpdateCnt; // 0xC8
		::Il2CppArray<::UnityEngine::NAPRenderPipeline0::PunctualLightShadowCasterPass_ShadowAtlasDynamicUpdateRequest>* dynamicUpdateRequests; // 0xD0
		::System::Int32 dynamicUpdateCnt; // 0xD8
		::Il2CppArray<::UnityEngine::Vector4>* blitDepthTileParams; // 0xE0
		::System::Int32 blitTileCnt; // 0xE8
		::System::Collections::Generic::List_1<::System::UInt64>* emptyBlitKeys; // 0xF0
		::System::Int32 cachedAtlasSize; // 0xF8
		::System::Int32 cachedTileSize; // 0xFC
		::System::Single cachedTexelSize; // 0x100
		::System::Single cachedFilterSize; // 0x104
		::System::Single cachedBorder; // 0x108
		::Il2CppArray<::UnityEngine::Matrix4x4>* cachedWorldToShadow; // 0x110
		::Il2CppArray<::UnityEngine::Vector4>* cachedTileData; // 0x118
		::UnityEngine::Vector4 cachedShadowMapSize; // 0x120

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PUNCTUALLIGHTSHADOWCASTERPASS__CTOR_OFFSET))(this, evt);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PUNCTUALLIGHTSHADOWCASTERPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void SetTileViewport(::System::Int32 index, ::System::UInt32 split, ::System::Single tileSize, ::UnityEngine::Rect& viewPort, ::UnityEngine::Vector2& offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Single, ::UnityEngine::Rect&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PUNCTUALLIGHTSHADOWCASTERPASS_SETTILEVIEWPORT_OFFSET))(this, index, split, tileSize, viewPort, offset);
		}

		::UnityEngine::Matrix4x4 ConvertToAtlasMatrix(::UnityEngine::Matrix4x4 m, ::UnityEngine::Vector2 offset, ::System::Single scale)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PUNCTUALLIGHTSHADOWCASTERPASS_CONVERTTOATLASMATRIX_OFFSET))(this, m, offset, scale);
		}

		::System::Boolean SetupCached(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PUNCTUALLIGHTSHADOWCASTERPASS_SETUPCACHED_OFFSET))(this, renderingData, postCullRenderingData);
		}

		::System::Void ExecuteCached(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PUNCTUALLIGHTSHADOWCASTERPASS_EXECUTECACHED_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void FinishDynamicReq(::System::Int32 staticSlot, ::System::Int32 dynamicSlot, ::UnityEngine::NAPRenderPipeline0::PunctualLightShadowCasterPass_ShadowAtlasDynamicUpdateRequest& dynamicReq, ::System::Boolean skipBlit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::NAPRenderPipeline0::PunctualLightShadowCasterPass_ShadowAtlasDynamicUpdateRequest&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PUNCTUALLIGHTSHADOWCASTERPASS_FINISHDYNAMICREQ_OFFSET))(this, staticSlot, dynamicSlot, dynamicReq, skipBlit);
		}
	};
}
