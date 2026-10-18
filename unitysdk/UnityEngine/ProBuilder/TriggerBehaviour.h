#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ProBuilder/EntityBehaviour.h"
#include "unitysdk/UnityEngine/SceneManagement/LoadSceneMode.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"

#define UNITYENGINE_PROBUILDER_TRIGGERBEHAVIOUR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1F28E930)
#define UNITYENGINE_PROBUILDER_TRIGGERBEHAVIOUR_ONENTERPLAYMODE_OFFSET UNITYSDK_OFFSET(0x1F28EB40)
#define UNITYENGINE_PROBUILDER_TRIGGERBEHAVIOUR_ONSCENELOADED_OFFSET UNITYSDK_OFFSET(0x1F28EBD0)
#define UNITYENGINE_PROBUILDER_TRIGGERBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F28EC60)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int TriggerBehaviour_TypeDefinitionIndex = 44444;

	class TriggerBehaviour : public ::UnityEngine::ProBuilder::EntityBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRIGGERBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRIGGERBEHAVIOUR_INITIALIZE_OFFSET))(this);
		}

		::System::Void OnEnterPlayMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRIGGERBEHAVIOUR_ONENTERPLAYMODE_OFFSET))(this);
		}

		::System::Void OnSceneLoaded(::UnityEngine::SceneManagement::Scene a1, ::UnityEngine::SceneManagement::LoadSceneMode a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRIGGERBEHAVIOUR_ONSCENELOADED_OFFSET))(this, a1, a2);
		}
	};
}
