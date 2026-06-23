#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::U2D { class SpriteAtlas; }

#define UNITYENGINE_U2D_SPRITEATLASMANAGER_ADD_ATLASREGISTERED_OFFSET UNITYSDK_OFFSET(0x1D1393D0)
#define UNITYENGINE_U2D_SPRITEATLASMANAGER_POSTREGISTEREDATLAS_OFFSET UNITYSDK_OFFSET(0x1D139590)
#define UNITYENGINE_U2D_SPRITEATLASMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x1D139620)
#define UNITYENGINE_U2D_SPRITEATLASMANAGER_REMOVE_ATLASREGISTERED_OFFSET UNITYSDK_OFFSET(0x1D1394B0)
#define UNITYENGINE_U2D_SPRITEATLASMANAGER_REQUESTATLAS_OFFSET UNITYSDK_OFFSET(0x1D1392C0)
#define UNITYENGINE_U2D_SPRITEATLASMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D139640)
#define UNITYENGINE_U2D_SPRITEATLASMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D139630)

namespace UnityEngine::U2D
{
	inline static constexpr unsigned int SpriteAtlasManager_TypeDefinitionIndex = 5429;

	class SpriteAtlasManager : public ::System::Object
	{
	public:
		static ::System::Action_1<::UnityEngine::U2D::SpriteAtlas*>** StaticGet_atlasRegistered()
		{
			return (::System::Action_1<::UnityEngine::U2D::SpriteAtlas*>**)Il2CppClass::FromTypeDefinitionIndex(SpriteAtlasManager_TypeDefinitionIndex)->GetStaticField(0x51A0);
		}
		static ::System::Action_2<::System::String*, ::System::Action_1<::UnityEngine::U2D::SpriteAtlas*>*>** StaticGet_atlasRequested()
		{
			return (::System::Action_2<::System::String*, ::System::Action_1<::UnityEngine::U2D::SpriteAtlas*>*>**)Il2CppClass::FromTypeDefinitionIndex(SpriteAtlasManager_TypeDefinitionIndex)->GetStaticField(0x51A8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLASMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLASMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Boolean RequestAtlas(::System::String* tag)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLASMANAGER_REQUESTATLAS_OFFSET))(tag);
		}

		static ::System::Void add_atlasRegistered(::System::Action_1<::UnityEngine::U2D::SpriteAtlas*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::U2D::SpriteAtlas*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLASMANAGER_ADD_ATLASREGISTERED_OFFSET))(value);
		}

		static ::System::Void remove_atlasRegistered(::System::Action_1<::UnityEngine::U2D::SpriteAtlas*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::U2D::SpriteAtlas*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLASMANAGER_REMOVE_ATLASREGISTERED_OFFSET))(value);
		}

		static ::System::Void PostRegisteredAtlas(::UnityEngine::U2D::SpriteAtlas* spriteAtlas)
		{
			return ((::System::Void(*)(::UnityEngine::U2D::SpriteAtlas*))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLASMANAGER_POSTREGISTEREDATLAS_OFFSET))(spriteAtlas);
		}

		static ::System::Void Register(::UnityEngine::U2D::SpriteAtlas* spriteAtlas)
		{
			return ((::System::Void(*)(::UnityEngine::U2D::SpriteAtlas*))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLASMANAGER_REGISTER_OFFSET))(spriteAtlas);
		}
	};
}
