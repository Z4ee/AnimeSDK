#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rendering/CameraProperties.h"
#include "unitysdk/UnityEngine/Rendering/CullingOptions.h"
#include "unitysdk/UnityEngine/Rendering/LODParameters.h"
#include "unitysdk/UnityEngine/Rendering/ReflectionProbeSortingCriteria.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableCullingParameters__m_CullingPlanes_e__FixedBuffer.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableCullingParameters__m_LayerFarCullDistances_e__FixedBuffer.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableCullingParameters__m_ScreenRatioCullingParams_e__FixedBuffer.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x96F3B0)
#define UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_EQUALS_OFFSET UNITYSDK_OFFSET(0x96F370)
#define UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_GETCULLINGPLANE_OFFSET UNITYSDK_OFFSET(0x96F350)
#define UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x96F430)
#define UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_GETLAYERCULLINGDISTANCE_OFFSET UNITYSDK_OFFSET(0x96F340)
#define UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_GET_CULLINGOPTIONS_OFFSET UNITYSDK_OFFSET(0x96F320)
#define UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_GET_CULLINGPLANECOUNT_OFFSET UNITYSDK_OFFSET(0x96F2F0)
#define UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_GET_MAXIMUMVISIBLELIGHTS_OFFSET UNITYSDK_OFFSET(0x96F2D0)
#define UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_SETLOCALSHADOWCACHESETTING_OFFSET UNITYSDK_OFFSET(0x96F250)
#define UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_SET_CULLINGMASK_OFFSET UNITYSDK_OFFSET(0x96F300)
#define UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_SET_CULLINGOPTIONS_OFFSET UNITYSDK_OFFSET(0x96F330)
#define UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_SET_MAXIMUMVISIBLELIGHTS_OFFSET UNITYSDK_OFFSET(0x96F2E0)
#define UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_SET_SHADOWDISTANCE_OFFSET UNITYSDK_OFFSET(0x96F310)
#define UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4DD600)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ScriptableCullingParameters_TypeDefinitionIndex = 6207;

	struct alignas(8) ScriptableCullingParameters
	{
		static ::System::Int32* StaticGet_layerCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ScriptableCullingParameters_TypeDefinitionIndex)->GetStaticField(0x2CA0);
		}
		static ::System::Int32* StaticGet_maximumCullingPlaneCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ScriptableCullingParameters_TypeDefinitionIndex)->GetStaticField(0x2CA4);
		}
		::System::Int32 m_IsOrthographic; // 0x10
		::UnityEngine::Rendering::LODParameters m_LODParameters; // 0x14
		::UnityEngine::Rendering::ScriptableCullingParameters__m_CullingPlanes_e__FixedBuffer m_CullingPlanes; // 0x30
		::System::Int32 m_CullingPlaneCount; // 0xD0
		::System::UInt32 m_CullingMask; // 0xD4
		::System::UInt64 m_SceneMask; // 0xD8
		::UnityEngine::Rendering::ScriptableCullingParameters__m_LayerFarCullDistances_e__FixedBuffer m_LayerFarCullDistances; // 0xE0
		::System::Int32 m_LayerCull; // 0x160
		::UnityEngine::Matrix4x4 m_CullingMatrix; // 0x164
		::UnityEngine::Vector3 m_Origin; // 0x1A4
		::UnityEngine::Rendering::ScriptableCullingParameters__m_ScreenRatioCullingParams_e__FixedBuffer m_ScreenRatioCullingParams; // 0x1B0
		::System::Single m_ShadowDistance; // 0x230
		::UnityEngine::Rendering::CullingOptions m_CullingOptions; // 0x234
		::UnityEngine::Rendering::ReflectionProbeSortingCriteria m_ReflectionProbeSortingCriteria; // 0x238
		::UnityEngine::Rendering::CameraProperties m_CameraProperties; // 0x23C
		::System::Single m_AccurateOcclusionThreshold; // 0x61C
		::System::Int32 m_MaximumPortalCullingJobs; // 0x620
		::UnityEngine::Matrix4x4 m_StereoViewMatrix; // 0x624
		::UnityEngine::Matrix4x4 m_StereoProjectionMatrix; // 0x664
		::System::Single m_StereoSeparationDistance; // 0x6A4
		::System::Int32 m_maximumVisibleLights; // 0x6A8
		::UnityEngine::Vector3 m_localLightSortOffset; // 0x6AC
		::System::Single m_localShadowCacheDynamicUpdateDistance; // 0x6B8
		::System::Single m_localShadowCacheCastDistance; // 0x6BC
		::System::Single m_localShadowCacheNoSkipDistance; // 0x6C0
		::System::UInt32 m_localShadowCacheSkipUpdateFrames; // 0x6C4
		::System::UInt32 m_localShadowCacheMaxShadowedLightCount; // 0x6C8
		::System::UInt32 m_localShadowCacheMaxDynamicUpdatesPerFrame; // 0x6CC
		::System::UInt32 m_localShadowCacheMaxStaticUpdatesPerFrame; // 0x6D0
		::System::UInt32 m_localShadowCacheStaticCullMask; // 0x6D4
		::System::UInt32 m_localShadowCacheDynamicCullMask; // 0x6D8
		::System::UInt32 m_cameraInstanceID; // 0x6DC
		::System::UInt64 m_sunShadowPVSBits; // 0x6E0
		::System::UInt32 m_sunShadowPVSByteOffset; // 0x6E8
		::System::UInt32 m_sunShadowPVSRangeCount; // 0x6EC
		::System::UInt32 m_sunShadowArrayHandle; // 0x6F0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS__CCTOR_OFFSET))();
		}

		::System::Void SetLocalShadowCacheSetting(::UnityEngine::Vector3 localLightSortOffset, ::System::Single dynamicUpdateDistance, ::System::Single castDistance, ::System::Single noSkipDistance, ::System::UInt32 skipUpdateFrames, ::System::UInt32 maxShadowedLightCount, ::System::UInt32 maxDynamicUpdatesPerFrame, ::System::UInt32 maxStaticUpdatesPerFrame, ::System::UInt32 staticCullMask, ::System::UInt32 dynamicCullMask)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_SETLOCALSHADOWCACHESETTING_OFFSET))(this, localLightSortOffset, dynamicUpdateDistance, castDistance, noSkipDistance, skipUpdateFrames, maxShadowedLightCount, maxDynamicUpdatesPerFrame, maxStaticUpdatesPerFrame, staticCullMask, dynamicCullMask);
		}

		::System::Int32 get_maximumVisibleLights()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_GET_MAXIMUMVISIBLELIGHTS_OFFSET))(this);
		}

		::System::Void set_maximumVisibleLights(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_SET_MAXIMUMVISIBLELIGHTS_OFFSET))(this, value);
		}

		::System::Int32 get_cullingPlaneCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_GET_CULLINGPLANECOUNT_OFFSET))(this);
		}

		::System::Void set_cullingMask(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_SET_CULLINGMASK_OFFSET))(this, value);
		}

		::System::Void set_shadowDistance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_SET_SHADOWDISTANCE_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::CullingOptions get_cullingOptions()
		{
			return ((::UnityEngine::Rendering::CullingOptions(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_GET_CULLINGOPTIONS_OFFSET))(this);
		}

		::System::Void set_cullingOptions(::UnityEngine::Rendering::CullingOptions value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CullingOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_SET_CULLINGOPTIONS_OFFSET))(this, value);
		}

		::System::Single GetLayerCullingDistance(::System::Int32 layerIndex)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_GETLAYERCULLINGDISTANCE_OFFSET))(this, layerIndex);
		}

		/*
		::UnityEngine::Plane GetCullingPlane(::System::Int32 index)
		{
			return ((::UnityEngine::Plane(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_GETCULLINGPLANE_OFFSET))(this, index);
		}
		*/

		::System::Boolean Equals(::UnityEngine::Rendering::ScriptableCullingParameters other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::ScriptableCullingParameters))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_GETHASHCODE_OFFSET))(this);
		}
	};
}
