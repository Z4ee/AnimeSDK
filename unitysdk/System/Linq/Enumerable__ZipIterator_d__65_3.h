#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace System::Linq
{
	inline static constexpr unsigned int Enumerable__ZipIterator_d__65_3_TypeDefinitionIndex = 3144;

	template <typename TFirst, typename TSecond, typename TResult>
	class Enumerable__ZipIterator_d__65_3 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		TResult __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::System::Collections::Generic::IEnumerable_1<TFirst>* first; // 0x0
		::System::Collections::Generic::IEnumerable_1<TFirst>* __3__first; // 0x0
		::System::Collections::Generic::IEnumerable_1<TSecond>* second; // 0x0
		::System::Collections::Generic::IEnumerable_1<TSecond>* __3__second; // 0x0
		::System::Func_3<TFirst, TSecond, TResult>* resultSelector; // 0x0
		::System::Func_3<TFirst, TSecond, TResult>* __3__resultSelector; // 0x0
		::System::Collections::Generic::IEnumerator_1<TFirst>* _e1_5__1; // 0x0
		::System::Collections::Generic::IEnumerator_1<TSecond>* _e2_5__2; // 0x0
	};
}
