#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/Panel.h"

namespace UnityEngine { class RenderTexture; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int RuntimePanel_TypeDefinitionIndex = 6150;

	class RuntimePanel : public ::UnityEngine::UIElements::Panel
	{
	public:
		::UnityEngine::RenderTexture* targetTexture; // 0x88
	};
}
