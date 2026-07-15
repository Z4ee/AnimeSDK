#pragma once
#include "unitysdk/unitysdk.h"

namespace XInputDotNetPure
{
	inline static constexpr unsigned int GamePadState_ButtonsConstants_TypeDefinitionIndex = 38633;

	enum class GamePadState_ButtonsConstants : ::System::Int32
	{
		DPadUp = 1,
		DPadDown = 2,
		DPadLeft = 4,
		DPadRight = 8,
		Start = 16,
		Back = 32,
		LeftThumb = 64,
		RightThumb = 128,
		LeftShoulder = 256,
		RightShoulder = 512,
		A = 4096,
		B = 8192,
		X = 16384,
		Y = 32768,
	};
}
