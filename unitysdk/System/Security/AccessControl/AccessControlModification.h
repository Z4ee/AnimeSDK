#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int AccessControlModification_TypeDefinitionIndex = 961;

	enum class AccessControlModification : ::System::Int32
	{
		Add = 0,
		Set = 1,
		Reset = 2,
		Remove = 3,
		RemoveAll = 4,
		RemoveSpecific = 5,
	};
}
