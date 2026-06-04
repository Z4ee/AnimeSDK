#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/SceneManagement/LoadSceneMode.h"
#include "unitysdk/UnityEngine/SceneManagement/LocalPhysicsMode.h"

#define UNITYENGINE_SCENEMANAGEMENT_LOADSCENEPARAMETERS__CTOR_OFFSET UNITYSDK_OFFSET(0x388D190)

namespace UnityEngine::SceneManagement
{
	inline static constexpr unsigned int LoadSceneParameters_TypeDefinitionIndex = 4494;

	struct alignas(4) LoadSceneParameters
	{
		::UnityEngine::SceneManagement::LoadSceneMode m_LoadSceneMode; // 0x10
		::UnityEngine::SceneManagement::LocalPhysicsMode m_LocalPhysicsMode; // 0x14

		::System::Void _ctor(::UnityEngine::SceneManagement::LoadSceneMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SceneManagement::LoadSceneMode))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_LOADSCENEPARAMETERS__CTOR_OFFSET))(this, a1);
		}
	};
}
