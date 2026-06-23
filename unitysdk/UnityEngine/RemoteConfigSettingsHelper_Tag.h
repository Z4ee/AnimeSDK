#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int RemoteConfigSettingsHelper_Tag_TypeDefinitionIndex = 89802;

	enum class RemoteConfigSettingsHelper_Tag : ::System::Int32
	{
		kUnknown = 0,
		kIntVal = 1,
		kInt64Val = 2,
		kUInt64Val = 3,
		kDoubleVal = 4,
		kBoolVal = 5,
		kStringVal = 6,
		kArrayVal = 7,
		kMixedArrayVal = 8,
		kMapVal = 9,
		kMaxTags = 10,
	};
}
