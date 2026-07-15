#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int TouchScreenKeyboardType_TypeDefinitionIndex = 4386;

	enum class TouchScreenKeyboardType : ::System::Int32
	{
		Default = 0,
		ASCIICapable = 1,
		NumbersAndPunctuation = 2,
		URL = 3,
		NumberPad = 4,
		PhonePad = 5,
		NamePhonePad = 6,
		EmailAddress = 7,
		NintendoNetworkAccount = 8,
		Social = 9,
		Search = 10,
		DecimalPad = 11,
	};
}
