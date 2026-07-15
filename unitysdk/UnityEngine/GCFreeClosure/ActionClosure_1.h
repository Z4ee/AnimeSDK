#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/GCFreeClosure/Closure.h"

namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::GCFreeClosure { template <typename T1, typename T2> class ActionByRef_2; }

namespace UnityEngine::GCFreeClosure
{
	inline static constexpr unsigned int ActionClosure_1_TypeDefinitionIndex = 4434;

	template <typename TInput0>
	struct ActionClosure_1
	{
		::UnityEngine::GCFreeClosure::Closure _context; // 0x0
		::UnityEngine::GCFreeClosure::ActionByRef_2<::UnityEngine::GCFreeClosure::Closure, TInput0>* _wrapper; // 0x0
	};
}
