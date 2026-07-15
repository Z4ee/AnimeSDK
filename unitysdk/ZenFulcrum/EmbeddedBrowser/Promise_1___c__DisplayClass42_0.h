#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace ZenFulcrum::EmbeddedBrowser { class IPromise; }

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Promise_1___c__DisplayClass42_0_TypeDefinitionIndex = 37372;

	template <typename PromisedT>
	class Promise_1___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::System::Func_2<PromisedT, ::System::Collections::Generic::IEnumerable_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*>* chain; // 0x0
	};
}
