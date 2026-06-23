#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Canvas; }
namespace UnityEngine::UI { class Graphic; }
namespace UnityEngine::UI { class GraphicRaycaster; }

#define UNITYENGINE_UI_GRAPHICRAYCASTTARGETCACHEDATA_GETKEY_OFFSET UNITYSDK_OFFSET(0xA0B8E0)
#define UNITYENGINE_UI_GRAPHICRAYCASTTARGETCACHEDATA_UPDATECACHE_OFFSET UNITYSDK_OFFSET(0xA0B930)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int GraphicRaycastTargetCacheData_TypeDefinitionIndex = 18875;

	struct alignas(8) GraphicRaycastTargetCacheData
	{
		::UnityEngine::UI::Graphic* CachedGraphic; // 0x10
		::UnityEngine::Canvas* CachedCanvas; // 0x18
		::UnityEngine::UI::GraphicRaycaster* CachedRaycaster; // 0x20
		::UnityEngine::Vector2 ScreenMin; // 0x28
		::UnityEngine::Vector2 ScreenMax; // 0x30
		::System::Single ScreenZ; // 0x38

		::UnityEngine::UI::Graphic* GetKey()
		{
			return ((::UnityEngine::UI::Graphic*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTTARGETCACHEDATA_GETKEY_OFFSET))(this);
		}

		::System::Void UpdateCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTTARGETCACHEDATA_UPDATECACHE_OFFSET))(this);
		}
	};
}
