#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/PromiseState.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/RejectHandler.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace ZenFulcrum::EmbeddedBrowser { class IPromise; }
namespace ZenFulcrum::EmbeddedBrowser { class IRejectable; }
namespace ZenFulcrum::EmbeddedBrowser { template <typename T> class IPromise_1; }

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Promise_1_TypeDefinitionIndex = 37361;

	template <typename PromisedT>
	class Promise_1 : public ::System::Object
	{
	public:
		::System::Exception* rejectionException; // 0x0
		PromisedT resolveValue; // 0x0
		::System::Collections::Generic::List_1<::ZenFulcrum::EmbeddedBrowser::RejectHandler>* rejectHandlers; // 0x0
		::System::Collections::Generic::List_1<::System::Action_1<PromisedT>*>* resolveCallbacks; // 0x0
		::System::Collections::Generic::List_1<::ZenFulcrum::EmbeddedBrowser::IRejectable*>* resolveRejectables; // 0x0
		::System::Int32 _Id_k__BackingField; // 0x0
		::System::String* _Name_k__BackingField; // 0x0
		::ZenFulcrum::EmbeddedBrowser::PromiseState _CurState_k__BackingField; // 0x0
	};
}
