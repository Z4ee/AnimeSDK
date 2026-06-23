#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int SuffixOrigin_TypeDefinitionIndex = 3739;

	enum class SuffixOrigin : ::System::Int32
	{
		Other = 0,
		Manual = 1,
		WellKnown = 2,
		OriginDhcp = 3,
		LinkLayerAddress = 4,
		Random = 5,
	};
}
