#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RijndaelManagedTransformMode_TypeDefinitionIndex = 1036;

	enum class RijndaelManagedTransformMode : ::System::Int32
	{
		Encrypt = 0,
		Decrypt = 1,
	};
}
