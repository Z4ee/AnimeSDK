#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T> class IObserver_1; }
namespace UnityEngine::InputSystem::Utilities { template <typename T1, typename T2> class SelectManyObservable_2; }

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int SelectManyObservable_2_Select_TypeDefinitionIndex = 32070;

	template <typename TSource, typename TResult>
	class SelectManyObservable_2_Select : public ::System::Object
	{
	public:
		::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>* m_Observable; // 0x0
		::System::IObserver_1<TResult>* m_Observer; // 0x0
	};
}
