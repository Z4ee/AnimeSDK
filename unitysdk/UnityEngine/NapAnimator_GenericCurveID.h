#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine
{
	inline static constexpr unsigned int NapAnimator_GenericCurveID_TypeDefinitionIndex = 6656;

	struct alignas(4) NapAnimator_GenericCurveID
	{
		::System::UInt32 pathHash; // 0x10
		::System::UInt32 attributeHash; // 0x14
	};
}
