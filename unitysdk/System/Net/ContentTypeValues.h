#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int ContentTypeValues_TypeDefinitionIndex = 3300;

	enum class ContentTypeValues : ::System::Int32
	{
		ChangeCipherSpec = 20,
		Alert = 21,
		HandShake = 22,
		AppData = 23,
		Unrecognized = 255,
	};
}
