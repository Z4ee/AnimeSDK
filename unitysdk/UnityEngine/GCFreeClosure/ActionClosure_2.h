#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/GCFreeClosure/Closure.h"

namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine::GCFreeClosure { template <typename T1, typename T2, typename T3> class ActionByRef_3; }

namespace UnityEngine::GCFreeClosure
{
	inline static constexpr unsigned int ActionClosure_2_TypeDefinitionIndex = 4437;

	template <typename TInput0, typename TInput1>
	struct ActionClosure_2
	{
		::UnityEngine::GCFreeClosure::Closure _context; // 0x0
		::UnityEngine::GCFreeClosure::ActionByRef_3<::UnityEngine::GCFreeClosure::Closure, TInput0, TInput1>* _wrapper; // 0x0
	};
}
