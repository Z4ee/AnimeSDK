#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define ZLINQ_LINQ_FROMRANGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define ZLINQ_LINQ_FROMRANGE_FILLINCREMENTAL_OFFSET UNITYSDK_OFFSET(0x18CF05D0)
#define ZLINQ_LINQ_FROMRANGE_TRYCOPYTO_OFFSET UNITYSDK_OFFSET(0x2131C90)
#define ZLINQ_LINQ_FROMRANGE_TRYGETNEXT_OFFSET UNITYSDK_OFFSET(0x2131D20)
#define ZLINQ_LINQ_FROMRANGE_TRYGETNONENUMERATEDCOUNT_OFFSET UNITYSDK_OFFSET(0x2131C80)
#define ZLINQ_LINQ_FROMRANGE_TRYGETSPAN_OFFSET UNITYSDK_OFFSET(0x15AFA60)
#define ZLINQ_LINQ_FROMRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x2131C60)

namespace ZLinq::Linq
{
	inline static constexpr unsigned int FromRange_TypeDefinitionIndex = 6510;

	struct alignas(4) FromRange
	{
		::System::Int32 to; // 0x10
		::System::Int32 value; // 0x14
		::System::Int32 count; // 0x18
		::System::Int32 start; // 0x1C

		::System::Void _ctor(::System::Int32 start, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZLINQ_LINQ_FROMRANGE__CTOR_OFFSET))(this, start, count);
		}

		::System::Boolean TryGetNonEnumeratedCount(::System::Int32& count)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + ZLINQ_LINQ_FROMRANGE_TRYGETNONENUMERATEDCOUNT_OFFSET))(this, count);
		}

		/*
		::System::Boolean TryGetSpan(::System::ReadOnlySpan_1<::System::Int32>& span)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Int32>&))((::PBYTE)hIl2Cpp + ZLINQ_LINQ_FROMRANGE_TRYGETSPAN_OFFSET))(this, span);
		}
		*/

		/*
		::System::Boolean TryCopyTo(::System::Span_1<::System::Int32> destination, ::System::Index offset)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Span_1<::System::Int32>, ::System::Index))((::PBYTE)hIl2Cpp + ZLINQ_LINQ_FROMRANGE_TRYCOPYTO_OFFSET))(this, destination, offset);
		}
		*/

		::System::Boolean TryGetNext(::System::Int32& current)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + ZLINQ_LINQ_FROMRANGE_TRYGETNEXT_OFFSET))(this, current);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZLINQ_LINQ_FROMRANGE_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Void FillIncremental(::System::Span_1<::System::Int32> span, ::System::Int32 start)
		{
			return ((::System::Void(*)(::System::Span_1<::System::Int32>, ::System::Int32))((::PBYTE)hIl2Cpp + ZLINQ_LINQ_FROMRANGE_FILLINCREMENTAL_OFFSET))(span, start);
		}
		*/
	};
}
