#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Pooled
{
	inline static constexpr unsigned int ExceptionResource_TypeDefinitionIndex = 4524;

	enum class ExceptionResource : ::System::Int32
	{
		ArgumentOutOfRange_Index = 0,
		ArgumentOutOfRange_Count = 1,
		Arg_ArrayPlusOffTooSmall = 2,
		NotSupported_ReadOnlyCollection = 3,
		Arg_RankMultiDimNotSupported = 4,
		Arg_NonZeroLowerBound = 5,
		ArgumentOutOfRange_ListInsert = 6,
		ArgumentOutOfRange_NeedNonNegNum = 7,
		ArgumentOutOfRange_SmallCapacity = 8,
		Argument_InvalidOffLen = 9,
		ArgumentOutOfRange_BiggerThanCollection = 10,
		Serialization_MissingKeys = 11,
		Serialization_NullKey = 12,
		NotSupported_KeyCollectionSet = 13,
		NotSupported_ValueCollectionSet = 14,
		InvalidOperation_NullArray = 15,
		InvalidOperation_HSCapacityOverflow = 16,
		NotSupported_StringComparison = 17,
		ConcurrentCollection_SyncRoot_NotSupported = 18,
		ArgumentException_OtherNotArrayOfCorrectLength = 19,
		ArgumentOutOfRange_EndIndexStartIndex = 20,
		ArgumentOutOfRange_HugeArrayNotSupported = 21,
		Argument_AddingDuplicate = 22,
		Argument_InvalidArgumentForComparison = 23,
		Arg_LowerBoundsMustMatch = 24,
		Arg_MustBeType = 25,
		InvalidOperation_IComparerFailed = 26,
		NotSupported_FixedSizeCollection = 27,
		Rank_MultiDimNotSupported = 28,
		Arg_TypeNotSupported = 29,
		ObservableCollectionReentrancyNotAllowed = 30,
		InvalidOperation_ClassStructUnmatched = 31,
	};
}
