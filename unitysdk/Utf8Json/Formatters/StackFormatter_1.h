#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Stack_1_Enumerator.h"
#include "unitysdk/Utf8Json/Formatters/CollectionFormatterBase_4.h"
#include "unitysdk/Utf8Json/Internal/ArrayBuffer_1.h"

namespace System::Collections::Generic { template <typename T> class Stack_1; }

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int StackFormatter_1_TypeDefinitionIndex = 85712;

	template <typename T>
	class StackFormatter_1 : public ::Utf8Json::Formatters::CollectionFormatterBase_4<T, ::Utf8Json::Internal::ArrayBuffer_1<T>, ::System::Collections::Generic::Stack_1_Enumerator<T>, ::System::Collections::Generic::Stack_1<T>*>
	{
	public:
	};
}
