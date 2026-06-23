#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class GameObject; }

#define UNITY_LINQ_GAMEOBJECTEXTENSIONS_CHILDRENENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA8D600)
#define UNITY_LINQ_GAMEOBJECTEXTENSIONS_CHILDRENENUMERABLE_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_GAMEOBJECT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA8D620)
#define UNITY_LINQ_GAMEOBJECTEXTENSIONS_CHILDRENENUMERABLE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA8D670)
#define UNITY_LINQ_GAMEOBJECTEXTENSIONS_CHILDRENENUMERABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x32D5A0)

namespace Unity::Linq
{
	inline static constexpr unsigned int GameObjectExtensions_ChildrenEnumerable_TypeDefinitionIndex = 34648;

	struct alignas(8) GameObjectExtensions_ChildrenEnumerable
	{
		::UnityEngine::GameObject* origin; // 0x10
		::System::Boolean withSelf; // 0x18

		::System::Void _ctor(::UnityEngine::GameObject* origin, ::System::Boolean withSelf)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITY_LINQ_GAMEOBJECTEXTENSIONS_CHILDRENENUMERABLE__CTOR_OFFSET))(this, origin, withSelf);
		}

		/*
		::Unity::Linq::GameObjectExtensions_ChildrenEnumerable_Enumerator GetEnumerator()
		{
			return ((::Unity::Linq::GameObjectExtensions_ChildrenEnumerable_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_LINQ_GAMEOBJECTEXTENSIONS_CHILDRENENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
		*/

		::System::Collections::Generic::IEnumerator_1<::UnityEngine::GameObject*>* System_Collections_Generic_IEnumerable_UnityEngine_GameObject__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_LINQ_GAMEOBJECTEXTENSIONS_CHILDRENENUMERABLE_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_GAMEOBJECT__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_LINQ_GAMEOBJECTEXTENSIONS_CHILDRENENUMERABLE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
