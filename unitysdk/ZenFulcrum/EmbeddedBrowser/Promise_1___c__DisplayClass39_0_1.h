#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace ZenFulcrum::EmbeddedBrowser { template <typename T> class IPromise_1; }

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Promise_1___c__DisplayClass39_0_1_TypeDefinitionIndex = 37370;

	template <typename PromisedT, typename ConvertedT>
	class Promise_1___c__DisplayClass39_0_1 : public ::System::Object
	{
	public:
		::System::Func_2<PromisedT, ConvertedT>* transform; // 0x0
	};
}
