#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ObjectPool_1; }

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ObjectPool_1_PooledObject_TypeDefinitionIndex = 5969;

	template <typename T>
	struct ObjectPool_1_PooledObject
	{
		T m_ToReturn; // 0x0
		::UnityEngine::NAPRenderPipeline0::ObjectPool_1<T>* m_Pool; // 0x0
	};
}
