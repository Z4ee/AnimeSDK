#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int TitleShowType_TypeDefinitionIndex = 56243;

	enum class TitleShowType : ::System::Int32
	{
		DailyRefreshTime = 5,
		None = 0,
		RefreshTime = 2,
		LastTime = 1,
		WeeklyRefreshTime = 4,
		DiscountLastTime = 6,
		ActivityTimeExpired = 3,
	};
}
