#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Utf8Json/Formatters/CollectionFormatterBase_2.h"

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int GenericCollectionFormatter_2_TypeDefinitionIndex = 91283;

	template <typename TElement, typename TCollection>
	class GenericCollectionFormatter_2 : public ::Utf8Json::Formatters::CollectionFormatterBase_2<TElement, TCollection>
	{
	public:
	};
}
