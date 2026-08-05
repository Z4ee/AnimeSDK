#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Data
{
	inline static constexpr unsigned int SchemaFormat_TypeDefinitionIndex = 39363;

	enum class SchemaFormat : ::System::Int32
	{
		Public = 1,
		Remoting = 2,
		WebService = 3,
		RemotingSkipSchema = 4,
		WebServiceSkipSchema = 5,
	};
}
