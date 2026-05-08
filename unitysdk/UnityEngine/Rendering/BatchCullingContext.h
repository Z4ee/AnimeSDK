#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Rendering/BatchVisibility.h"
#include "unitysdk/UnityEngine/Rendering/LODParameters.h"

#define UNITYENGINE_RENDERING_BATCHCULLINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x92ECD0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BatchCullingContext_TypeDefinitionIndex = 6195;

	struct alignas(8) BatchCullingContext
	{
		::Unity::Collections::NativeArray_1<::UnityEngine::Plane> cullingPlanes; // 0x10
		::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility> batchVisibility; // 0x20
		::Unity::Collections::NativeArray_1<::System::Int32> visibleIndices; // 0x30
		::UnityEngine::Rendering::LODParameters lodParameters; // 0x40

		::System::Void _ctor(::Unity::Collections::NativeArray_1<::UnityEngine::Plane> inCullingPlanes, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility> inOutBatchVisibility, ::Unity::Collections::NativeArray_1<::System::Int32> outVisibleIndices, ::UnityEngine::Rendering::LODParameters inLodParameters)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>, ::Unity::Collections::NativeArray_1<::System::Int32>, ::UnityEngine::Rendering::LODParameters))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHCULLINGCONTEXT__CTOR_OFFSET))(this, inCullingPlanes, inOutBatchVisibility, outVisibleIndices, inLodParameters);
		}
	};
}
