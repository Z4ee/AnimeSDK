#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/UI/ColorMode.h"

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Image_ImageAnimState_TypeDefinitionIndex = 5897;

	struct alignas(4) Image_ImageAnimState
	{
		::UnityEngine::Color color; // 0x10
		::System::Single fillAmount; // 0x20
		::System::Boolean maskable; // 0x24
		::UnityEngine::UI::ColorMode colorMode; // 0x28
	};
}
