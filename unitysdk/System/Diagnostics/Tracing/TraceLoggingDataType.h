#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int TraceLoggingDataType_TypeDefinitionIndex = 1654;

	enum class TraceLoggingDataType : ::System::Int32
	{
		Nil = 0,
		Utf16String = 1,
		MbcsString = 2,
		Int8 = 3,
		UInt8 = 4,
		Int16 = 5,
		UInt16 = 6,
		Int32 = 7,
		UInt32 = 8,
		Int64 = 9,
		UInt64 = 10,
		Float = 11,
		Double = 12,
		Boolean32 = 13,
		Binary = 14,
		Guid = 15,
		FileTime = 17,
		SystemTime = 18,
		HexInt32 = 20,
		HexInt64 = 21,
		CountedUtf16String = 22,
		CountedMbcsString = 23,
		Struct = 24,
		Char16 = 518,
		Char8 = 516,
		Boolean8 = 772,
		HexInt8 = 1028,
		HexInt16 = 1030,
		Utf16Xml = 2817,
		MbcsXml = 2818,
		CountedUtf16Xml = 2838,
		CountedMbcsXml = 2839,
		Utf16Json = 3073,
		MbcsJson = 3074,
		CountedUtf16Json = 3094,
		CountedMbcsJson = 3095,
		HResult = 3847,
	};
}
