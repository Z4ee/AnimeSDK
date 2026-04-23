#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/SceneManagement/LoadSceneMode.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"

namespace UnityEngine { class Material; }

#define UNITYENGINE_PROBUILDER_ENTITYBEHAVIOUR_SETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1A1FBDA0)
#define UNITYENGINE_PROBUILDER_ENTITYBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1FC010)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int EntityBehaviour_TypeDefinitionIndex = 39912;

	class EntityBehaviour : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean manageVisibility; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_ENTITYBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void SetMaterial(::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_ENTITYBEHAVIOUR_SETMATERIAL_OFFSET))(this, material);
		}
	};
}
