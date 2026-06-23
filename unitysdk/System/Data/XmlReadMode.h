#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Data
{
	inline static constexpr unsigned int XmlReadMode_TypeDefinitionIndex = 38696;

	enum class XmlReadMode : ::System::Int32
	{
		Auto = 0,
		ReadSchema = 1,
		IgnoreSchema = 2,
		InferSchema = 3,
		DiffGram = 4,
		Fragment = 5,
		InferTypedSchema = 6,
	};
}
