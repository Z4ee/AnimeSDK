#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int ZFDefines_ReportEventType_TypeDefinitionIndex = 37420;

	enum class ZFDefines_ReportEventType : ::System::Int32
	{
		Unknown = 0,
		Mouse = 1,
		Key = 2,
		Frame = 4,
		All = 7,
	};
}
