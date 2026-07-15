#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int TangentsMode_TypeDefinitionIndex = 42481;

	enum class TangentsMode : ::System::Int32
	{
		None = 0,
		Calculate = 1,
	};
}
