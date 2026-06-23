#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	inline static constexpr unsigned int XsdCachingReader_CachingReaderState_TypeDefinitionIndex = 1744;

	enum class XsdCachingReader_CachingReaderState : ::System::Int32
	{
		None = 0,
		Init = 1,
		Record = 2,
		Replay = 3,
		ReaderClosed = 4,
		Error = 5,
	};
}
