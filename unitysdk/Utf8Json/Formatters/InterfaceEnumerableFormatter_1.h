#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Utf8Json/Formatters/CollectionFormatterBase_3.h"
#include "unitysdk/Utf8Json/Internal/ArrayBuffer_1.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int InterfaceEnumerableFormatter_1_TypeDefinitionIndex = 85717;

	template <typename T>
	class InterfaceEnumerableFormatter_1 : public ::Utf8Json::Formatters::CollectionFormatterBase_3<T, ::Utf8Json::Internal::ArrayBuffer_1<T>, ::System::Collections::Generic::IEnumerable_1<T>*>
	{
	public:
	};
}
