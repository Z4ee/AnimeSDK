#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Data::Common
{
	inline static constexpr unsigned int StorageType_TypeDefinitionIndex = 37122;

	enum class StorageType : ::System::Int32
	{
		Empty = 0,
		Object = 1,
		DBNull = 2,
		Boolean = 3,
		Char = 4,
		SByte = 5,
		Byte = 6,
		Int16 = 7,
		UInt16 = 8,
		Int32 = 9,
		UInt32 = 10,
		Int64 = 11,
		UInt64 = 12,
		Single = 13,
		Double = 14,
		Decimal = 15,
		DateTime = 16,
		TimeSpan = 17,
		String = 18,
		Guid = 19,
		ByteArray = 20,
		CharArray = 21,
		Type = 22,
		DateTimeOffset = 23,
		BigInteger = 24,
		Uri = 25,
		SqlBinary = 26,
		SqlBoolean = 27,
		SqlByte = 28,
		SqlBytes = 29,
		SqlChars = 30,
		SqlDateTime = 31,
		SqlDecimal = 32,
		SqlDouble = 33,
		SqlGuid = 34,
		SqlInt16 = 35,
		SqlInt32 = 36,
		SqlInt64 = 37,
		SqlMoney = 38,
		SqlSingle = 39,
		SqlString = 40,
	};
}
