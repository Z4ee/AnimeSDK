#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::InteropServices::ComTypes
{
	inline static constexpr unsigned int DVASPECT_TypeDefinitionIndex = 3127;

	enum class DVASPECT : ::System::Int32
	{
		DVASPECT_CONTENT = 1,
		DVASPECT_THUMBNAIL = 2,
		DVASPECT_ICON = 4,
		DVASPECT_DOCPRINT = 8,
	};
}
