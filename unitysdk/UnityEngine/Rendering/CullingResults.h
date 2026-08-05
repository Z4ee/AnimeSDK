#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/CubemapFace.h"
#include "unitysdk/UnityEngine/Rendering/CullingAllocationInfo.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define UNITYENGINE_RENDERING_CULLINGRESULTS_COMPUTEPOINTSHADOWMATRICESANDCULLINGPRIMITIVES_1_OFFSET UNITYSDK_OFFSET(0xA41370)
#define UNITYENGINE_RENDERING_CULLINGRESULTS_COMPUTEPOINTSHADOWMATRICESANDCULLINGPRIMITIVES_OFFSET UNITYSDK_OFFSET(0x1E8B20D0)
#define UNITYENGINE_RENDERING_CULLINGRESULTS_COMPUTESPOTSHADOWMATRICESANDCULLINGPRIMITIVES_1_OFFSET UNITYSDK_OFFSET(0xA41360)
#define UNITYENGINE_RENDERING_CULLINGRESULTS_COMPUTESPOTSHADOWMATRICESANDCULLINGPRIMITIVES_OFFSET UNITYSDK_OFFSET(0x1E8B20C0)
#define UNITYENGINE_RENDERING_CULLINGRESULTS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA413E0)
#define UNITYENGINE_RENDERING_CULLINGRESULTS_EQUALS_OFFSET UNITYSDK_OFFSET(0xA41380)
#define UNITYENGINE_RENDERING_CULLINGRESULTS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x32F1E0)
#define UNITYENGINE_RENDERING_CULLINGRESULTS_GETRENDERVISIBLEINCURRENTCAM_1_OFFSET UNITYSDK_OFFSET(0x1E8B2110)
#define UNITYENGINE_RENDERING_CULLINGRESULTS_GETRENDERVISIBLEINCURRENTCAM_OFFSET UNITYSDK_OFFSET(0x1E8B20F0)
#define UNITYENGINE_RENDERING_CULLINGRESULTS_GETRENDERVISIBLE_1_OFFSET UNITYSDK_OFFSET(0x1E8B2100)
#define UNITYENGINE_RENDERING_CULLINGRESULTS_GETRENDERVISIBLE_OFFSET UNITYSDK_OFFSET(0x1E8B20E0)
#define UNITYENGINE_RENDERING_CULLINGRESULTS_GETSHADOWCASTERBOUNDS_1_OFFSET UNITYSDK_OFFSET(0xA41350)
#define UNITYENGINE_RENDERING_CULLINGRESULTS_GETSHADOWCASTERBOUNDS_OFFSET UNITYSDK_OFFSET(0x1E8B20B0)
#define UNITYENGINE_RENDERING_CULLINGRESULTS_GET_LOCALSHADOWCACHEDYNAMICUPDATEREQUESTS_OFFSET UNITYSDK_OFFSET(0xA412F0)
#define UNITYENGINE_RENDERING_CULLINGRESULTS_GET_LOCALSHADOWCACHESHADOWEDLIGHTS_OFFSET UNITYSDK_OFFSET(0xA41320)
#define UNITYENGINE_RENDERING_CULLINGRESULTS_GET_LOCALSHADOWCACHESTATICUPDATEREQUESTS_OFFSET UNITYSDK_OFFSET(0xA412C0)
#define UNITYENGINE_RENDERING_CULLINGRESULTS_GET_VISIBLELIGHTS_OFFSET UNITYSDK_OFFSET(0xA41290)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CullingResults_TypeDefinitionIndex = 6241;

	struct alignas(8) CullingResults
	{
		::System::IntPtr ptr; // 0x10
		::UnityEngine::Rendering::CullingAllocationInfo* m_AllocationInfo; // 0x18

		/*
		static ::System::Boolean GetShadowCasterBounds(::System::IntPtr cullingResultsPtr, ::System::Int32 lightIndex, ::UnityEngine::Bounds& bounds)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_GETSHADOWCASTERBOUNDS_OFFSET))(cullingResultsPtr, lightIndex, bounds);
		}
		*/

		/*
		static ::System::Boolean ComputeSpotShadowMatricesAndCullingPrimitives(::System::IntPtr cullingResultsPtr, ::System::Int32 activeLightIndex, ::UnityEngine::Matrix4x4& viewMatrix, ::UnityEngine::Matrix4x4& projMatrix, ::UnityEngine::Rendering::ShadowSplitData& shadowSplitData)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Matrix4x4&, ::UnityEngine::Matrix4x4&, ::UnityEngine::Rendering::ShadowSplitData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_COMPUTESPOTSHADOWMATRICESANDCULLINGPRIMITIVES_OFFSET))(cullingResultsPtr, activeLightIndex, viewMatrix, projMatrix, shadowSplitData);
		}
		*/

		/*
		static ::System::Boolean ComputePointShadowMatricesAndCullingPrimitives(::System::IntPtr cullingResultsPtr, ::System::Int32 activeLightIndex, ::UnityEngine::CubemapFace cubemapFace, ::System::Single fovBias, ::UnityEngine::Matrix4x4& viewMatrix, ::UnityEngine::Matrix4x4& projMatrix, ::UnityEngine::Rendering::ShadowSplitData& shadowSplitData)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Single, ::UnityEngine::Matrix4x4&, ::UnityEngine::Matrix4x4&, ::UnityEngine::Rendering::ShadowSplitData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_COMPUTEPOINTSHADOWMATRICESANDCULLINGPRIMITIVES_OFFSET))(cullingResultsPtr, activeLightIndex, cubemapFace, fovBias, viewMatrix, projMatrix, shadowSplitData);
		}
		*/

		static ::System::Void GetRenderVisible(::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* renderers, ::System::Void* result, ::System::Boolean nullCheck)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*, ::System::Void*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_GETRENDERVISIBLE_OFFSET))(renderers, result, nullCheck);
		}

		static ::System::Void GetRenderVisibleInCurrentCam(::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* renderers, ::System::Void* result, ::System::Boolean nullCheck)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*, ::System::Void*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_GETRENDERVISIBLEINCURRENTCAM_OFFSET))(renderers, result, nullCheck);
		}

		/*
		static ::System::Void GetRenderVisible_1(::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* renderers, ::Unity::Collections::NativeArray_1<::System::Boolean> result, ::System::Boolean nullCheck)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*, ::Unity::Collections::NativeArray_1<::System::Boolean>, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_GETRENDERVISIBLE_1_OFFSET))(renderers, result, nullCheck);
		}
		*/

		/*
		static ::System::Void GetRenderVisibleInCurrentCam_1(::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* renderers, ::Unity::Collections::NativeArray_1<::System::Boolean> result, ::System::Boolean nullCheck)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*, ::Unity::Collections::NativeArray_1<::System::Boolean>, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_GETRENDERVISIBLEINCURRENTCAM_1_OFFSET))(renderers, result, nullCheck);
		}
		*/

		/*
		::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> get_visibleLights()
		{
			return ((::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_GET_VISIBLELIGHTS_OFFSET))(this);
		}
		*/

		/*
		::Unity::Collections::NativeArray_1<::System::Int32> get_localShadowCacheStaticUpdateRequests()
		{
			return ((::Unity::Collections::NativeArray_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_GET_LOCALSHADOWCACHESTATICUPDATEREQUESTS_OFFSET))(this);
		}
		*/

		/*
		::Unity::Collections::NativeArray_1<::System::Int32> get_localShadowCacheDynamicUpdateRequests()
		{
			return ((::Unity::Collections::NativeArray_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_GET_LOCALSHADOWCACHEDYNAMICUPDATEREQUESTS_OFFSET))(this);
		}
		*/

		/*
		::Unity::Collections::NativeArray_1<::System::Int32> get_localShadowCacheShadowedLights()
		{
			return ((::Unity::Collections::NativeArray_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_GET_LOCALSHADOWCACHESHADOWEDLIGHTS_OFFSET))(this);
		}
		*/

		/*
		::System::Boolean GetShadowCasterBounds_1(::System::Int32 lightIndex, ::UnityEngine::Bounds& outBounds)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_GETSHADOWCASTERBOUNDS_1_OFFSET))(this, lightIndex, outBounds);
		}
		*/

		/*
		::System::Boolean ComputeSpotShadowMatricesAndCullingPrimitives_1(::System::Int32 activeLightIndex, ::UnityEngine::Matrix4x4& viewMatrix, ::UnityEngine::Matrix4x4& projMatrix, ::UnityEngine::Rendering::ShadowSplitData& shadowSplitData)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4&, ::UnityEngine::Matrix4x4&, ::UnityEngine::Rendering::ShadowSplitData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_COMPUTESPOTSHADOWMATRICESANDCULLINGPRIMITIVES_1_OFFSET))(this, activeLightIndex, viewMatrix, projMatrix, shadowSplitData);
		}
		*/

		/*
		::System::Boolean ComputePointShadowMatricesAndCullingPrimitives_1(::System::Int32 activeLightIndex, ::UnityEngine::CubemapFace cubemapFace, ::System::Single fovBias, ::UnityEngine::Matrix4x4& viewMatrix, ::UnityEngine::Matrix4x4& projMatrix, ::UnityEngine::Rendering::ShadowSplitData& shadowSplitData)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Single, ::UnityEngine::Matrix4x4&, ::UnityEngine::Matrix4x4&, ::UnityEngine::Rendering::ShadowSplitData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_COMPUTEPOINTSHADOWMATRICESANDCULLINGPRIMITIVES_1_OFFSET))(this, activeLightIndex, cubemapFace, fovBias, viewMatrix, projMatrix, shadowSplitData);
		}
		*/

		::System::Boolean Equals(::UnityEngine::Rendering::CullingResults other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::CullingResults))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_GETHASHCODE_OFFSET))(this);
		}
	};
}
