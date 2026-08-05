#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Queue_1_Enumerator.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/Utf8Json/CollectionDeserializeToBehaviour.h"
#include "unitysdk/Utf8Json/Formatters/CollectionFormatterBase_4.h"

namespace System::Collections::Generic { template <typename T> class Queue_1; }

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int QeueueFormatter_1_TypeDefinitionIndex = 95218;

	template <typename T>
	class QeueueFormatter_1 : public ::Utf8Json::Formatters::CollectionFormatterBase_4<T, ::System::Collections::Generic::Queue_1<T>*, ::System::Collections::Generic::Queue_1_Enumerator<T>, ::System::Collections::Generic::Queue_1<T>*>
	{
	public:
		::Utf8Json::CollectionDeserializeToBehaviour deserializeToBehaviour; // 0x0
	};
}
