#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	inline static constexpr unsigned int XsdValidatingReader_ValidatingReaderState_TypeDefinitionIndex = 1748;

	enum class XsdValidatingReader_ValidatingReaderState : ::System::Int32
	{
		None = 0,
		Init = 1,
		Read = 2,
		OnDefaultAttribute = -1,
		OnReadAttributeValue = -2,
		OnAttribute = 3,
		ClearAttributes = 4,
		ParseInlineSchema = 5,
		ReadAhead = 6,
		OnReadBinaryContent = 7,
		ReaderClosed = 8,
		EOF = 9,
		Error = 10,
	};
}
