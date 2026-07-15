#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace UnityEngine::Pooled { template <typename T> class IPooledList_1; }
namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }

namespace UnityEngine::Pooled
{
	inline static constexpr unsigned int PooledList_1_Enumerator_TypeDefinitionIndex = 4516;

	template <typename T>
	struct PooledList_1_Enumerator
	{
		::UnityEngine::Pooled::IPooledList_1<T>* _listProcessor; // 0x0
		::System::Int32 _index; // 0x0
		::System::Int32 _version; // 0x0
		T _current; // 0x0
	};
}
