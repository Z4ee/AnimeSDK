#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerable; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace System::Linq
{
	inline static constexpr unsigned int Enumerable__CastIterator_d__99_1_TypeDefinitionIndex = 3152;

	template <typename TResult>
	class Enumerable__CastIterator_d__99_1 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		TResult __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::System::Collections::IEnumerable* source; // 0x0
		::System::Collections::IEnumerable* __3__source; // 0x0
		::System::Collections::IEnumerator* __7__wrap1; // 0x0
	};
}
