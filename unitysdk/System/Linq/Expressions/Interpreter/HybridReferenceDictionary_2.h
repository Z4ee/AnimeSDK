#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int HybridReferenceDictionary_2_TypeDefinitionIndex = 3656;

	template <typename TKey, typename TValue>
	class HybridReferenceDictionary_2 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* _keysAndValues; // 0x0
		::System::Collections::Generic::Dictionary_2<TKey, TValue>* _dict; // 0x0
	};
}
