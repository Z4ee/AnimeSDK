#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

namespace System { class String; }
namespace UnityEngine { class Sprite; }

#define UNITYENGINE_U2D_SPRITEATLAS_CANBINDTO_OFFSET UNITYSDK_OFFSET(0x1B2E30E0)
#define UNITYENGINE_U2D_SPRITEATLAS_GETSPRITESSCRIPTING_OFFSET UNITYSDK_OFFSET(0x1B2E3110)
#define UNITYENGINE_U2D_SPRITEATLAS_GETSPRITESWITHNAMESCRIPTING_OFFSET UNITYSDK_OFFSET(0x1B2E3130)
#define UNITYENGINE_U2D_SPRITEATLAS_GETSPRITES_1_OFFSET UNITYSDK_OFFSET(0x1B2E3120)
#define UNITYENGINE_U2D_SPRITEATLAS_GETSPRITES_OFFSET UNITYSDK_OFFSET(0x1B2E3100)
#define UNITYENGINE_U2D_SPRITEATLAS_GETSPRITE_OFFSET UNITYSDK_OFFSET(0x1B2E30F0)
#define UNITYENGINE_U2D_SPRITEATLAS_GET_ISVARIANT_OFFSET UNITYSDK_OFFSET(0x1B2E30B0)
#define UNITYENGINE_U2D_SPRITEATLAS_GET_SPRITECOUNT_OFFSET UNITYSDK_OFFSET(0x1B2E30D0)
#define UNITYENGINE_U2D_SPRITEATLAS_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1B2E30C0)
#define UNITYENGINE_U2D_SPRITEATLAS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2E3140)

namespace UnityEngine::U2D
{
	inline static constexpr unsigned int SpriteAtlas_TypeDefinitionIndex = 4406;

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

		::System::Boolean CanBindTo(::UnityEngine::Sprite* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLAS_CANBINDTO_OFFSET))(this, a1);
		}

		::UnityEngine::Sprite* GetSprite(::System::String* a1)
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLAS_GETSPRITE_OFFSET))(this, a1);
		}

		::System::Int32 GetSprites(::Il2CppArray<::UnityEngine::Sprite*>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::Sprite*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLAS_GETSPRITES_OFFSET))(this, a1);
		}

		::System::Int32 GetSprites_1(::Il2CppArray<::UnityEngine::Sprite*>* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::Sprite*>*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLAS_GETSPRITES_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetSpritesScripting(::Il2CppArray<::UnityEngine::Sprite*>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::Sprite*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLAS_GETSPRITESSCRIPTING_OFFSET))(this, a1);
		}

		::System::Int32 GetSpritesWithNameScripting(::Il2CppArray<::UnityEngine::Sprite*>* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::Sprite*>*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLAS_GETSPRITESWITHNAMESCRIPTING_OFFSET))(this, a1, a2);
		}
	};
}
