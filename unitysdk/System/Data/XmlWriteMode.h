#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Data
{
	inline static constexpr unsigned int XmlWriteMode_TypeDefinitionIndex = 39362;

	enum class XmlWriteMode : ::System::Int32
	{
		WriteSchema = 0,
		IgnoreSchema = 1,
		DiffGram = 2,
	};
}
