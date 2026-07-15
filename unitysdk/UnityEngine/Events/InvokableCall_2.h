#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/BaseInvokableCall.h"

namespace System { class Object; }
namespace System::Reflection { class MethodInfo; }
namespace UnityEngine::Events { template <typename T1, typename T2> class UnityAction_2; }

namespace UnityEngine::Events
{
	inline static constexpr unsigned int InvokableCall_2_TypeDefinitionIndex = 4468;

	template <typename T1, typename T2>
	class InvokableCall_2 : public ::UnityEngine::Events::BaseInvokableCall
	{
	public:
		::UnityEngine::Events::UnityAction_2<T1, T2>* Delegate; // 0x0
	};
}
