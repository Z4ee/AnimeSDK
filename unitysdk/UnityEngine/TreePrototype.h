#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define UNITYENGINE_TREEPROTOTYPE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EFC66E0)
#define UNITYENGINE_TREEPROTOTYPE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EFC6610)
#define UNITYENGINE_TREEPROTOTYPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EFC6780)
#define UNITYENGINE_TREEPROTOTYPE_GET_BENDFACTOR_OFFSET UNITYSDK_OFFSET(0x1EFC65E0)
#define UNITYENGINE_TREEPROTOTYPE_GET_PREFAB_OFFSET UNITYSDK_OFFSET(0x1EFC65C0)
#define UNITYENGINE_TREEPROTOTYPE_SET_BENDFACTOR_OFFSET UNITYSDK_OFFSET(0x1EFC65F0)
#define UNITYENGINE_TREEPROTOTYPE_SET_PREFAB_OFFSET UNITYSDK_OFFSET(0x1EFC65D0)
#define UNITYENGINE_TREEPROTOTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFC6600)

namespace UnityEngine
{
	inline static constexpr unsigned int TreePrototype_TypeDefinitionIndex = 5322;

	class TreePrototype : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* m_Prefab; // 0x10
		::System::Single m_BendFactor; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TREEPROTOTYPE__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_prefab()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TREEPROTOTYPE_GET_PREFAB_OFFSET))(this);
		}

		::System::Void set_prefab(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TREEPROTOTYPE_SET_PREFAB_OFFSET))(this, a1);
		}

		::System::Single get_bendFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TREEPROTOTYPE_GET_BENDFACTOR_OFFSET))(this);
		}

		::System::Void set_bendFactor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TREEPROTOTYPE_SET_BENDFACTOR_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TREEPROTOTYPE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TREEPROTOTYPE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::UnityEngine::TreePrototype* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::TreePrototype*))((::PBYTE)hIl2Cpp + UNITYENGINE_TREEPROTOTYPE_EQUALS_1_OFFSET))(this, a1);
		}
	};
}
