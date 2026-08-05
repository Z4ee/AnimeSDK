#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int TitleShowType_TypeDefinitionIndex = 53035;

	enum class TitleShowType : ::System::Int32
	{
		DiscountLastTime = 6,
		WeeklyRefreshTime = 4,
		ActivityTimeExpired = 3,
		None = 0,
		LastTime = 1,
		RefreshTime = 2,
		DailyRefreshTime = 5,
	};
}
