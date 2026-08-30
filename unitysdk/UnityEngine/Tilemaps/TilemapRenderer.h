#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Renderer.h"

namespace UnityEngine::U2D { class SpriteAtlas; }

#define UNITYENGINE_TILEMAPS_TILEMAPRENDERER_ONSPRITEATLASREGISTERED_OFFSET UNITYSDK_OFFSET(0x1EDE0D60)
#define UNITYENGINE_TILEMAPS_TILEMAPRENDERER_REGISTERSPRITEATLASREGISTERED_OFFSET UNITYSDK_OFFSET(0x1EDE0B20)
#define UNITYENGINE_TILEMAPS_TILEMAPRENDERER_UNREGISTERSPRITEATLASREGISTERED_OFFSET UNITYSDK_OFFSET(0x1EDE0C40)

namespace UnityEngine::Tilemaps
{
	inline static constexpr unsigned int TilemapRenderer_TypeDefinitionIndex = 5852;

	class TilemapRenderer : public ::UnityEngine::Renderer
	{
	public:
		::System::Void RegisterSpriteAtlasRegistered()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEMAPRENDERER_REGISTERSPRITEATLASREGISTERED_OFFSET))(this);
		}

		::System::Void UnregisterSpriteAtlasRegistered()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEMAPRENDERER_UNREGISTERSPRITEATLASREGISTERED_OFFSET))(this);
		}

		::System::Void OnSpriteAtlasRegistered(::UnityEngine::U2D::SpriteAtlas* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::U2D::SpriteAtlas*))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEMAPRENDERER_ONSPRITEATLASREGISTERED_OFFSET))(this, a1);
		}
	};
}
