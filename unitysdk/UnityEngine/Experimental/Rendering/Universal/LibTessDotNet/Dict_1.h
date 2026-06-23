#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet { template <typename T> class Dict_1_LessOrEqual; }
namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet { template <typename T> class Dict_1_Node; }

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int Dict_1_TypeDefinitionIndex = 27063;

	template <typename TValue>
	class Dict_1 : public ::System::Object
	{
	public:
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Dict_1_LessOrEqual<TValue>* _leq; // 0x0
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Dict_1_Node<TValue>* _head; // 0x0
	};
}
