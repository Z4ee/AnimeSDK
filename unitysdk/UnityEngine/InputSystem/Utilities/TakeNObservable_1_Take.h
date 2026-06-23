#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T> class IObserver_1; }
namespace UnityEngine::InputSystem::Utilities { template <typename T> class TakeNObservable_1; }

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int TakeNObservable_1_Take_TypeDefinitionIndex = 32072;

	template <typename TValue>
	class TakeNObservable_1_Take : public ::System::Object
	{
	public:
		::System::IObserver_1<TValue>* m_Observer; // 0x0
		::System::Int32 m_Remaining; // 0x0
	};
}
