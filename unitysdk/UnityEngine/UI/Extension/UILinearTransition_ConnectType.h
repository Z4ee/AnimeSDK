#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UILinearTransition_ConnectType_TypeDefinitionIndex = 58927;

	enum class UILinearTransition_ConnectType : ::System::Int32
	{
		OneToTwo = 1,
		TwoToTwo = 3,
		OneToOne = 0,
		TwoToOne = 2,
	};
}
