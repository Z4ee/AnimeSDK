#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITableViewCell_State_TypeDefinitionIndex = 60152;

	enum class UITableViewCell_State : ::System::Int32
	{
		Disabled = 3,
		Selected = 2,
		Dimmed = 1,
		Normal = 0,
	};
}
