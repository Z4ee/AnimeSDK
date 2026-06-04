#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::U2D { class SpriteAtlas; }

#define UNITYENGINE_U2D_SPRITEATLASMANAGER_ADD_ATLASREGISTERED_OFFSET UNITYSDK_OFFSET(0x1B2E3200)
#define UNITYENGINE_U2D_SPRITEATLASMANAGER_POSTREGISTEREDATLAS_OFFSET UNITYSDK_OFFSET(0x1B2E3360)
#define UNITYENGINE_U2D_SPRITEATLASMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x1B2E3390)
#define UNITYENGINE_U2D_SPRITEATLASMANAGER_REMOVE_ATLASREGISTERED_OFFSET UNITYSDK_OFFSET(0x1B2E32B0)
#define UNITYENGINE_U2D_SPRITEATLASMANAGER_REQUESTATLAS_OFFSET UNITYSDK_OFFSET(0x1B2E3150)

namespace UnityEngine::U2D
{
	inline static constexpr unsigned int SpriteAtlasManager_TypeDefinitionIndex = 4405;

	class SpriteAtlasManager : public ::System::Object
	{
	public:
		static ::System::Action_2<::System::String*, ::System::Action_1<::UnityEngine::U2D::SpriteAtlas*>*>** StaticGet_atlasRequested()
		{
			return (::System::Action_2<::System::String*, ::System::Action_1<::UnityEngine::U2D::SpriteAtlas*>*>**)Il2CppClass::FromTypeDefinitionIndex(SpriteAtlasManager_TypeDefinitionIndex)->GetStaticField(0x35C40);
		}
		static ::System::Action_1<::UnityEngine::U2D::SpriteAtlas*>** StaticGet_atlasRegistered()
		{
			return (::System::Action_1<::UnityEngine::U2D::SpriteAtlas*>**)Il2CppClass::FromTypeDefinitionIndex(SpriteAtlasManager_TypeDefinitionIndex)->GetStaticField(0x35C48);
		}

		static ::System::Boolean RequestAtlas(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLASMANAGER_REQUESTATLAS_OFFSET))(a1);
		}

		static ::System::Void add_atlasRegistered(::System::Action_1<::UnityEngine::U2D::SpriteAtlas*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::U2D::SpriteAtlas*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLASMANAGER_ADD_ATLASREGISTERED_OFFSET))(a1);
		}

		static ::System::Void remove_atlasRegistered(::System::Action_1<::UnityEngine::U2D::SpriteAtlas*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::U2D::SpriteAtlas*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLASMANAGER_REMOVE_ATLASREGISTERED_OFFSET))(a1);
		}

		static ::System::Void PostRegisteredAtlas(::UnityEngine::U2D::SpriteAtlas* a1)
		{
			return ((::System::Void(*)(::UnityEngine::U2D::SpriteAtlas*))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLASMANAGER_POSTREGISTEREDATLAS_OFFSET))(a1);
		}

		static ::System::Void Register(::UnityEngine::U2D::SpriteAtlas* a1)
		{
			return ((::System::Void(*)(::UnityEngine::U2D::SpriteAtlas*))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLASMANAGER_REGISTER_OFFSET))(a1);
		}
	};
}
