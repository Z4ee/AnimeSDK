#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/GCFreeClosure/ActionClosure_1.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace UnityEngine::GCFreeClosure
{
	inline static constexpr unsigned int ClosureEvent_1_TypeDefinitionIndex = 4443;

	template <typename T>
	struct ClosureEvent_1
	{
		::System::Collections::Generic::List_1<::UnityEngine::GCFreeClosure::ActionClosure_1<T>>* _calleeList; // 0x0
		::System::Int32 _depth; // 0x0
		::System::Int32 _sparseIndex; // 0x0
	};
}
