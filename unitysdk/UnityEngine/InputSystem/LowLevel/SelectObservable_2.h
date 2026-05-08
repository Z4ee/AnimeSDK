#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class IDisposable; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class IObservable_1; }
namespace System { template <typename T> class IObserver_1; }

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int SelectObservable_2_TypeDefinitionIndex = 29302;

	template <typename TSource, typename TResult>
	class SelectObservable_2 : public ::System::Object
	{
	public:
		::System::IObservable_1<TSource>* m_Source; // 0x0
		::System::Func_2<TSource, TResult>* m_Filter; // 0x0
	};
}
