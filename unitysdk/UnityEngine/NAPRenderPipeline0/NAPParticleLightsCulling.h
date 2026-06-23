#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ParticleLightsCullingOptions.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/Rendering/VisibleLight.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class DynamicArray_1; }

#define UNITYENGINE_NAPRENDERPIPELINE0_NAPPARTICLELIGHTSCULLING_AFTERRENDERERINGINTERNAL_OFFSET UNITYSDK_OFFSET(0x1DA96080)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPPARTICLELIGHTSCULLING_AFTERRENDERERING_OFFSET UNITYSDK_OFFSET(0x1DA96040)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPPARTICLELIGHTSCULLING_DOCULLINGINTERNAL_OFFSET UNITYSDK_OFFSET(0x1DA96020)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPPARTICLELIGHTSCULLING_DOCULLING_OFFSET UNITYSDK_OFFSET(0x1DA95F70)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPPARTICLELIGHTSCULLING_GETLIGHTSNUMAFTERCULLING_OFFSET UNITYSDK_OFFSET(0x1DA96030)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPPARTICLELIGHTSCULLING_INITIALIZEPOSTCULLLIGHTDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x1DA960C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPPARTICLELIGHTSCULLING_INITIALIZEPOSTCULLLIGHTDATA_OFFSET UNITYSDK_OFFSET(0x1DA96090)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPPARTICLELIGHTSCULLING__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA960D0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int NAPParticleLightsCulling_TypeDefinitionIndex = 5702;

	class NAPParticleLightsCulling : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_s_MainCameraLightsNumAfterCulling()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NAPParticleLightsCulling_TypeDefinitionIndex)->GetStaticField(0x2F00);
		}
		static ::UnityEngine::NAPRenderPipeline0::ParticleLightsCullingOptions* StaticGet_s_CachedParticleLightsCullingOptions()
		{
			return (::UnityEngine::NAPRenderPipeline0::ParticleLightsCullingOptions*)Il2CppClass::FromTypeDefinitionIndex(NAPParticleLightsCulling_TypeDefinitionIndex)->GetStaticField(0x2F04);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPPARTICLELIGHTSCULLING__CTOR_OFFSET))(this);
		}

		static ::System::Void DoCulling(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>& visibleLights, ::UnityEngine::NAPRenderPipeline0::ParticleLightsCullingOptions& options)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::CameraData&, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>&, ::UnityEngine::NAPRenderPipeline0::ParticleLightsCullingOptions&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPPARTICLELIGHTSCULLING_DOCULLING_OFFSET))(cameraData, visibleLights, options);
		}

		static ::System::Void AfterRenderering()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPPARTICLELIGHTSCULLING_AFTERRENDERERING_OFFSET))();
		}

		static ::System::Void InitializePostCullLightData(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>& visibleLights, ::System::Int32 mainLightIndex, ::UnityEngine::NAPRenderPipeline0::DynamicArray_1<::System::Int32>* otherLightShadowData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullLightData)
		{
			return ((::System::Void(*)(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>&, ::System::Int32, ::UnityEngine::NAPRenderPipeline0::DynamicArray_1<::System::Int32>*, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPPARTICLELIGHTSCULLING_INITIALIZEPOSTCULLLIGHTDATA_OFFSET))(visibleLights, mainLightIndex, otherLightShadowData, postCullLightData);
		}

		static ::System::Int32 GetLightsNumAfterCulling()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPPARTICLELIGHTSCULLING_GETLIGHTSNUMAFTERCULLING_OFFSET))();
		}

		static ::System::Void DoCullingInternal(::System::Void* visibleLights, ::System::Int32 lightsCount, ::UnityEngine::Vector3& cameraPos, ::UnityEngine::NAPRenderPipeline0::ParticleLightsCullingOptions& options)
		{
			return ((::System::Void(*)(::System::Void*, ::System::Int32, ::UnityEngine::Vector3&, ::UnityEngine::NAPRenderPipeline0::ParticleLightsCullingOptions&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPPARTICLELIGHTSCULLING_DOCULLINGINTERNAL_OFFSET))(visibleLights, lightsCount, cameraPos, options);
		}

		static ::System::Void AfterRendereringInternal()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPPARTICLELIGHTSCULLING_AFTERRENDERERINGINTERNAL_OFFSET))();
		}

		static ::System::Void InitializePostCullLightDataInternal(::System::Void* visibleLights, ::System::Int32 lightsCount, ::System::Int32 mainLightIndex, ::UnityEngine::NAPRenderPipeline0::DynamicArray_1<::System::Int32>* otherLightShadowData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullLightData)
		{
			return ((::System::Void(*)(::System::Void*, ::System::Int32, ::System::Int32, ::UnityEngine::NAPRenderPipeline0::DynamicArray_1<::System::Int32>*, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPPARTICLELIGHTSCULLING_INITIALIZEPOSTCULLLIGHTDATAINTERNAL_OFFSET))(visibleLights, lightsCount, mainLightIndex, otherLightShadowData, postCullLightData);
		}
	};
}
