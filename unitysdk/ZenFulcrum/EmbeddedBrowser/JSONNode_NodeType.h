#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int JSONNode_NodeType_TypeDefinitionIndex = 37353;

	enum class JSONNode_NodeType : ::System::Int32
	{
		Invalid = 0,
		String = 1,
		Number = 2,
		Object = 3,
		Array = 4,
		Bool = 5,
		Null = 6,
	};
}
