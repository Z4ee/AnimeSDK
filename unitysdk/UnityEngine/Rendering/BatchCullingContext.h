#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Rendering/BatchCullingFlags.h"
#include "unitysdk/UnityEngine/Rendering/BatchCullingProjectionType.h"
#include "unitysdk/UnityEngine/Rendering/BatchCullingViewType.h"
#include "unitysdk/UnityEngine/Rendering/BatchPackedCullingViewID.h"
#include "unitysdk/UnityEngine/Rendering/CullingSplit.h"
#include "unitysdk/UnityEngine/Rendering/LODParameters.h"

#define UNITYENGINE_RENDERING_BATCHCULLINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA1C180)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BatchCullingContext_TypeDefinitionIndex = 6224;

	struct alignas(8) BatchCullingContext
	{
		::Unity::Collections::NativeArray_1<::UnityEngine::Plane> cullingPlanes; // 0x10
		::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CullingSplit> cullingSplits; // 0x20
		::UnityEngine::Rendering::LODParameters lodParameters; // 0x30
		::UnityEngine::Matrix4x4 localToWorldMatrix; // 0x4C
		::UnityEngine::Rendering::BatchCullingViewType viewType; // 0x8C
		::UnityEngine::Rendering::BatchCullingProjectionType projectionType; // 0x90
		::UnityEngine::Rendering::BatchCullingFlags cullingFlags; // 0x94
		::UnityEngine::Rendering::BatchPackedCullingViewID viewID; // 0x98
		::System::UInt32 cullingLayerMask; // 0xA0
		::System::UInt64 sceneCullingMask; // 0xA8
		::System::Byte isOrthographic; // 0xB0
		::System::Int32 receiverPlaneOffset; // 0xB4
		::System::Int32 receiverPlaneCount; // 0xB8

		::System::Void _ctor(::Unity::Collections::NativeArray_1<::UnityEngine::Plane> inCullingPlanes, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CullingSplit> inCullingSplits, ::UnityEngine::Rendering::LODParameters inLodParameters, ::UnityEngine::Matrix4x4 inLocalToWorldMatrix, ::UnityEngine::Rendering::BatchCullingViewType inViewType, ::UnityEngine::Rendering::BatchCullingProjectionType inProjectionType, ::UnityEngine::Rendering::BatchCullingFlags inBatchCullingFlags, ::System::UInt64 inViewID, ::System::UInt32 inCullingLayerMask, ::System::UInt64 inSceneCullingMask, ::System::Int32 inReceiverPlaneOffset, ::System::Int32 inReceiverPlaneCount)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CullingSplit>, ::UnityEngine::Rendering::LODParameters, ::UnityEngine::Matrix4x4, ::UnityEngine::Rendering::BatchCullingViewType, ::UnityEngine::Rendering::BatchCullingProjectionType, ::UnityEngine::Rendering::BatchCullingFlags, ::System::UInt64, ::System::UInt32, ::System::UInt64, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHCULLINGCONTEXT__CTOR_OFFSET))(this, inCullingPlanes, inCullingSplits, inLodParameters, inLocalToWorldMatrix, inViewType, inProjectionType, inBatchCullingFlags, inViewID, inCullingLayerMask, inSceneCullingMask, inReceiverPlaneOffset, inReceiverPlaneCount);
		}
	};
}
