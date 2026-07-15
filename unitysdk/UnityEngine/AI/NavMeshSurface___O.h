#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::AI { class NavMesh_OnNavMeshPreUpdate; }

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshSurface___O_TypeDefinitionIndex = 39198;

	class NavMeshSurface___O : public ::System::Object
	{
	public:
		static ::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate** StaticGet__0___UpdateActive()
		{
			return (::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate**)Il2CppClass::FromTypeDefinitionIndex(NavMeshSurface___O_TypeDefinitionIndex)->GetStaticField(0xD40);
		}
	};
}
