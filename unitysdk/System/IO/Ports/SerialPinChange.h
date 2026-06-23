#pragma once
#include "unitysdk/unitysdk.h"

namespace System::IO::Ports
{
	inline static constexpr unsigned int SerialPinChange_TypeDefinitionIndex = 4160;

	enum class SerialPinChange : ::System::Int32
	{
		Break = 64,
		CDChanged = 32,
		CtsChanged = 8,
		DsrChanged = 16,
		Ring = 256,
	};
}
