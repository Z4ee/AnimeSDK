#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/BaseInvokableCall.h"

namespace System { class Object; }
namespace System::Reflection { class MethodInfo; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

namespace UnityEngine::Events
{
	inline static constexpr unsigned int InvokableCall_1_TypeDefinitionIndex = 4467;

	template <typename T1>
	class InvokableCall_1 : public ::UnityEngine::Events::BaseInvokableCall
	{
	public:
		::UnityEngine::Events::UnityAction_1<T1>* Delegate; // 0x0
	};
}
