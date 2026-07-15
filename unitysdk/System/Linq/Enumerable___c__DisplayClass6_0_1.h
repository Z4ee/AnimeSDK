#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

namespace System::Linq
{
	inline static constexpr unsigned int Enumerable___c__DisplayClass6_0_1_TypeDefinitionIndex = 3135;

	template <typename TSource>
	class Enumerable___c__DisplayClass6_0_1 : public ::System::Object
	{
	public:
		::System::Func_2<TSource, ::System::Boolean>* predicate1; // 0x0
		::System::Func_2<TSource, ::System::Boolean>* predicate2; // 0x0
	};
}
