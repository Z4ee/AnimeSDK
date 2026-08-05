#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T> class IObserver_1; }
namespace UnityEngine::InputSystem::LowLevel { template <typename T1, typename T2> class SelectObservable_2; }

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int SelectObservable_2_Select_TypeDefinitionIndex = 32579;

	template <typename TSource, typename TResult>
	class SelectObservable_2_Select : public ::System::Object
	{
	public:
		::UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource, TResult>* m_Observable; // 0x0
		::System::IObserver_1<TResult>* m_Observer; // 0x0
	};
}
