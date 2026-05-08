#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int PriorityHeap_1_HandleElem_TypeDefinitionIndex = 29750;

	template <typename TValue>
	class PriorityHeap_1_HandleElem : public ::System::Object
	{
	public:
		TValue _key; // 0x0
		::System::Int32 _node; // 0x0
	};
}
