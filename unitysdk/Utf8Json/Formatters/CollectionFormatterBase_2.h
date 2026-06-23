#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Utf8Json/Formatters/CollectionFormatterBase_3.h"

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int CollectionFormatterBase_2_TypeDefinitionIndex = 91282;

	template <typename TElement, typename TCollection>
	class CollectionFormatterBase_2 : public ::Utf8Json::Formatters::CollectionFormatterBase_3<TElement, TCollection, TCollection>
	{
	public:
	};
}
