#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Utf8Json/Formatters/CollectionFormatterBase_3.h"
#include "unitysdk/Utf8Json/Internal/ArrayBuffer_1.h"

namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int ReadOnlyCollectionFormatter_1_TypeDefinitionIndex = 85714;

	template <typename T>
	class ReadOnlyCollectionFormatter_1 : public ::Utf8Json::Formatters::CollectionFormatterBase_3<T, ::Utf8Json::Internal::ArrayBuffer_1<T>, ::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>
	{
	public:
	};
}
