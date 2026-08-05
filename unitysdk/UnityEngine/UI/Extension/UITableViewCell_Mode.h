#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITableViewCell_Mode_TypeDefinitionIndex = 60153;

	enum class UITableViewCell_Mode : ::System::Int32
	{
		Fixed = 0,
		NoCalc = 3,
		CalcOnce = 1,
		CalcEvery = 2,
	};
}
