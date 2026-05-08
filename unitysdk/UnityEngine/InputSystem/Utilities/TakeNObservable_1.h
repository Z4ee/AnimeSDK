#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class IDisposable; }
namespace System { template <typename T> class IObservable_1; }
namespace System { template <typename T> class IObserver_1; }

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int TakeNObservable_1_TypeDefinitionIndex = 29415;

	template <typename TValue>
	class TakeNObservable_1 : public ::System::Object
	{
	public:
		::System::IObservable_1<TValue>* m_Source; // 0x0
		::System::Int32 m_Count; // 0x0
	};
}
