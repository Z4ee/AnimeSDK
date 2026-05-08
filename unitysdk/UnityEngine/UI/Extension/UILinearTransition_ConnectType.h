#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UILinearTransition_ConnectType_TypeDefinitionIndex = 39924;

	enum class UILinearTransition_ConnectType : ::System::Int32
	{
		OneToTwo = 1,
		OneToOne = 0,
		TwoToOne = 2,
		TwoToTwo = 3,
	};
}
