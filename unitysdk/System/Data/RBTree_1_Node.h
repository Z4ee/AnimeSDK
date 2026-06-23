#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/RBTree_1_NodeColor.h"
#include "unitysdk/System/ValueType.h"

namespace System::Data
{
	inline static constexpr unsigned int RBTree_1_Node_TypeDefinitionIndex = 38666;

	template <typename K>
	struct RBTree_1_Node
	{
		::System::Int32 _selfId; // 0x0
		::System::Int32 _leftId; // 0x0
		::System::Int32 _rightId; // 0x0
		::System::Int32 _parentId; // 0x0
		::System::Int32 _nextId; // 0x0
		::System::Int32 _subTreeSize; // 0x0
		K _keyOfNode; // 0x0
		::System::Data::RBTree_1_NodeColor<K> _nodeColor; // 0x0
	};
}
