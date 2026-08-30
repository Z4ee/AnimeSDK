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

#define UNITYENGINE_SPRITERENDERER_GETSPRITEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1ED68100)
#define UNITYENGINE_SPRITERENDERER_GET_ADAPTIVEMODETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1ED67F70)
#define UNITYENGINE_SPRITERENDERER_GET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED67FF0)
#define UNITYENGINE_SPRITERENDERER_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x1ED67FB0)
#define UNITYENGINE_SPRITERENDERER_GET_DRAWMODE_OFFSET UNITYSDK_OFFSET(0x1ED67EE0)
#define UNITYENGINE_SPRITERENDERER_GET_FLIPX_OFFSET UNITYSDK_OFFSET(0x1ED68040)
#define UNITYENGINE_SPRITERENDERER_GET_FLIPY_OFFSET UNITYSDK_OFFSET(0x1ED68060)
#define UNITYENGINE_SPRITERENDERER_GET_MASKINTERACTION_OFFSET UNITYSDK_OFFSET(0x1ED68020)
#define UNITYENGINE_SPRITERENDERER_GET_SHOULDSUPPORTTILING_OFFSET UNITYSDK_OFFSET(0x1ED67EB0)
#define UNITYENGINE_SPRITERENDERER_GET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED67F30)
#define UNITYENGINE_SPRITERENDERER_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1ED67F00)
#define UNITYENGINE_SPRITERENDERER_GET_SPRITESORTPOINT_OFFSET UNITYSDK_OFFSET(0x1ED68080)
#define UNITYENGINE_SPRITERENDERER_GET_SPRITE_OFFSET UNITYSDK_OFFSET(0x1ED67EC0)
#define UNITYENGINE_SPRITERENDERER_GET_TILEMODE_OFFSET UNITYSDK_OFFSET(0x1ED67F90)
#define UNITYENGINE_SPRITERENDERER_INTERNAL_GETSPRITEBOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED680F0)
#define UNITYENGINE_SPRITERENDERER_INTERNAL_GETSPRITEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1ED680A0)
#define UNITYENGINE_SPRITERENDERER_SET_ADAPTIVEMODETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1ED67F80)
#define UNITYENGINE_SPRITERENDERER_SET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED68010)
#define UNITYENGINE_SPRITERENDERER_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x1ED68000)
#define UNITYENGINE_SPRITERENDERER_SET_DRAWMODE_OFFSET UNITYSDK_OFFSET(0x1ED67EF0)
#define UNITYENGINE_SPRITERENDERER_SET_FLIPX_OFFSET UNITYSDK_OFFSET(0x1ED68050)
#define UNITYENGINE_SPRITERENDERER_SET_FLIPY_OFFSET UNITYSDK_OFFSET(0x1ED68070)
#define UNITYENGINE_SPRITERENDERER_SET_MASKINTERACTION_OFFSET UNITYSDK_OFFSET(0x1ED68030)
#define UNITYENGINE_SPRITERENDERER_SET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED67F60)
#define UNITYENGINE_SPRITERENDERER_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x1ED67F40)
#define UNITYENGINE_SPRITERENDERER_SET_SPRITESORTPOINT_OFFSET UNITYSDK_OFFSET(0x1ED68090)
#define UNITYENGINE_SPRITERENDERER_SET_SPRITE_OFFSET UNITYSDK_OFFSET(0x1ED67ED0)
#define UNITYENGINE_SPRITERENDERER_SET_TILEMODE_OFFSET UNITYSDK_OFFSET(0x1ED67FA0)
#define UNITYENGINE_SPRITERENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED68160)

namespace UnityEngine
{
	inline static constexpr unsigned int SpriteRenderer_TypeDefinitionIndex = 4410;

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

		::System::Void set_sprite(::UnityEngine::Sprite* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_SET_SPRITE_OFFSET))(this, a1);
		}

		::UnityEngine::SpriteDrawMode get_drawMode()
		{
			return ((::UnityEngine::SpriteDrawMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_GET_DRAWMODE_OFFSET))(this);
		}

		::System::Void set_drawMode(::UnityEngine::SpriteDrawMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SpriteDrawMode))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_SET_DRAWMODE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_size()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_size(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_SET_SIZE_OFFSET))(this, a1);
		}

		::System::Single get_adaptiveModeThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_GET_ADAPTIVEMODETHRESHOLD_OFFSET))(this);
		}

		::System::Void set_adaptiveModeThreshold(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_SET_ADAPTIVEMODETHRESHOLD_OFFSET))(this, a1);
		}

		::UnityEngine::SpriteTileMode get_tileMode()
		{
			return ((::UnityEngine::SpriteTileMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_GET_TILEMODE_OFFSET))(this);
		}

		::System::Void set_tileMode(::UnityEngine::SpriteTileMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SpriteTileMode))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_SET_TILEMODE_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_color()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_GET_COLOR_OFFSET))(this);
		}

		::System::Void set_color(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_SET_COLOR_OFFSET))(this, a1);
		}

		::UnityEngine::SpriteMaskInteraction get_maskInteraction()
		{
			return ((::UnityEngine::SpriteMaskInteraction(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_GET_MASKINTERACTION_OFFSET))(this);
		}

		::System::Void set_maskInteraction(::UnityEngine::SpriteMaskInteraction a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SpriteMaskInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_SET_MASKINTERACTION_OFFSET))(this, a1);
		}

		::System::Boolean get_flipX()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_GET_FLIPX_OFFSET))(this);
		}

		::System::Void set_flipX(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_SET_FLIPX_OFFSET))(this, a1);
		}

		::System::Boolean get_flipY()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_GET_FLIPY_OFFSET))(this);
		}

		::System::Void set_flipY(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_SET_FLIPY_OFFSET))(this, a1);
		}

		::UnityEngine::SpriteSortPoint get_spriteSortPoint()
		{
			return ((::UnityEngine::SpriteSortPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_GET_SPRITESORTPOINT_OFFSET))(this);
		}

		::System::Void set_spriteSortPoint(::UnityEngine::SpriteSortPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SpriteSortPoint))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_SET_SPRITESORTPOINT_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds Internal_GetSpriteBounds(::UnityEngine::SpriteDrawMode a1)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::SpriteDrawMode))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_INTERNAL_GETSPRITEBOUNDS_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds GetSpriteBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_GETSPRITEBOUNDS_OFFSET))(this);
		}

		::System::Void get_size_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_GET_SIZE_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_size_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_SET_SIZE_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_color_Injected(::UnityEngine::Color& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_GET_COLOR_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_color_Injected(::UnityEngine::Color& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_SET_COLOR_INJECTED_OFFSET))(this, a1);
		}

		::System::Void Internal_GetSpriteBounds_Injected(::UnityEngine::SpriteDrawMode a1, ::UnityEngine::Bounds& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SpriteDrawMode, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_INTERNAL_GETSPRITEBOUNDS_INJECTED_OFFSET))(this, a1, a2);
		}
	};
}
