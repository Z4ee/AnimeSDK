#pragma once
#include "unitysdk/unitysdk.h"

namespace Utf8Json
{
	inline static constexpr unsigned int JsonToken_TypeDefinitionIndex = 91090;

	enum class JsonToken : ::System::Byte
	{
		None = 0x0,
		BeginObject = 0x1,
		EndObject = 0x2,
		BeginArray = 0x3,
		EndArray = 0x4,
		Number = 0x5,
		String = 0x6,
		True = 0x7,
		False = 0x8,
		Null = 0x9,
		ValueSeparator = 0xA,
		NameSeparator = 0xB,
	};
}
