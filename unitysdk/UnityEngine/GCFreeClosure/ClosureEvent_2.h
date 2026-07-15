#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/GCFreeClosure/ActionClosure_2.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace UnityEngine::GCFreeClosure
{
	inline static constexpr unsigned int ClosureEvent_2_TypeDefinitionIndex = 4444;

	template <typename T1, typename T2>
	struct ClosureEvent_2
	{
		::System::Collections::Generic::List_1<::UnityEngine::GCFreeClosure::ActionClosure_2<T1, T2>>* _calleeList; // 0x0
		::System::Int32 _depth; // 0x0
		::System::Int32 _sparseIndex; // 0x0
	};
}
