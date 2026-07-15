#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int LightEvent_TypeDefinitionIndex = 4689;

	enum class LightEvent : ::System::Int32
	{
		BeforeShadowMap = 0,
		AfterShadowMap = 1,
		BeforeScreenspaceMask = 2,
		AfterScreenspaceMask = 3,
		BeforeShadowMapPass = 4,
		AfterShadowMapPass = 5,
	};
}
