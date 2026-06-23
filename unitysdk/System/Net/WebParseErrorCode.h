#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int WebParseErrorCode_TypeDefinitionIndex = 3369;

	enum class WebParseErrorCode : ::System::Int32
	{
		Generic = 0,
		InvalidHeaderName = 1,
		InvalidContentLength = 2,
		IncompleteHeaderLine = 3,
		CrLfError = 4,
		InvalidChunkFormat = 5,
		UnexpectedServerResponse = 6,
	};
}
