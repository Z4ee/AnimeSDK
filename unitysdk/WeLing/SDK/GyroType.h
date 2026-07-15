#pragma once
#include "unitysdk/unitysdk.h"

namespace WeLing::SDK
{
	inline static constexpr unsigned int GyroType_TypeDefinitionIndex = 7496;

	enum class GyroType : ::System::Int32
	{
		DEFAULT = 0,
		ATTITUDE = 1101,
		ROTATIONRATE = 1102,
	};
}
