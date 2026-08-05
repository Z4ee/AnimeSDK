#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Renderer.h"
#include "unitysdk/UnityEngine/SpriteDrawMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Sprite; }

#define UNITYENGINE_SPRITERENDERER_GET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E8B3730)
#define UNITYENGINE_SPRITERENDERER_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x1E8B36F0)
#define UNITYENGINE_SPRITERENDERER_GET_DRAWMODE_OFFSET UNITYSDK_OFFSET(0x1E8B3660)
#define UNITYENGINE_SPRITERENDERER_GET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E8B36B0)
#define UNITYENGINE_SPRITERENDERER_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1E8B3680)
#define UNITYENGINE_SPRITERENDERER_GET_SPRITE_OFFSET UNITYSDK_OFFSET(0x1E8B3640)
#define UNITYENGINE_SPRITERENDERER_SET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E8B3750)
#define UNITYENGINE_SPRITERENDERER_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x1E8B3740)
#define UNITYENGINE_SPRITERENDERER_SET_DRAWMODE_OFFSET UNITYSDK_OFFSET(0x1E8B3670)
#define UNITYENGINE_SPRITERENDERER_SET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E8B36E0)
#define UNITYENGINE_SPRITERENDERER_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x1E8B36C0)
#define UNITYENGINE_SPRITERENDERER_SET_SPRITE_OFFSET UNITYSDK_OFFSET(0x1E8B3650)
#define UNITYENGINE_SPRITERENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8B3760)

namespace UnityEngine
{
	inline static constexpr unsigned int SpriteRenderer_TypeDefinitionIndex = 5421;

	class SpriteRenderer : public ::UnityEngine::Renderer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Sprite* get_sprite()
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_GET_SPRITE_OFFSET))(this);
		}

		::System::Void set_sprite(::UnityEngine::Sprite* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_SET_SPRITE_OFFSET))(this, value);
		}

		::UnityEngine::SpriteDrawMode get_drawMode()
		{
			return ((::UnityEngine::SpriteDrawMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_GET_DRAWMODE_OFFSET))(this);
		}

		::System::Void set_drawMode(::UnityEngine::SpriteDrawMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SpriteDrawMode))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_SET_DRAWMODE_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_size()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_size(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_SET_SIZE_OFFSET))(this, value);
		}

		::UnityEngine::Color get_color()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_GET_COLOR_OFFSET))(this);
		}

		::System::Void set_color(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_SET_COLOR_OFFSET))(this, value);
		}

		::System::Void get_size_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_GET_SIZE_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_size_Injected(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_SET_SIZE_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_color_Injected(::UnityEngine::Color& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_GET_COLOR_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_color_Injected(::UnityEngine::Color& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_SET_COLOR_INJECTED_OFFSET))(this, value);
		}
	};
}
