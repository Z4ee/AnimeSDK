#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/BaseInvokableCall.h"

namespace System { class Object; }
namespace System::Reflection { class MethodInfo; }
namespace UnityEngine::Events { template <typename T1, typename T2, typename T3> class UnityAction_3; }

namespace UnityEngine::Events
{
	inline static constexpr unsigned int InvokableCall_3_TypeDefinitionIndex = 4469;

	template <typename T1, typename T2, typename T3>
	class InvokableCall_3 : public ::UnityEngine::Events::BaseInvokableCall
	{
	public:
		::UnityEngine::Events::UnityAction_3<T1, T2, T3>* Delegate; // 0x0
	};
}
