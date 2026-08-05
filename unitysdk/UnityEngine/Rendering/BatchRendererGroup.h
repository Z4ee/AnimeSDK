#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/GraphicsBufferHandle.h"
#include "unitysdk/UnityEngine/Rendering/BatchDrawCommand.h"
#include "unitysdk/UnityEngine/Rendering/BatchDrawRange.h"
#include "unitysdk/UnityEngine/Rendering/BatchID.h"
#include "unitysdk/UnityEngine/Rendering/BatchMaterialID.h"
#include "unitysdk/UnityEngine/Rendering/BatchMeshID.h"
#include "unitysdk/UnityEngine/Rendering/BatchRendererCullingOutput.h"
#include "unitysdk/UnityEngine/Rendering/LODParameters.h"
#include "unitysdk/UnityEngine/Rendering/MetadataValue.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine::Rendering { class BatchRendererGroup_OnPerformCulling; }

#define UNITYENGINE_RENDERING_BATCHRENDERERGROUP_ADDBATCH_OFFSET UNITYSDK_OFFSET(0x1E8AF620)
#define UNITYENGINE_RENDERING_BATCHRENDERERGROUP_ADDDRAWCOMMANDBATCH_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E8AF610)
#define UNITYENGINE_RENDERING_BATCHRENDERERGROUP_ADDDRAWCOMMANDBATCH_OFFSET UNITYSDK_OFFSET(0x1E8AF5C0)
#define UNITYENGINE_RENDERING_BATCHRENDERERGROUP_CLEARSTATICCULLINGDATA_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1E8AF700)
#define UNITYENGINE_RENDERING_BATCHRENDERERGROUP_CLEARSTATICCULLINGDATA_OFFSET UNITYSDK_OFFSET(0x1E8AF750)
#define UNITYENGINE_RENDERING_BATCHRENDERERGROUP_CREATE_OFFSET UNITYSDK_OFFSET(0x1E8AF580)
#define UNITYENGINE_RENDERING_BATCHRENDERERGROUP_DESTROY_OFFSET UNITYSDK_OFFSET(0x1E8AF5B0)
#define UNITYENGINE_RENDERING_BATCHRENDERERGROUP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E8AF590)
#define UNITYENGINE_RENDERING_BATCHRENDERERGROUP_INVOKEONPERFORMCULLING_OFFSET UNITYSDK_OFFSET(0x1E8AF7B0)
#define UNITYENGINE_RENDERING_BATCHRENDERERGROUP_REGISTERMATERIAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E8AF690)
#define UNITYENGINE_RENDERING_BATCHRENDERERGROUP_REGISTERMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E8AF670)
#define UNITYENGINE_RENDERING_BATCHRENDERERGROUP_REGISTERMESH_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E8AF6C0)
#define UNITYENGINE_RENDERING_BATCHRENDERERGROUP_REGISTERMESH_OFFSET UNITYSDK_OFFSET(0x1E8AF6A0)
#define UNITYENGINE_RENDERING_BATCHRENDERERGROUP_SETGLOBALBOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E8AF6E0)
#define UNITYENGINE_RENDERING_BATCHRENDERERGROUP_SETGLOBALBOUNDS_OFFSET UNITYSDK_OFFSET(0x1E8AF6D0)
#define UNITYENGINE_RENDERING_BATCHRENDERERGROUP_SETLODINSTANCEDATA_1_OFFSET UNITYSDK_OFFSET(0x1E8AF770)
#define UNITYENGINE_RENDERING_BATCHRENDERERGROUP_SETLODINSTANCEDATA_OFFSET UNITYSDK_OFFSET(0x1E8AF760)
#define UNITYENGINE_RENDERING_BATCHRENDERERGROUP_SETSTATICCULLINGDATA_1_OFFSET UNITYSDK_OFFSET(0x1E8AF710)
#define UNITYENGINE_RENDERING_BATCHRENDERERGROUP_SETSTATICCULLINGDATA_OFFSET UNITYSDK_OFFSET(0x1E8AF6F0)
#define UNITYENGINE_RENDERING_BATCHRENDERERGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8AF550)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BatchRendererGroup_TypeDefinitionIndex = 6227;

	class BatchRendererGroup : public ::System::Object
	{
	public:
		::System::IntPtr m_GroupHandle; // 0x10
		::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling* m_PerformCulling; // 0x18

		::System::Void _ctor(::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling* cullingCallback, ::System::IntPtr userContext)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHRENDERERGROUP__CTOR_OFFSET))(this, cullingCallback, userContext);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHRENDERERGROUP_DISPOSE_OFFSET))(this);
		}

		::UnityEngine::Rendering::BatchID AddDrawCommandBatch(::System::IntPtr values, ::System::Int32 count, ::UnityEngine::GraphicsBufferHandle buffer, ::System::UInt32 bufferOffset, ::System::UInt32 windowSize)
		{
			return ((::UnityEngine::Rendering::BatchID(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::UnityEngine::GraphicsBufferHandle, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHRENDERERGROUP_ADDDRAWCOMMANDBATCH_OFFSET))(this, values, count, buffer, bufferOffset, windowSize);
		}

		::UnityEngine::Rendering::BatchID AddBatch(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::MetadataValue> batchMetadata, ::UnityEngine::GraphicsBufferHandle buffer, ::System::UInt32 bufferOffset, ::System::UInt32 windowSize)
		{
			return ((::UnityEngine::Rendering::BatchID(*)(::PVOID, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::MetadataValue>, ::UnityEngine::GraphicsBufferHandle, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHRENDERERGROUP_ADDBATCH_OFFSET))(this, batchMetadata, buffer, bufferOffset, windowSize);
		}

		::UnityEngine::Rendering::BatchMaterialID RegisterMaterial(::UnityEngine::Material* material)
		{
			return ((::UnityEngine::Rendering::BatchMaterialID(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHRENDERERGROUP_REGISTERMATERIAL_OFFSET))(this, material);
		}

		::UnityEngine::Rendering::BatchMeshID RegisterMesh(::UnityEngine::Mesh* mesh)
		{
			return ((::UnityEngine::Rendering::BatchMeshID(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHRENDERERGROUP_REGISTERMESH_OFFSET))(this, mesh);
		}

		::System::Void SetGlobalBounds(::UnityEngine::Bounds bounds)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHRENDERERGROUP_SETGLOBALBOUNDS_OFFSET))(this, bounds);
		}

		::System::Void SetStaticCullingData(::System::IntPtr drawCommands, ::System::Int32 drawCommandCount, ::System::IntPtr drawRanges, ::System::Int32 drawRangeCount, ::System::IntPtr visibleInstances, ::System::Int32 visibleInstanceCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::IntPtr, ::System::Int32, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHRENDERERGROUP_SETSTATICCULLINGDATA_OFFSET))(this, drawCommands, drawCommandCount, drawRanges, drawRangeCount, visibleInstances, visibleInstanceCount);
		}

		::System::Void ClearStaticCullingData_Internal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHRENDERERGROUP_CLEARSTATICCULLINGDATA_INTERNAL_OFFSET))(this);
		}

		::System::Void SetStaticCullingData_1(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchDrawCommand> drawCommands, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchDrawRange> drawRanges, ::Unity::Collections::NativeArray_1<::System::Int32> visibleInstances)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchDrawCommand>, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchDrawRange>, ::Unity::Collections::NativeArray_1<::System::Int32>))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHRENDERERGROUP_SETSTATICCULLINGDATA_1_OFFSET))(this, drawCommands, drawRanges, visibleInstances);
		}

		::System::Void ClearStaticCullingData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHRENDERERGROUP_CLEARSTATICCULLINGDATA_OFFSET))(this);
		}

		::System::Void SetLODInstanceData(::System::IntPtr instanceRawData, ::System::Int32 instanceRawDataSizeBytes, ::System::UInt32 objectToWorldByteOffset, ::System::Int32 instanceCount, ::System::UInt32 lightmapSTByteOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::UInt32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHRENDERERGROUP_SETLODINSTANCEDATA_OFFSET))(this, instanceRawData, instanceRawDataSizeBytes, objectToWorldByteOffset, instanceCount, lightmapSTByteOffset);
		}

		::System::Void SetLODInstanceData_1(::Unity::Collections::NativeArray_1<::System::Int32> instanceRawData, ::System::UInt32 objectToWorldByteOffset, ::System::Int32 instanceCount, ::System::UInt32 lightmapSTByteOffset)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::System::Int32>, ::System::UInt32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHRENDERERGROUP_SETLODINSTANCEDATA_1_OFFSET))(this, instanceRawData, objectToWorldByteOffset, instanceCount, lightmapSTByteOffset);
		}

		static ::System::IntPtr Create(::UnityEngine::Rendering::BatchRendererGroup* group, ::System::Void* userContext)
		{
			return ((::System::IntPtr(*)(::UnityEngine::Rendering::BatchRendererGroup*, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHRENDERERGROUP_CREATE_OFFSET))(group, userContext);
		}

		static ::System::Void Destroy(::System::IntPtr groupHandle)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHRENDERERGROUP_DESTROY_OFFSET))(groupHandle);
		}

		static ::System::Void InvokeOnPerformCulling(::UnityEngine::Rendering::BatchRendererGroup* group, ::UnityEngine::Rendering::BatchRendererCullingOutput& context, ::UnityEngine::Rendering::LODParameters& lodParameters, ::System::IntPtr userContext)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::BatchRendererGroup*, ::UnityEngine::Rendering::BatchRendererCullingOutput&, ::UnityEngine::Rendering::LODParameters&, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHRENDERERGROUP_INVOKEONPERFORMCULLING_OFFSET))(group, context, lodParameters, userContext);
		}

		::System::Void AddDrawCommandBatch_Injected(::System::IntPtr values, ::System::Int32 count, ::UnityEngine::GraphicsBufferHandle& buffer, ::System::UInt32 bufferOffset, ::System::UInt32 windowSize, ::UnityEngine::Rendering::BatchID& ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::UnityEngine::GraphicsBufferHandle&, ::System::UInt32, ::System::UInt32, ::UnityEngine::Rendering::BatchID&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHRENDERERGROUP_ADDDRAWCOMMANDBATCH_INJECTED_OFFSET))(this, values, count, buffer, bufferOffset, windowSize, ret);
		}

		::System::Void RegisterMaterial_Injected(::UnityEngine::Material* material, ::UnityEngine::Rendering::BatchMaterialID& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Rendering::BatchMaterialID&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHRENDERERGROUP_REGISTERMATERIAL_INJECTED_OFFSET))(this, material, ret);
		}

		::System::Void RegisterMesh_Injected(::UnityEngine::Mesh* mesh, ::UnityEngine::Rendering::BatchMeshID& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Rendering::BatchMeshID&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHRENDERERGROUP_REGISTERMESH_INJECTED_OFFSET))(this, mesh, ret);
		}

		::System::Void SetGlobalBounds_Injected(::UnityEngine::Bounds& bounds)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHRENDERERGROUP_SETGLOBALBOUNDS_INJECTED_OFFSET))(this, bounds);
		}
	};
}
