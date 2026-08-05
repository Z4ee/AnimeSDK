#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Data
{
	inline static constexpr unsigned int BinaryNode_DataTypePrecedence_TypeDefinitionIndex = 39290;

	enum class BinaryNode_DataTypePrecedence : ::System::Int32
	{
		SqlDateTime = 25,
		DateTimeOffset = 24,
		DateTime = 23,
		TimeSpan = 20,
		SqlDouble = 19,
		Double = 18,
		SqlSingle = 17,
		Single = 16,
		SqlDecimal = 15,
		Decimal = 14,
		SqlMoney = 13,
		UInt64 = 12,
		SqlInt64 = 11,
		Int64 = 10,
		UInt32 = 9,
		SqlInt32 = 8,
		Int32 = 7,
		UInt16 = 6,
		SqlInt16 = 5,
		Int16 = 4,
		Byte = 3,
		SqlByte = 2,
		SByte = 1,
		Error = 0,
		SqlBoolean = -1,
		Boolean = -2,
		SqlGuid = -3,
		SqlString = -4,
		String = -5,
		SqlXml = -6,
		SqlChars = -7,
		Char = -8,
		SqlBytes = -9,
		SqlBinary = -10,
	};
}
