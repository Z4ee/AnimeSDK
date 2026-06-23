#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_CACHEDGRASSRENDERITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x934550)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int CachedGrassRenderItemData_TypeDefinitionIndex = 26404;

	struct alignas(4) CachedGrassRenderItemData
	{
		::UnityEngine::Vector3 position; // 0x10
		::UnityEngine::Vector3 scale; // 0x1C
		::UnityEngine::Quaternion rotation; // 0x28
		::UnityEngine::Vector2Int groupIndex; // 0x38
		::System::Single windScale; // 0x40
		::System::Single windSpeed; // 0x44
		::System::Single bendValue; // 0x48

		::System::Void _ctor(::UnityEngine::Rendering::Universal::CachedGrassRenderItemData oldData, ::UnityEngine::Vector2Int index)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::CachedGrassRenderItemData, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CACHEDGRASSRENDERITEMDATA__CTOR_OFFSET))(this, oldData, index);
		}
	};
}
