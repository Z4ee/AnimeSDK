#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/BaseInvokableCall.h"

namespace System { class Object; }
namespace System::Reflection { class MethodInfo; }
namespace UnityEngine::Events { template <typename T1, typename T2, typename T3, typename T4> class UnityAction_4; }

namespace UnityEngine::Events
{
	inline static constexpr unsigned int InvokableCall_4_TypeDefinitionIndex = 4470;

	template <typename T1, typename T2, typename T3, typename T4>
	class InvokableCall_4 : public ::UnityEngine::Events::BaseInvokableCall
	{
	public:
		::UnityEngine::Events::UnityAction_4<T1, T2, T3, T4>* Delegate; // 0x0
	};
}
