#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/CombineInstance.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GPUGrassBillboardScatterParams.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine::Rendering::Universal { class GPUGrassBillboardTarget; }

#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSAMPLINGUTILITY_ACCUMULATEBOUNDARYINSETDIRECTION_OFFSET UNITYSDK_OFFSET(0x1C430150)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSAMPLINGUTILITY_ADDEDGEUSECOUNT_OFFSET UNITYSDK_OFFSET(0x1C430040)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSAMPLINGUTILITY_APPLYSCATTEROFFSETS_OFFSET UNITYSDK_OFFSET(0x1C4304A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSAMPLINGUTILITY_BUILDCOMBINEDMESHFROMINSTANCES_OFFSET UNITYSDK_OFFSET(0x1C42DF30)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSAMPLINGUTILITY_CALCULATEMESHSURFACEAREA_OFFSET UNITYSDK_OFFSET(0x1C430690)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSAMPLINGUTILITY_COMPUTESTABLETARGETBAKESEED_OFFSET UNITYSDK_OFFSET(0x1C42E2B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSAMPLINGUTILITY_GETSTABLESTRINGHASH_OFFSET UNITYSDK_OFFSET(0x1C42E5B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSAMPLINGUTILITY_GETUNDIRECTEDEDGEKEY_OFFSET UNITYSDK_OFFSET(0x1C4309F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSAMPLINGUTILITY_HALTON_OFFSET UNITYSDK_OFFSET(0x1C430410)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSAMPLINGUTILITY_ISBOUNDARYEDGE_OFFSET UNITYSDK_OFFSET(0x1C430A50)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSAMPLINGUTILITY_TRYBUILDTARGETSCATTERMESH_OFFSET UNITYSDK_OFFSET(0x1C42D330)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSAMPLINGUTILITY_TRYSAMPLEPOINTSONMESHSURFACE_OFFSET UNITYSDK_OFFSET(0x1C42E770)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GPUGrassBillboardSamplingUtility_TypeDefinitionIndex = 27023;

	class GPUGrassBillboardSamplingUtility : public ::System::Object
	{
	public:
		static ::System::Boolean TryBuildTargetScatterMesh(::UnityEngine::Rendering::Universal::GPUGrassBillboardTarget* target, ::UnityEngine::Mesh*& scatterMesh, ::UnityEngine::Matrix4x4& scatterLocalToWorld, ::System::Boolean logWarnings)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::Universal::GPUGrassBillboardTarget*, ::UnityEngine::Mesh*&, ::UnityEngine::Matrix4x4&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSAMPLINGUTILITY_TRYBUILDTARGETSCATTERMESH_OFFSET))(target, scatterMesh, scatterLocalToWorld, logWarnings);
		}

		static ::UnityEngine::Mesh* BuildCombinedMeshFromInstances(::System::Collections::Generic::List_1<::UnityEngine::CombineInstance>* combineInstances, ::System::String* meshName)
		{
			return ((::UnityEngine::Mesh*(*)(::System::Collections::Generic::List_1<::UnityEngine::CombineInstance>*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSAMPLINGUTILITY_BUILDCOMBINEDMESHFROMINSTANCES_OFFSET))(combineInstances, meshName);
		}

		static ::System::Int32 ComputeStableTargetBakeSeed(::UnityEngine::Rendering::Universal::GPUGrassBillboardTarget* target)
		{
			return ((::System::Int32(*)(::UnityEngine::Rendering::Universal::GPUGrassBillboardTarget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSAMPLINGUTILITY_COMPUTESTABLETARGETBAKESEED_OFFSET))(target);
		}

		static ::System::Int32 GetStableStringHash(::System::String* value)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSAMPLINGUTILITY_GETSTABLESTRINGHASH_OFFSET))(value);
		}

		static ::System::Boolean TrySamplePointsOnMeshSurface(::UnityEngine::Mesh* sourceMesh, ::System::Int32 sampleCount, ::System::Int32 seed, ::System::Single edgeInsetDistance, ::System::Single noiseStrength, ::Il2CppArray<::UnityEngine::Vector3>*& sampledMeshLocalPositions, ::Il2CppArray<::UnityEngine::Vector3>*& sampledMeshLocalNormals)
		{
			return ((::System::Boolean(*)(::UnityEngine::Mesh*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::Il2CppArray<::UnityEngine::Vector3>*&, ::Il2CppArray<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSAMPLINGUTILITY_TRYSAMPLEPOINTSONMESHSURFACE_OFFSET))(sourceMesh, sampleCount, seed, edgeInsetDistance, noiseStrength, sampledMeshLocalPositions, sampledMeshLocalNormals);
		}

		static ::System::Void ApplyScatterOffsets(::UnityEngine::Vector3& worldPos, ::UnityEngine::Vector3& worldNormal, ::UnityEngine::Rendering::Universal::GPUGrassBillboardScatterParams scatterParams)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Rendering::Universal::GPUGrassBillboardScatterParams))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSAMPLINGUTILITY_APPLYSCATTEROFFSETS_OFFSET))(worldPos, worldNormal, scatterParams);
		}

		static ::System::Single Halton(::System::Int32 index, ::System::Int32 b)
		{
			return ((::System::Single(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSAMPLINGUTILITY_HALTON_OFFSET))(index, b);
		}

		static ::System::Single CalculateMeshSurfaceArea(::UnityEngine::Mesh* mesh)
		{
			return ((::System::Single(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSAMPLINGUTILITY_CALCULATEMESHSURFACEAREA_OFFSET))(mesh);
		}

		static ::System::Void AddEdgeUseCount(::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Int32>* edgeUseCount, ::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Int32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSAMPLINGUTILITY_ADDEDGEUSECOUNT_OFFSET))(edgeUseCount, a, b);
		}

		static ::System::Boolean IsBoundaryEdge(::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Int32>* edgeUseCount, ::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Int32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSAMPLINGUTILITY_ISBOUNDARYEDGE_OFFSET))(edgeUseCount, a, b);
		}

		static ::System::UInt64 GetUndirectedEdgeKey(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::UInt64(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSAMPLINGUTILITY_GETUNDIRECTEDEDGEKEY_OFFSET))(a, b);
		}

		static ::System::Void AccumulateBoundaryInsetDirection(::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Int32>* edgeUseCount, ::Il2CppArray<::UnityEngine::Vector3>* vertices, ::Il2CppArray<::UnityEngine::Vector3>* inwardSum, ::Il2CppArray<::System::Int32>* inwardCount, ::System::Int32 startIndex, ::System::Int32 endIndex, ::UnityEngine::Vector3 triangleNormal)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Int32>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSAMPLINGUTILITY_ACCUMULATEBOUNDARYINSETDIRECTION_OFFSET))(edgeUseCount, vertices, inwardSum, inwardCount, startIndex, endIndex, triangleNormal);
		}
	};
}
