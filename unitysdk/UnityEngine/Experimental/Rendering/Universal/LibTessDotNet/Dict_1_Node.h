#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet { template <typename T> class Dict_1_Node; }

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int Dict_1_Node_TypeDefinitionIndex = 26897;

	template <typename TValue>
	class Dict_1_Node : public ::System::Object
	{
	public:
		TValue _key; // 0x0
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Dict_1_Node<TValue>* _prev; // 0x0
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Dict_1_Node<TValue>* _next; // 0x0
	};
}
