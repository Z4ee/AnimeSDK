#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RTHandleProperties_TypeDefinitionIndex = 34147;

	struct alignas(4) RTHandleProperties
	{
		::UnityEngine::Vector2Int previousViewportSize; // 0x10
		::UnityEngine::Vector2Int previousRenderTargetSize; // 0x18
		::UnityEngine::Vector2Int currentViewportSize; // 0x20
		::UnityEngine::Vector2Int currentRenderTargetSize; // 0x28
		::UnityEngine::Vector4 rtHandleScale; // 0x30
	};
}
