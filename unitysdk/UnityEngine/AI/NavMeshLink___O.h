#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::AI { class NavMesh_OnNavMeshPreUpdate; }

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshLink___O_TypeDefinitionIndex = 39193;

	class NavMeshLink___O : public ::System::Object
	{
	public:
		static ::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate** StaticGet__0___UpdateTrackedInstances()
		{
			return (::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate**)Il2CppClass::FromTypeDefinitionIndex(NavMeshLink___O_TypeDefinitionIndex)->GetStaticField(0xD00);
		}
	};
}
