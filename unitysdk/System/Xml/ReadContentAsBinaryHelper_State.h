#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	inline static constexpr unsigned int ReadContentAsBinaryHelper_State_TypeDefinitionIndex = 1696;

	enum class ReadContentAsBinaryHelper_State : ::System::Int32
	{
		None = 0,
		InReadContent = 1,
		InReadElementContent = 2,
	};
}
