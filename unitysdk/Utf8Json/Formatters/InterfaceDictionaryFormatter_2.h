#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Utf8Json/Formatters/DictionaryFormatterBase_4.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int InterfaceDictionaryFormatter_2_TypeDefinitionIndex = 85741;

	template <typename TKey, typename TValue>
	class InterfaceDictionaryFormatter_2 : public ::Utf8Json::Formatters::DictionaryFormatterBase_4<TKey, TValue, ::System::Collections::Generic::Dictionary_2<TKey, TValue>*, ::System::Collections::Generic::IDictionary_2<TKey, TValue>*>
	{
	public:
	};
}
