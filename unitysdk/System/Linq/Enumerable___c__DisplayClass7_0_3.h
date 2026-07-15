#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

namespace System::Linq
{
	inline static constexpr unsigned int Enumerable___c__DisplayClass7_0_3_TypeDefinitionIndex = 3136;

	template <typename TSource, typename TMiddle, typename TResult>
	class Enumerable___c__DisplayClass7_0_3 : public ::System::Object
	{
	public:
		::System::Func_2<TMiddle, TResult>* selector2; // 0x0
		::System::Func_2<TSource, TMiddle>* selector1; // 0x0
	};
}
