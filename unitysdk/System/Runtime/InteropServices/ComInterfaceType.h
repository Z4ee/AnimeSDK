#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int ComInterfaceType_TypeDefinitionIndex = 1398;

	enum class ComInterfaceType : ::System::Int32
	{
		InterfaceIsDual = 0,
		InterfaceIsIUnknown = 1,
		InterfaceIsIDispatch = 2,
		InterfaceIsIInspectable = 3,
	};
}
