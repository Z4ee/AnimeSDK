#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace UnityEngine::Pooled { template <typename T> class PooledListForStruct_1; }

namespace UnityEngine::Pooled
{
	inline static constexpr unsigned int PooledListForStruct_1_Enumerator_TypeDefinitionIndex = 4520;

	template <typename T>
	struct PooledListForStruct_1_Enumerator
	{
		::UnityEngine::Pooled::PooledListForStruct_1<T>* _list; // 0x0
		::System::Int32 _index; // 0x0
		::System::Int32 _version; // 0x0
		T _current; // 0x0
	};
}
