#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/Universal/LibTessDotNet/PQHandle.h"

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet { template <typename T> class PriorityHeap_1; }
namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet { template <typename T> class PriorityHeap_1_LessOrEqual; }

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int PriorityQueue_1_TypeDefinitionIndex = 27712;

	template <typename TValue>
	class PriorityQueue_1 : public ::System::Object
	{
	public:
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::PriorityHeap_1_LessOrEqual<TValue>* _leq; // 0x0
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>* _heap; // 0x0
		::Il2CppArray<TValue>* _keys; // 0x0
		::Il2CppArray<::System::Int32>* _order; // 0x0
		::System::Int32 _size; // 0x0
		::System::Int32 _max; // 0x0
		::System::Boolean _initialized; // 0x0
	};
}
