#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace System::Linq
{
	inline static constexpr unsigned int Enumerable__TakeIterator_d__25_1_TypeDefinitionIndex = 3139;

	template <typename TSource>
	class Enumerable__TakeIterator_d__25_1 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		TSource __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::System::Int32 count; // 0x0
		::System::Int32 __3__count; // 0x0
		::System::Collections::Generic::IEnumerable_1<TSource>* source; // 0x0
		::System::Collections::Generic::IEnumerable_1<TSource>* __3__source; // 0x0
		::System::Collections::Generic::IEnumerator_1<TSource>* __7__wrap1; // 0x0
	};
}
