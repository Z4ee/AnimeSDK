#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace System::Linq
{
	inline static constexpr unsigned int Enumerable__RepeatIterator_d__117_1_TypeDefinitionIndex = 3154;

	template <typename TResult>
	class Enumerable__RepeatIterator_d__117_1 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		TResult __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		TResult element; // 0x0
		TResult __3__element; // 0x0
		::System::Int32 _i_5__1; // 0x0
		::System::Int32 count; // 0x0
		::System::Int32 __3__count; // 0x0
	};
}
