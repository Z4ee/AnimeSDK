#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem::XR
{
	inline static constexpr unsigned int TrackedPoseDriver_UpdateType_TypeDefinitionIndex = 32339;

	enum class TrackedPoseDriver_UpdateType : ::System::Int32
	{
		UpdateAndBeforeRender = 0,
		Update = 1,
		BeforeRender = 2,
	};
}
