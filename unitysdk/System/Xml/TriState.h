#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	inline static constexpr unsigned int TriState_TypeDefinitionIndex = 1880;

	enum class TriState : ::System::Int32
	{
		Unknown = -1,
		False = 0,
		True = 1,
	};
}
