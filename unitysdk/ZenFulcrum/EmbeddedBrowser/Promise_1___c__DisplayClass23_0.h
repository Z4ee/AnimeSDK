#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/RejectHandler.h"

namespace System { class Exception; }
namespace ZenFulcrum::EmbeddedBrowser { template <typename T> class Promise_1; }

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Promise_1___c__DisplayClass23_0_TypeDefinitionIndex = 37364;

	template <typename PromisedT>
	class Promise_1___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Promise_1<PromisedT>* __4__this; // 0x0
		::System::Exception* ex; // 0x0
	};
}
