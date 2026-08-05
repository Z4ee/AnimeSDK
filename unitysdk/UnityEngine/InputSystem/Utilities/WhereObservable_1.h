#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class IDisposable; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class IObservable_1; }
namespace System { template <typename T> class IObserver_1; }

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int WhereObservable_1_TypeDefinitionIndex = 32693;

	template <typename TValue>
	class WhereObservable_1 : public ::System::Object
	{
	public:
		::System::IObservable_1<TValue>* m_Source; // 0x0
		::System::Func_2<TValue, ::System::Boolean>* m_Predicate; // 0x0
	};
}
