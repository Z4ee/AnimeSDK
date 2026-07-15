#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_NUMBERBUFFER_GET_DIGITS_OFFSET UNITYSDK_OFFSET(0x676BA0)

namespace System::Globalization
{
	inline static constexpr unsigned int FormatProvider_Number_NumberBuffer_TypeDefinitionIndex = 3838;

	struct alignas(8) FormatProvider_Number_NumberBuffer
	{
		::System::Int32 precision; // 0x10
		::System::Int32 scale; // 0x14
		::System::Boolean sign; // 0x18
		::System::Char* overrideDigits; // 0x20

		::System::Char* get_digits()
		{
			return ((::System::Char*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_NUMBERBUFFER_GET_DIGITS_OFFSET))(this);
		}
	};
}
