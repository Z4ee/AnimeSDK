#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/Buffers/ReadOnlySequence_1.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Memory_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlyMemory_1.h"
#include "unitysdk/ZLinq/Linq/FromArray_1.h"
#include "unitysdk/ZLinq/Linq/FromDictionary_2.h"
#include "unitysdk/ZLinq/Linq/FromEnumerable_1.h"
#include "unitysdk/ZLinq/Linq/FromHashSet_1.h"
#include "unitysdk/ZLinq/Linq/FromLinkedList_1.h"
#include "unitysdk/ZLinq/Linq/FromList_1.h"
#include "unitysdk/ZLinq/Linq/FromMemory_1.h"
#include "unitysdk/ZLinq/Linq/FromNonGenericEnumerable_1.h"
#include "unitysdk/ZLinq/Linq/FromQueue_1.h"
#include "unitysdk/ZLinq/Linq/FromRange.h"
#include "unitysdk/ZLinq/Linq/FromReadOnlySequence_1.h"
#include "unitysdk/ZLinq/Linq/FromSortedSet_1.h"
#include "unitysdk/ZLinq/Linq/FromStack_1.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Collections::Generic { template <typename T> class SortedSet_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define ZLINQ_VALUEENUMERABLE_ASVALUEENUMERABLE_OFFSET UNITYSDK_OFFSET(0x1A72BB90)
#define ZLINQ_VALUEENUMERABLE_RANGE_OFFSET UNITYSDK_OFFSET(0x1A72BC30)

namespace ZLinq
{
	inline static constexpr unsigned int ValueEnumerable_TypeDefinitionIndex = 6504;

	class ValueEnumerable : public ::System::Object
	{
	public:
		static ::ZLinq::ValueEnumerable_2<::ZLinq::Linq::FromNonGenericEnumerable_1<::System::Object*>, ::System::Object*> AsValueEnumerable(::System::Collections::IEnumerable* source)
		{
			return ((::ZLinq::ValueEnumerable_2<::ZLinq::Linq::FromNonGenericEnumerable_1<::System::Object*>, ::System::Object*>(*)(::System::Collections::IEnumerable*))((::PBYTE)hIl2Cpp + ZLINQ_VALUEENUMERABLE_ASVALUEENUMERABLE_OFFSET))(source);
		}

		static ::ZLinq::ValueEnumerable_2<::ZLinq::Linq::FromRange, ::System::Int32> Range(::System::Int32 start, ::System::Int32 count)
		{
			return ((::ZLinq::ValueEnumerable_2<::ZLinq::Linq::FromRange, ::System::Int32>(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZLINQ_VALUEENUMERABLE_RANGE_OFFSET))(start, count);
		}
	};
}
