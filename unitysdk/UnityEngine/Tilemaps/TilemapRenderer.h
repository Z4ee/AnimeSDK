#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Renderer.h"

namespace UnityEngine::U2D { class SpriteAtlas; }

#define UNITYENGINE_TILEMAPS_TILEMAPRENDERER_ONSPRITEATLASREGISTERED_OFFSET UNITYSDK_OFFSET(0x1C551D20)
#define UNITYENGINE_TILEMAPS_TILEMAPRENDERER_REGISTERSPRITEATLASREGISTERED_OFFSET UNITYSDK_OFFSET(0x1C551C40)
#define UNITYENGINE_TILEMAPS_TILEMAPRENDERER_UNREGISTERSPRITEATLASREGISTERED_OFFSET UNITYSDK_OFFSET(0x1C551CB0)
#define UNITYENGINE_TILEMAPS_TILEMAPRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C551D30)

namespace UnityEngine::Tilemaps
{
	inline static constexpr unsigned int TilemapRenderer_TypeDefinitionIndex = 84215;

	class TilemapRenderer : public ::UnityEngine::Renderer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEMAPRENDERER__CTOR_OFFSET))(this);
		}

		::System::Void RegisterSpriteAtlasRegistered()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEMAPRENDERER_REGISTERSPRITEATLASREGISTERED_OFFSET))(this);
		}

		::System::Void UnregisterSpriteAtlasRegistered()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEMAPRENDERER_UNREGISTERSPRITEATLASREGISTERED_OFFSET))(this);
		}

		::System::Void OnSpriteAtlasRegistered(::UnityEngine::U2D::SpriteAtlas* atlas)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::U2D::SpriteAtlas*))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEMAPRENDERER_ONSPRITEATLASREGISTERED_OFFSET))(this, atlas);
		}
	};
}
