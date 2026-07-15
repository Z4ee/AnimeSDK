#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace ZenFulcrum::EmbeddedBrowser { template <typename T> class IPromise_1; }
namespace ZenFulcrum::EmbeddedBrowser { template <typename T> class Promise_1; }

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Promise___c__DisplayClass44_0_1_TypeDefinitionIndex = 37395;

	template <typename ConvertedT>
	class Promise___c__DisplayClass44_0_1 : public ::System::Object
	{
	public:
		::System::Func_1<::ZenFulcrum::EmbeddedBrowser::IPromise_1<ConvertedT>*>* onResolved; // 0x0
		::ZenFulcrum::EmbeddedBrowser::Promise_1<ConvertedT>* resultPromise; // 0x0
		::System::Action_1<::System::Exception*>* onRejected; // 0x0
		::System::Action_1<ConvertedT>* __9__2; // 0x0
		::System::Action_1<::System::Exception*>* __9__3; // 0x0
	};
}
