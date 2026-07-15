#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace ZenFulcrum::EmbeddedBrowser { class IRejectable; }

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int RejectHandler_TypeDefinitionIndex = 37388;

	struct alignas(8) RejectHandler
	{
		::System::Action_1<::System::Exception*>* callback; // 0x10
		::ZenFulcrum::EmbeddedBrowser::IRejectable* rejectable; // 0x18
	};
}
