#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int TransformType_TypeDefinitionIndex = 42459;

	enum class TransformType : ::System::Int32
	{
		Matrix = 0,
		TRS = 1,
	};
}
