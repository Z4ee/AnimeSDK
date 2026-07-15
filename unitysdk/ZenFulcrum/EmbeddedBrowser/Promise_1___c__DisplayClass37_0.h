#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace ZenFulcrum::EmbeddedBrowser { template <typename T> class Promise_1; }

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Promise_1___c__DisplayClass37_0_TypeDefinitionIndex = 37368;

	template <typename PromisedT>
	class Promise_1___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::System::Action_1<PromisedT>* onResolved; // 0x0
		::ZenFulcrum::EmbeddedBrowser::Promise_1<PromisedT>* resultPromise; // 0x0
		::System::Action_1<::System::Exception*>* onRejected; // 0x0
	};
}
