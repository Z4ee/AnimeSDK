#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITableViewCell_State_TypeDefinitionIndex = 87003;

	enum class UITableViewCell_State : ::System::Int32
	{
		Disabled = 3,
		Selected = 2,
		Normal = 0,
		Dimmed = 1,
	};
}
