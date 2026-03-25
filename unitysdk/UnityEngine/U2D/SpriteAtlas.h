#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

namespace System { class String; }
namespace UnityEngine { class Sprite; }

#define UNITYENGINE_U2D_SPRITEATLAS_CANBINDTO_OFFSET UNITYSDK_OFFSET(0x18A5ADD0)
#define UNITYENGINE_U2D_SPRITEATLAS_GETSPRITESSCRIPTING_OFFSET UNITYSDK_OFFSET(0x18A5AE00)
#define UNITYENGINE_U2D_SPRITEATLAS_GETSPRITESWITHNAMESCRIPTING_OFFSET UNITYSDK_OFFSET(0x18A5AE20)
#define UNITYENGINE_U2D_SPRITEATLAS_GETSPRITES_1_OFFSET UNITYSDK_OFFSET(0x18A5AE10)
#define UNITYENGINE_U2D_SPRITEATLAS_GETSPRITES_OFFSET UNITYSDK_OFFSET(0x18A5ADF0)
#define UNITYENGINE_U2D_SPRITEATLAS_GETSPRITE_OFFSET UNITYSDK_OFFSET(0x18A5ADE0)
#define UNITYENGINE_U2D_SPRITEATLAS_GET_ISVARIANT_OFFSET UNITYSDK_OFFSET(0x18A5ADA0)
#define UNITYENGINE_U2D_SPRITEATLAS_GET_SPRITECOUNT_OFFSET UNITYSDK_OFFSET(0x18A5ADC0)
#define UNITYENGINE_U2D_SPRITEATLAS_GET_TAG_OFFSET UNITYSDK_OFFSET(0x18A5ADB0)
#define UNITYENGINE_U2D_SPRITEATLAS__CTOR_OFFSET UNITYSDK_OFFSET(0x18A5AE30)

namespace UnityEngine::U2D
{
	inline static constexpr unsigned int SpriteAtlas_TypeDefinitionIndex = 4230;

	class SpriteAtlas : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLAS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isVariant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLAS_GET_ISVARIANT_OFFSET))(this);
		}

		::System::String* get_tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLAS_GET_TAG_OFFSET))(this);
		}

		::System::Int32 get_spriteCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLAS_GET_SPRITECOUNT_OFFSET))(this);
		}

		::System::Boolean CanBindTo(::UnityEngine::Sprite* sprite)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLAS_CANBINDTO_OFFSET))(this, sprite);
		}

		::UnityEngine::Sprite* GetSprite(::System::String* name)
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLAS_GETSPRITE_OFFSET))(this, name);
		}

		::System::Int32 GetSprites(::Il2CppArray<::UnityEngine::Sprite*>* sprites)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::Sprite*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLAS_GETSPRITES_OFFSET))(this, sprites);
		}

		::System::Int32 GetSprites_1(::Il2CppArray<::UnityEngine::Sprite*>* sprites, ::System::String* name)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::Sprite*>*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLAS_GETSPRITES_1_OFFSET))(this, sprites, name);
		}

		::System::Int32 GetSpritesScripting(::Il2CppArray<::UnityEngine::Sprite*>* sprites)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::Sprite*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLAS_GETSPRITESSCRIPTING_OFFSET))(this, sprites);
		}

		::System::Int32 GetSpritesWithNameScripting(::Il2CppArray<::UnityEngine::Sprite*>* sprites, ::System::String* name)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::Sprite*>*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLAS_GETSPRITESWITHNAMESCRIPTING_OFFSET))(this, sprites, name);
		}
	};
}
