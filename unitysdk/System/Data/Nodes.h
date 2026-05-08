#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Data
{
	inline static constexpr unsigned int Nodes_TypeDefinitionIndex = 37018;

	enum class Nodes : ::System::Int32
	{
		Noop = 0,
		Unop = 1,
		UnopSpec = 2,
		Binop = 3,
		BinopSpec = 4,
		Zop = 5,
		Call = 6,
		Const = 7,
		Name = 8,
		Paren = 9,
		Conv = 10,
	};
}
