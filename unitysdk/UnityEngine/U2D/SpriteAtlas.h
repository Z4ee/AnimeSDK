#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

namespace UnityEngine { class Sprite; }

#define UNITYENGINE_U2D_SPRITEATLAS_CANBINDTO_OFFSET UNITYSDK_OFFSET(0x1B3CEBC0)
#define UNITYENGINE_U2D_SPRITEATLAS_GETSPRITESSCRIPTING_OFFSET UNITYSDK_OFFSET(0x1B3CEBE0)
#define UNITYENGINE_U2D_SPRITEATLAS_GETSPRITES_OFFSET UNITYSDK_OFFSET(0x1B3CEBD0)
#define UNITYENGINE_U2D_SPRITEATLAS_GET_SPRITECOUNT_OFFSET UNITYSDK_OFFSET(0x1B3CEBB0)
#define UNITYENGINE_U2D_SPRITEATLAS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3CEBF0)

namespace UnityEngine::U2D
{
	inline static constexpr unsigned int SpriteAtlas_TypeDefinitionIndex = 5430;

	class SpriteAtlas : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLAS__CTOR_OFFSET))(this);
		}

		::System::Int32 get_spriteCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLAS_GET_SPRITECOUNT_OFFSET))(this);
		}

		::System::Boolean CanBindTo(::UnityEngine::Sprite* sprite)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLAS_CANBINDTO_OFFSET))(this, sprite);
		}

		::System::Int32 GetSprites(::Il2CppArray<::UnityEngine::Sprite*>* sprites)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::Sprite*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLAS_GETSPRITES_OFFSET))(this, sprites);
		}

		::System::Int32 GetSpritesScripting(::Il2CppArray<::UnityEngine::Sprite*>* sprites)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::Sprite*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLAS_GETSPRITESSCRIPTING_OFFSET))(this, sprites);
		}
	};
}
