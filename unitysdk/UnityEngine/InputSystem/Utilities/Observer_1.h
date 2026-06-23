#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int Observer_1_TypeDefinitionIndex = 32068;

	template <typename TValue>
	class Observer_1 : public ::System::Object
	{
	public:
		::System::Action_1<TValue>* m_OnNext; // 0x0
		::System::Action* m_OnCompleted; // 0x0
	};
}
