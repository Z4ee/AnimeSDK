#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int HttpWriteMode_TypeDefinitionIndex = 3318;

	enum class HttpWriteMode : ::System::Int32
	{
		Unknown = 0,
		ContentLength = 1,
		Chunked = 2,
		Buffer = 3,
		None = 4,
	};
}
