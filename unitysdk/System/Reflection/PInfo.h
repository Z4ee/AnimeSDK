#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Reflection
{
	inline static constexpr unsigned int PInfo_TypeDefinitionIndex = 627;

	enum class PInfo : ::System::Int32
	{
		Attributes = 1,
		GetMethod = 2,
		SetMethod = 4,
		ReflectedType = 8,
		DeclaringType = 16,
		Name = 32,
	};
}
