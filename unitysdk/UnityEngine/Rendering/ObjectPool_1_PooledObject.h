#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering { template <typename T> class ObjectPool_1; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ObjectPool_1_PooledObject_TypeDefinitionIndex = 34054;

	template <typename T>
	struct ObjectPool_1_PooledObject
	{
		T m_ToReturn; // 0x0
		::UnityEngine::Rendering::ObjectPool_1<T>* m_Pool; // 0x0
	};
}
