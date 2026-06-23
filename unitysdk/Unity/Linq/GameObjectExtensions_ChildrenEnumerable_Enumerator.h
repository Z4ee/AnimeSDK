#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define UNITY_LINQ_GAMEOBJECTEXTENSIONS_CHILDRENENUMERABLE_ENUMERATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define UNITY_LINQ_GAMEOBJECTEXTENSIONS_CHILDRENENUMERABLE_ENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2AB510)
#define UNITY_LINQ_GAMEOBJECTEXTENSIONS_CHILDRENENUMERABLE_ENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA8D730)
#define UNITY_LINQ_GAMEOBJECTEXTENSIONS_CHILDRENENUMERABLE_ENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xA8D7B0)
#define UNITY_LINQ_GAMEOBJECTEXTENSIONS_CHILDRENENUMERABLE_ENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2AB510)
#define UNITY_LINQ_GAMEOBJECTEXTENSIONS_CHILDRENENUMERABLE_ENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA8D6E0)

namespace Unity::Linq
{
	inline static constexpr unsigned int GameObjectExtensions_ChildrenEnumerable_Enumerator_TypeDefinitionIndex = 34649;

	struct alignas(8) GameObjectExtensions_ChildrenEnumerable_Enumerator
	{
		::System::Int32 childCount; // 0x10
		::UnityEngine::Transform* originTransform; // 0x18
		::System::Boolean canRun; // 0x20
		::System::Boolean withSelf; // 0x21
		::System::Int32 currentIndex; // 0x24
		::UnityEngine::GameObject* current; // 0x28

		::System::Void _ctor(::UnityEngine::Transform* originTransform, ::System::Boolean withSelf, ::System::Boolean canRun)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITY_LINQ_GAMEOBJECTEXTENSIONS_CHILDRENENUMERABLE_ENUMERATOR__CTOR_OFFSET))(this, originTransform, withSelf, canRun);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_LINQ_GAMEOBJECTEXTENSIONS_CHILDRENENUMERABLE_ENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_Current()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_LINQ_GAMEOBJECTEXTENSIONS_CHILDRENENUMERABLE_ENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_LINQ_GAMEOBJECTEXTENSIONS_CHILDRENENUMERABLE_ENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_LINQ_GAMEOBJECTEXTENSIONS_CHILDRENENUMERABLE_ENUMERATOR_DISPOSE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_LINQ_GAMEOBJECTEXTENSIONS_CHILDRENENUMERABLE_ENUMERATOR_RESET_OFFSET))(this);
		}
	};
}
