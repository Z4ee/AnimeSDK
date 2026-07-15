#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace ZenFulcrum::EmbeddedBrowser { class IRejectable; }

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Promise_ResolveHandler_TypeDefinitionIndex = 37390;

	struct alignas(8) Promise_ResolveHandler
	{
		::System::Action* callback; // 0x10
		::ZenFulcrum::EmbeddedBrowser::IRejectable* rejectable; // 0x18
	};
}
