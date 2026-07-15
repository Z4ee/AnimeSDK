#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int GCHandleType_TypeDefinitionIndex = 1429;

	enum class GCHandleType : ::System::Int32
	{
		Weak = 0,
		WeakTrackResurrection = 1,
		Normal = 2,
		Pinned = 3,
	};
}
