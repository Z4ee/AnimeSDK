#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/ReaderException.h"

#define ZXING_FORMATEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A74D870)

namespace ZXing
{
	inline static constexpr unsigned int FormatException_TypeDefinitionIndex = 6066;

	class FormatException : public ::ZXing::ReaderException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_FORMATEXCEPTION__CTOR_OFFSET))(this);
		}
	};
}
