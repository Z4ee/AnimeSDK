#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define ZLINQ_LINQ_FROMRANGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define ZLINQ_LINQ_FROMRANGE_FILLINCREMENTAL_OFFSET UNITYSDK_OFFSET(0x1B52CF00)
#define ZLINQ_LINQ_FROMRANGE_TRYCOPYTO_OFFSET UNITYSDK_OFFSET(0x38A6990)
#define ZLINQ_LINQ_FROMRANGE_TRYGETNEXT_OFFSET UNITYSDK_OFFSET(0x38A6A20)
#define ZLINQ_LINQ_FROMRANGE_TRYGETNONENUMERATEDCOUNT_OFFSET UNITYSDK_OFFSET(0x38A6980)
#define ZLINQ_LINQ_FROMRANGE_TRYGETSPAN_OFFSET UNITYSDK_OFFSET(0x2CB5FD0)
#define ZLINQ_LINQ_FROMRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x38A6960)

namespace ZLinq::Linq
{
	inline static constexpr unsigned int FromRange_TypeDefinitionIndex = 6372;

	struct alignas(4) FromRange
	{
		::System::Int32 to; // 0x10
		::System::Int32 start; // 0x14
		::System::Int32 value; // 0x18
		::System::Int32 count; // 0x1C

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZLINQ_LINQ_FROMRANGE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetNonEnumeratedCount(::System::Int32& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + ZLINQ_LINQ_FROMRANGE_TRYGETNONENUMERATEDCOUNT_OFFSET))(this, a1);
		}

		/*
		::System::Boolean TryGetSpan(::System::ReadOnlySpan_1<::System::Int32>& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Int32>&))((::PBYTE)hIl2Cpp + ZLINQ_LINQ_FROMRANGE_TRYGETSPAN_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Boolean TryCopyTo(::System::Span_1<::System::Int32> a1, ::System::Index a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Span_1<::System::Int32>, ::System::Index))((::PBYTE)hIl2Cpp + ZLINQ_LINQ_FROMRANGE_TRYCOPYTO_OFFSET))(this, a1, a2);
		}
		*/

		::System::Boolean TryGetNext(::System::Int32& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + ZLINQ_LINQ_FROMRANGE_TRYGETNEXT_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZLINQ_LINQ_FROMRANGE_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Void FillIncremental(::System::Span_1<::System::Int32> a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Span_1<::System::Int32>, ::System::Int32))((::PBYTE)hIl2Cpp + ZLINQ_LINQ_FROMRANGE_FILLINCREMENTAL_OFFSET))(a1, a2);
		}
		*/
	};
}
