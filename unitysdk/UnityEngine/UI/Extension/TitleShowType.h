#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int TitleShowType_TypeDefinitionIndex = 56629;

	enum class TitleShowType : ::System::Int32
	{
		DailyRefreshTime = 5,
		None = 0,
		RefreshTime = 2,
		DiscountLastTime = 6,
		WeeklyRefreshTime = 4,
		ActivityTimeExpired = 3,
		LastTime = 1,
	};
}
