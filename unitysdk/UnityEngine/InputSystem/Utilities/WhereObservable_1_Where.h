#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T> class IObserver_1; }
namespace UnityEngine::InputSystem::Utilities { template <typename T> class WhereObservable_1; }

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int WhereObservable_1_Where_TypeDefinitionIndex = 29418;

	template <typename TValue>
	class WhereObservable_1_Where : public ::System::Object
	{
	public:
		::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>* m_Observable; // 0x0
		::System::IObserver_1<TValue>* m_Observer; // 0x0
	};
}
