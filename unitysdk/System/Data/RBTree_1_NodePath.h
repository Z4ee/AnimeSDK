#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Data
{
	inline static constexpr unsigned int RBTree_1_NodePath_TypeDefinitionIndex = 38667;

	template <typename K>
	struct RBTree_1_NodePath
	{
		::System::Int32 _nodeID; // 0x0
		::System::Int32 _mainTreeNodeID; // 0x0
	};
}
