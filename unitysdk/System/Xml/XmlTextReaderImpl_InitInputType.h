#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	inline static constexpr unsigned int XmlTextReaderImpl_InitInputType_TypeDefinitionIndex = 1846;

	enum class XmlTextReaderImpl_InitInputType : ::System::Int32
	{
		UriString = 0,
		Stream = 1,
		TextReader = 2,
		Invalid = 3,
	};
}
