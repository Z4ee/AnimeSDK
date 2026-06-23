#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/HashSet_1_Enumerator.h"
#include "unitysdk/Utf8Json/Formatters/CollectionFormatterBase_4.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int HashSetFormatter_1_TypeDefinitionIndex = 91287;

	template <typename T>
	class HashSetFormatter_1 : public ::Utf8Json::Formatters::CollectionFormatterBase_4<T, ::System::Collections::Generic::HashSet_1<T>*, ::System::Collections::Generic::HashSet_1_Enumerator<T>, ::System::Collections::Generic::HashSet_1<T>*>
	{
	public:
	};
}
