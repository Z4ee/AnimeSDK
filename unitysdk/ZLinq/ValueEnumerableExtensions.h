#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/Linq/ArraySelectWhere_2.h"
#include "unitysdk/ZLinq/Linq/ArraySelect_2.h"
#include "unitysdk/ZLinq/Linq/ArrayWhere_1.h"
#include "unitysdk/ZLinq/Linq/Concat_3.h"
#include "unitysdk/ZLinq/Linq/Distinct_2.h"
#include "unitysdk/ZLinq/Linq/Except_3.h"
#include "unitysdk/ZLinq/Linq/FromArray_1.h"
#include "unitysdk/ZLinq/Linq/FromEnumerable_1.h"
#include "unitysdk/ZLinq/Linq/FromList_1.h"
#include "unitysdk/ZLinq/Linq/GroupBy_3.h"
#include "unitysdk/ZLinq/Linq/ListSelectWhere_2.h"
#include "unitysdk/ZLinq/Linq/ListSelect_2.h"
#include "unitysdk/ZLinq/Linq/ListWhereSelect_2.h"
#include "unitysdk/ZLinq/Linq/ListWhere_1.h"
#include "unitysdk/ZLinq/Linq/OrderBySkipTake_3.h"
#include "unitysdk/ZLinq/Linq/OrderBy_3.h"
#include "unitysdk/ZLinq/Linq/Select2_3.h"
#include "unitysdk/ZLinq/Linq/SelectMany_3.h"
#include "unitysdk/ZLinq/Linq/SelectWhere_3.h"
#include "unitysdk/ZLinq/Linq/Select_3.h"
#include "unitysdk/ZLinq/Linq/WhereSelect_3.h"
#include "unitysdk/ZLinq/Linq/Where_2.h"
#include "unitysdk/ZLinq/PooledArray_1.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"
#include "unitysdk/ZLinq/ValueEnumerator_2.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Linq { template <typename T1, typename T2> class IGrouping_2; }
namespace ZLinq::Internal { template <typename T> class HashSetSlim_1; }

namespace ZLinq
{
	inline static constexpr unsigned int ValueEnumerableExtensions_TypeDefinitionIndex = 6337;

	class ValueEnumerableExtensions : public ::System::Object
	{
	public:
	};
}
