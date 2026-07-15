#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZenFulcrum::EmbeddedBrowser { template <typename T> class Promise_1; }

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Promise_1_Enumerated_1_TypeDefinitionIndex = 37362;

	template <typename PromisedT, typename T>
	class Promise_1_Enumerated_1 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Promise_1<T>* promise; // 0x0
		::System::Boolean abortOnFail; // 0x0
	};
}
