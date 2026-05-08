#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/FootPrintManager_FootPrintSpawnerType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER_CACHEDFOOTPRINTRENDERITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x94DBF0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int FootPrintManager_CachedFootPrintRenderItem_TypeDefinitionIndex = 30496;

	struct alignas(4) FootPrintManager_CachedFootPrintRenderItem
	{
		::UnityEngine::Vector3 position; // 0x10
		::UnityEngine::Quaternion rotation; // 0x1C
		::UnityEngine::Rendering::Universal::Internal::FootPrintManager_FootPrintSpawnerType npcFootTypeType; // 0x2C
		::System::Boolean needMirror; // 0x30

		::System::Void _ctor(::UnityEngine::Vector3 p, ::UnityEngine::Quaternion r, ::UnityEngine::Rendering::Universal::Internal::FootPrintManager_FootPrintSpawnerType type, ::System::Boolean mirror)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Rendering::Universal::Internal::FootPrintManager_FootPrintSpawnerType, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER_CACHEDFOOTPRINTRENDERITEM__CTOR_OFFSET))(this, p, r, type, mirror);
		}
	};
}
