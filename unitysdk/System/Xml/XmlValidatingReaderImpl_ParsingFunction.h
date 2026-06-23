#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	inline static constexpr unsigned int XmlValidatingReaderImpl_ParsingFunction_TypeDefinitionIndex = 1739;

	enum class XmlValidatingReaderImpl_ParsingFunction : ::System::Int32
	{
		Read = 0,
		Init = 1,
		ParseDtdFromContext = 2,
		ResolveEntityInternally = 3,
		InReadBinaryContent = 4,
		ReaderClosed = 5,
		Error = 6,
		None = 7,
	};
}
