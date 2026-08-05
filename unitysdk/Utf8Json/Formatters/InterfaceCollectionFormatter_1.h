#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Utf8Json/Formatters/CollectionFormatterBase_3.h"

namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int InterfaceCollectionFormatter_1_TypeDefinitionIndex = 95223;

	template <typename T>
	class InterfaceCollectionFormatter_1 : public ::Utf8Json::Formatters::CollectionFormatterBase_3<T, ::System::Collections::Generic::List_1<T>*, ::System::Collections::Generic::ICollection_1<T>*>
	{
	public:
	};
}
