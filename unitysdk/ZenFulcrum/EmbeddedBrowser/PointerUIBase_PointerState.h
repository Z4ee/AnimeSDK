#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/MouseButton.h"

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int PointerUIBase_PointerState_TypeDefinitionIndex = 37326;

	struct alignas(4) PointerUIBase_PointerState
	{
		::System::Int32 id; // 0x10
		::System::Boolean is2D; // 0x14
		::UnityEngine::Vector2 position2D; // 0x18
		::UnityEngine::Ray position3D; // 0x20
		::ZenFulcrum::EmbeddedBrowser::MouseButton activeButtons; // 0x38
		::UnityEngine::Vector2 scrollDelta; // 0x3C
	};
}
