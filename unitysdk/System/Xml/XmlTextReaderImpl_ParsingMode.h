#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	inline static constexpr unsigned int XmlTextReaderImpl_ParsingMode_TypeDefinitionIndex = 1841;

	enum class XmlTextReaderImpl_ParsingMode : ::System::Int32
	{
		Full = 0,
		SkipNode = 1,
		SkipContent = 2,
	};
}
