#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int ClassInterfaceType_TypeDefinitionIndex = 1401;

	enum class ClassInterfaceType : ::System::Int32
	{
		None = 0,
		AutoDispatch = 1,
		AutoDual = 2,
	};
}
