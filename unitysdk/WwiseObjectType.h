#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int WwiseObjectType_TypeDefinitionIndex = 42084;

enum class WwiseObjectType : ::System::Int32
{
	None = 0,
	AuxBus = 1,
	Bus = 2,
	Event = 3,
	Folder = 4,
	PhysicalFolder = 5,
	Project = 6,
	Soundbank = 7,
	State = 8,
	StateGroup = 9,
	Switch = 10,
	SwitchGroup = 11,
	WorkUnit = 12,
	GameParameter = 13,
	Trigger = 14,
	AcousticTexture = 15,
};
