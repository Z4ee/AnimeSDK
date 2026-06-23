#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_RENDERING_EXTENSIONS_GAMEOBJECTPATHFINDER_FINDGAMEOBJECTBYPATH_OFFSET UNITYSDK_OFFSET(0x1B177CD0)
#define UNITYENGINE_RENDERING_EXTENSIONS_GAMEOBJECTPATHFINDER_FINDINCHILDREN_OFFSET UNITYSDK_OFFSET(0x1B178590)
#define UNITYENGINE_RENDERING_EXTENSIONS_GAMEOBJECTPATHFINDER_FINDINROOTS_OFFSET UNITYSDK_OFFSET(0x1B178490)
#define UNITYENGINE_RENDERING_EXTENSIONS_GAMEOBJECTPATHFINDER_FINDROOTGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B1778B0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int Extensions_GameObjectPathFinder_TypeDefinitionIndex = 26292;

	class Extensions_GameObjectPathFinder : public ::System::Object
	{
	public:
		static ::UnityEngine::GameObject* FindRootGameObject(::System::String* name)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_EXTENSIONS_GAMEOBJECTPATHFINDER_FINDROOTGAMEOBJECT_OFFSET))(name);
		}

		static ::UnityEngine::GameObject* FindGameObjectByPath(::System::String* path)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_EXTENSIONS_GAMEOBJECTPATHFINDER_FINDGAMEOBJECTBYPATH_OFFSET))(path);
		}

		static ::UnityEngine::GameObject* FindInRoots(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* roots, ::System::String* name)
		{
			return ((::UnityEngine::GameObject*(*)(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_EXTENSIONS_GAMEOBJECTPATHFINDER_FINDINROOTS_OFFSET))(roots, name);
		}

		static ::UnityEngine::GameObject* FindInChildren(::UnityEngine::Transform* parent, ::System::String* name)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_EXTENSIONS_GAMEOBJECTPATHFINDER_FINDINCHILDREN_OFFSET))(parent, name);
		}
	};
}
