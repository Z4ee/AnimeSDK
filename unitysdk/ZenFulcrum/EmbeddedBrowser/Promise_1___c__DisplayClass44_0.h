#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace ZenFulcrum::EmbeddedBrowser { template <typename T> class IPromise_1; }
namespace ZenFulcrum::EmbeddedBrowser { template <typename T> class Promise_1; }

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Promise_1___c__DisplayClass44_0_TypeDefinitionIndex = 37373;

	template <typename PromisedT>
	class Promise_1___c__DisplayClass44_0 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Promise_1<::System::Collections::Generic::IEnumerable_1<PromisedT>*>* resultPromise; // 0x0
		::Il2CppArray<PromisedT>* results; // 0x0
		::System::Int32 remainingCount; // 0x0
		::System::Action_1<::System::Exception*>* __9__1; // 0x0
	};
}
