#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI
{
	inline static constexpr unsigned int InputField_CharacterValidation_TypeDefinitionIndex = 5903;

	enum class InputField_CharacterValidation : ::System::Int32
	{
		None = 0,
		Integer = 1,
		Decimal = 2,
		Alphanumeric = 3,
		Name = 4,
		EmailAddress = 5,
	};
}
