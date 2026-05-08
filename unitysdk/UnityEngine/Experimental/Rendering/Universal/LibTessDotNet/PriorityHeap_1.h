#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/Universal/LibTessDotNet/PQHandle.h"

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet { template <typename T> class PriorityHeap_1_HandleElem; }
namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet { template <typename T> class PriorityHeap_1_LessOrEqual; }

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int PriorityHeap_1_TypeDefinitionIndex = 29748;

	template <typename TValue>
	class PriorityHeap_1 : public ::System::Object
	{
	public:
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::PriorityHeap_1_LessOrEqual<TValue>* _leq; // 0x0
		::Il2CppArray<::System::Int32>* _nodes; // 0x0
		::Il2CppArray<::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::PriorityHeap_1_HandleElem<TValue>*>* _handles; // 0x0
		::System::Int32 _size; // 0x0
		::System::Int32 _max; // 0x0
		::System::Int32 _freeList; // 0x0
		::System::Boolean _initialized; // 0x0
	};
}
