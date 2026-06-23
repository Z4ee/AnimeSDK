#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int DataParseStatus_TypeDefinitionIndex = 3366;

	enum class DataParseStatus : ::System::Int32
	{
		NeedMoreData = 0,
		ContinueParsing = 1,
		Done = 2,
		Invalid = 3,
		DataTooBig = 4,
	};
}
