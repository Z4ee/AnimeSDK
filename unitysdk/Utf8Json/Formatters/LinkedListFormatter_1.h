#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/LinkedList_1_Enumerator.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/Utf8Json/CollectionDeserializeToBehaviour.h"
#include "unitysdk/Utf8Json/Formatters/CollectionFormatterBase_4.h"

namespace System::Collections::Generic { template <typename T> class LinkedList_1; }

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int LinkedListFormatter_1_TypeDefinitionIndex = 95217;

	template <typename T>
	class LinkedListFormatter_1 : public ::Utf8Json::Formatters::CollectionFormatterBase_4<T, ::System::Collections::Generic::LinkedList_1<T>*, ::System::Collections::Generic::LinkedList_1_Enumerator<T>, ::System::Collections::Generic::LinkedList_1<T>*>
	{
	public:
		::Utf8Json::CollectionDeserializeToBehaviour deserializeToBehaviour; // 0x0
	};
}
