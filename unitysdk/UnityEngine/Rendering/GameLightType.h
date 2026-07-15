#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int GameLightType_TypeDefinitionIndex = 4855;

	enum class GameLightType : ::System::Int32
	{
		SceneLight = 0,
		SceneShadowLight = 1,
		CharacterLight = 2,
		IndoorSceneShadowLight = 3,
		IndoorSceneLight = 4,
		IndoorCharacterLight = 5,
		EffectLight = 6,
		LocalLight = 7,
		CloudLight = 8,
		LocalLightRealTime = 9,
		Invalid = 100,
	};
}
