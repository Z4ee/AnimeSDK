#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int TransformAnimationType_TypeDefinitionIndex = 45360;

enum class TransformAnimationType : ::System::Int32
{
	Position = 0,
	Rotation = 1,
	Scale = 2,
	TriggerWave = 3,
	TriggerEffect = 4,
	TriggerAudio = 5,
};
