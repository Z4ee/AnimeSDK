#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System::Linq::Expressions::Interpreter { template <typename T1, typename T2> class HybridReferenceDictionary_2; }

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int HybridReferenceDictionary_2__GetEnumeratorWorker_d__7_TypeDefinitionIndex = 3657;

	template <typename TKey, typename TValue>
	class HybridReferenceDictionary_2__GetEnumeratorWorker_d__7 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		::System::Collections::Generic::KeyValuePair_2<TKey, TValue> __2__current; // 0x0
		::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<TKey, TValue>* __4__this; // 0x0
		::System::Int32 _i_5__1; // 0x0
	};
}
