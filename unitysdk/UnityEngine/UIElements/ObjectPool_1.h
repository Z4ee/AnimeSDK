#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class Stack_1; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ObjectPool_1_TypeDefinitionIndex = 6143;

	template <typename T>
	class ObjectPool_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Stack_1<T>* m_Stack; // 0x0
		::System::Int32 m_MaxSize; // 0x0
	};
}
