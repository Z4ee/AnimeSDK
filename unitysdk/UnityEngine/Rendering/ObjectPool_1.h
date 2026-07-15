#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/ObjectPool_1_PooledObject.h"

namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ObjectPool_1_TypeDefinitionIndex = 34053;

	template <typename T>
	class ObjectPool_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Stack_1<T>* m_Stack; // 0x0
		::UnityEngine::Events::UnityAction_1<T>* m_ActionOnGet; // 0x0
		::UnityEngine::Events::UnityAction_1<T>* m_ActionOnRelease; // 0x0
		::System::Boolean m_CollectionCheck; // 0x0
		::System::Int32 _countAll_k__BackingField; // 0x0
	};
}
