#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	inline static constexpr unsigned int ExceptionResource_TypeDefinitionIndex = 339;

	enum class ExceptionResource : ::System::Int32
	{
		Argument_ImplementIComparable = 0,
		Argument_InvalidType = 1,
		Argument_InvalidArgumentForComparison = 2,
		Argument_InvalidRegistryKeyPermissionCheck = 3,
		ArgumentOutOfRange_NeedNonNegNum = 4,
		Arg_ArrayPlusOffTooSmall = 5,
		Arg_NonZeroLowerBound = 6,
		Arg_RankMultiDimNotSupported = 7,
		Arg_RegKeyDelHive = 8,
		Arg_RegKeyStrLenBug = 9,
		Arg_RegSetStrArrNull = 10,
		Arg_RegSetMismatchedKind = 11,
		Arg_RegSubKeyAbsent = 12,
		Arg_RegSubKeyValueAbsent = 13,
		Argument_AddingDuplicate = 14,
		Serialization_InvalidOnDeser = 15,
		Serialization_MissingKeys = 16,
		Serialization_NullKey = 17,
		Argument_InvalidArrayType = 18,
		NotSupported_KeyCollectionSet = 19,
		NotSupported_ValueCollectionSet = 20,
		ArgumentOutOfRange_SmallCapacity = 21,
		ArgumentOutOfRange_Index = 22,
		Argument_InvalidOffLen = 23,
		Argument_ItemNotExist = 24,
		ArgumentOutOfRange_Count = 25,
		ArgumentOutOfRange_InvalidThreshold = 26,
		ArgumentOutOfRange_ListInsert = 27,
		NotSupported_ReadOnlyCollection = 28,
		InvalidOperation_CannotRemoveFromStackOrQueue = 29,
		InvalidOperation_EmptyQueue = 30,
		InvalidOperation_EnumOpCantHappen = 31,
		InvalidOperation_EnumFailedVersion = 32,
		InvalidOperation_EmptyStack = 33,
		ArgumentOutOfRange_BiggerThanCollection = 34,
		InvalidOperation_EnumNotStarted = 35,
		InvalidOperation_EnumEnded = 36,
		NotSupported_SortedListNestedWrite = 37,
		InvalidOperation_NoValue = 38,
		InvalidOperation_RegRemoveSubKey = 39,
		Security_RegistryPermission = 40,
		UnauthorizedAccess_RegistryNoWrite = 41,
		ObjectDisposed_RegKeyClosed = 42,
		NotSupported_InComparableType = 43,
		Argument_InvalidRegistryOptionsCheck = 44,
		Argument_InvalidRegistryViewCheck = 45,
	};
}
