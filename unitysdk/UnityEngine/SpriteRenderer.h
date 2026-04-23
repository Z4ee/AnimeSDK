#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Renderer.h"
#include "unitysdk/UnityEngine/SpriteDrawMode.h"
#include "unitysdk/UnityEngine/SpriteMaskInteraction.h"
#include "unitysdk/UnityEngine/SpriteSortPoint.h"
#include "unitysdk/UnityEngine/SpriteTileMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Sprite; }

#define UNITYENGINE_SPRITERENDERER_GETSPRITEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1A4890D0)
#define UNITYENGINE_SPRITERENDERER_GET_ADAPTIVEMODETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1A488F40)
#define UNITYENGINE_SPRITERENDERER_GET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A488FC0)
#define UNITYENGINE_SPRITERENDERER_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x1A488F80)
#define UNITYENGINE_SPRITERENDERER_GET_DRAWMODE_OFFSET UNITYSDK_OFFSET(0x1A488EB0)
#define UNITYENGINE_SPRITERENDERER_GET_FLIPX_OFFSET UNITYSDK_OFFSET(0x1A489010)
#define UNITYENGINE_SPRITERENDERER_GET_FLIPY_OFFSET UNITYSDK_OFFSET(0x1A489030)
#define UNITYENGINE_SPRITERENDERER_GET_MASKINTERACTION_OFFSET UNITYSDK_OFFSET(0x1A488FF0)
#define UNITYENGINE_SPRITERENDERER_GET_SHOULDSUPPORTTILING_OFFSET UNITYSDK_OFFSET(0x1A488E80)
#define UNITYENGINE_SPRITERENDERER_GET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A488F00)
#define UNITYENGINE_SPRITERENDERER_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1A488ED0)
#define UNITYENGINE_SPRITERENDERER_GET_SPRITESORTPOINT_OFFSET UNITYSDK_OFFSET(0x1A489050)
#define UNITYENGINE_SPRITERENDERER_GET_SPRITE_OFFSET UNITYSDK_OFFSET(0x1A488E90)
#define UNITYENGINE_SPRITERENDERER_GET_TILEMODE_OFFSET UNITYSDK_OFFSET(0x1A488F60)
#define UNITYENGINE_SPRITERENDERER_INTERNAL_GETSPRITEBOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4890C0)
#define UNITYENGINE_SPRITERENDERER_INTERNAL_GETSPRITEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1A489070)
#define UNITYENGINE_SPRITERENDERER_SET_ADAPTIVEMODETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1A488F50)
#define UNITYENGINE_SPRITERENDERER_SET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A488FE0)
#define UNITYENGINE_SPRITERENDERER_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x1A488FD0)
#define UNITYENGINE_SPRITERENDERER_SET_DRAWMODE_OFFSET UNITYSDK_OFFSET(0x1A488EC0)
#define UNITYENGINE_SPRITERENDERER_SET_FLIPX_OFFSET UNITYSDK_OFFSET(0x1A489020)
#define UNITYENGINE_SPRITERENDERER_SET_FLIPY_OFFSET UNITYSDK_OFFSET(0x1A489040)
#define UNITYENGINE_SPRITERENDERER_SET_MASKINTERACTION_OFFSET UNITYSDK_OFFSET(0x1A489000)
#define UNITYENGINE_SPRITERENDERER_SET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A488F30)
#define UNITYENGINE_SPRITERENDERER_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x1A488F10)
#define UNITYENGINE_SPRITERENDERER_SET_SPRITESORTPOINT_OFFSET UNITYSDK_OFFSET(0x1A489060)
#define UNITYENGINE_SPRITERENDERER_SET_SPRITE_OFFSET UNITYSDK_OFFSET(0x1A488EA0)
#define UNITYENGINE_SPRITERENDERER_SET_TILEMODE_OFFSET UNITYSDK_OFFSET(0x1A488F70)
#define UNITYENGINE_SPRITERENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A489130)

namespace UnityEngine
{
	inline static constexpr unsigned int SpriteRenderer_TypeDefinitionIndex = 4221;

	class SpriteRenderer : public ::UnityEngine::Renderer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_shouldSupportTiling()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_GET_SHOULDSUPPORTTILING_OFFSET))(this);
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

		::System::Single get_adaptiveModeThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_GET_ADAPTIVEMODETHRESHOLD_OFFSET))(this);
		}

		::System::Void set_adaptiveModeThreshold(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_SET_ADAPTIVEMODETHRESHOLD_OFFSET))(this, value);
		}

		::UnityEngine::SpriteTileMode get_tileMode()
		{
			return ((::UnityEngine::SpriteTileMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_GET_TILEMODE_OFFSET))(this);
		}

		::System::Void set_tileMode(::UnityEngine::SpriteTileMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SpriteTileMode))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_SET_TILEMODE_OFFSET))(this, value);
		}

		::UnityEngine::Color get_color()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_GET_COLOR_OFFSET))(this);
		}

		::System::Void set_color(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_SET_COLOR_OFFSET))(this, value);
		}

		::UnityEngine::SpriteMaskInteraction get_maskInteraction()
		{
			return ((::UnityEngine::SpriteMaskInteraction(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_GET_MASKINTERACTION_OFFSET))(this);
		}

		::System::Void set_maskInteraction(::UnityEngine::SpriteMaskInteraction value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SpriteMaskInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_SET_MASKINTERACTION_OFFSET))(this, value);
		}

		::System::Boolean get_flipX()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_GET_FLIPX_OFFSET))(this);
		}

		::System::Void set_flipX(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_SET_FLIPX_OFFSET))(this, value);
		}

		::System::Boolean get_flipY()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_GET_FLIPY_OFFSET))(this);
		}

		::System::Void set_flipY(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_SET_FLIPY_OFFSET))(this, value);
		}

		::UnityEngine::SpriteSortPoint get_spriteSortPoint()
		{
			return ((::UnityEngine::SpriteSortPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_GET_SPRITESORTPOINT_OFFSET))(this);
		}

		::System::Void set_spriteSortPoint(::UnityEngine::SpriteSortPoint value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SpriteSortPoint))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_SET_SPRITESORTPOINT_OFFSET))(this, value);
		}

		::UnityEngine::Bounds Internal_GetSpriteBounds(::UnityEngine::SpriteDrawMode mode)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::SpriteDrawMode))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_INTERNAL_GETSPRITEBOUNDS_OFFSET))(this, mode);
		}

		::UnityEngine::Bounds GetSpriteBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_GETSPRITEBOUNDS_OFFSET))(this);
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

		::System::Void Internal_GetSpriteBounds_Injected(::UnityEngine::SpriteDrawMode mode, ::UnityEngine::Bounds& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SpriteDrawMode, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_INTERNAL_GETSPRITEBOUNDS_INJECTED_OFFSET))(this, mode, ret);
		}
	};
}
