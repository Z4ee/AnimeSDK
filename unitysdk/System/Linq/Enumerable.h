#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Linq { template <typename T1, typename T2> class IGrouping_2; }
namespace System::Linq { template <typename T1, typename T2> class ILookup_2; }
namespace System::Linq { template <typename T> class IOrderedEnumerable_1; }

#define SYSTEM_LINQ_ENUMERABLE_AVERAGE_OFFSET UNITYSDK_OFFSET(0x18489D00)
#define SYSTEM_LINQ_ENUMERABLE_MAX_1_OFFSET UNITYSDK_OFFSET(0x18489600)
#define SYSTEM_LINQ_ENUMERABLE_MAX_2_OFFSET UNITYSDK_OFFSET(0x18489990)
#define SYSTEM_LINQ_ENUMERABLE_MAX_OFFSET UNITYSDK_OFFSET(0x184892C0)
#define SYSTEM_LINQ_ENUMERABLE_MIN_OFFSET UNITYSDK_OFFSET(0x18488EE0)
#define SYSTEM_LINQ_ENUMERABLE_RANGEITERATOR_OFFSET UNITYSDK_OFFSET(0x184880E0)
#define SYSTEM_LINQ_ENUMERABLE_RANGE_OFFSET UNITYSDK_OFFSET(0x18487FA0)
#define SYSTEM_LINQ_ENUMERABLE_SUM_1_OFFSET UNITYSDK_OFFSET(0x18488540)
#define SYSTEM_LINQ_ENUMERABLE_SUM_2_OFFSET UNITYSDK_OFFSET(0x184888D0)
#define SYSTEM_LINQ_ENUMERABLE_SUM_3_OFFSET UNITYSDK_OFFSET(0x18488BE0)
#define SYSTEM_LINQ_ENUMERABLE_SUM_OFFSET UNITYSDK_OFFSET(0x18488140)

namespace System::Linq
{
	inline static constexpr unsigned int Enumerable_TypeDefinitionIndex = 3120;

	class Enumerable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::IEnumerable_1<::System::Int32>* Range(::System::Int32 start, ::System::Int32 count)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ENUMERABLE_RANGE_OFFSET))(start, count);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Int32>* RangeIterator(::System::Int32 start, ::System::Int32 count)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ENUMERABLE_RANGEITERATOR_OFFSET))(start, count);
		}

		static ::System::Int32 Sum(::System::Collections::Generic::IEnumerable_1<::System::Int32>* source)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ENUMERABLE_SUM_OFFSET))(source);
		}

		static ::System::Int64 Sum_1(::System::Collections::Generic::IEnumerable_1<::System::Int64>* source)
		{
			return ((::System::Int64(*)(::System::Collections::Generic::IEnumerable_1<::System::Int64>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ENUMERABLE_SUM_1_OFFSET))(source);
		}

		static ::System::Single Sum_2(::System::Collections::Generic::IEnumerable_1<::System::Single>* source)
		{
			return ((::System::Single(*)(::System::Collections::Generic::IEnumerable_1<::System::Single>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ENUMERABLE_SUM_2_OFFSET))(source);
		}

		static ::System::Double Sum_3(::System::Collections::Generic::IEnumerable_1<::System::Double>* source)
		{
			return ((::System::Double(*)(::System::Collections::Generic::IEnumerable_1<::System::Double>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ENUMERABLE_SUM_3_OFFSET))(source);
		}

		static ::System::Single Min(::System::Collections::Generic::IEnumerable_1<::System::Single>* source)
		{
			return ((::System::Single(*)(::System::Collections::Generic::IEnumerable_1<::System::Single>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ENUMERABLE_MIN_OFFSET))(source);
		}

		static ::System::Int32 Max(::System::Collections::Generic::IEnumerable_1<::System::Int32>* source)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ENUMERABLE_MAX_OFFSET))(source);
		}

		static ::System::Double Max_1(::System::Collections::Generic::IEnumerable_1<::System::Double>* source)
		{
			return ((::System::Double(*)(::System::Collections::Generic::IEnumerable_1<::System::Double>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ENUMERABLE_MAX_1_OFFSET))(source);
		}

		static ::System::Single Max_2(::System::Collections::Generic::IEnumerable_1<::System::Single>* source)
		{
			return ((::System::Single(*)(::System::Collections::Generic::IEnumerable_1<::System::Single>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ENUMERABLE_MAX_2_OFFSET))(source);
		}

		static ::System::Single Average(::System::Collections::Generic::IEnumerable_1<::System::Single>* source)
		{
			return ((::System::Single(*)(::System::Collections::Generic::IEnumerable_1<::System::Single>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ENUMERABLE_AVERAGE_OFFSET))(source);
		}
	};
}
