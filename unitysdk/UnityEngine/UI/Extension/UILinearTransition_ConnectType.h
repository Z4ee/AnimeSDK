#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UILinearTransition_ConnectType_TypeDefinitionIndex = 65692;

	enum class UILinearTransition_ConnectType : ::System::Int32
	{
		OneToOne = 0,
		OneToTwo = 1,
		TwoToOne = 2,
		TwoToTwo = 3,
	};
}
