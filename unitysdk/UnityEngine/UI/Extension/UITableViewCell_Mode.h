#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITableViewCell_Mode_TypeDefinitionIndex = 87002;

	enum class UITableViewCell_Mode : ::System::Int32
	{
		NoCalc = 3,
		Fixed = 0,
		CalcOnce = 1,
		CalcEvery = 2,
	};
}
