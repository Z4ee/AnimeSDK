#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Data { template <typename T> class RBTree_1; }

namespace System::Data
{
	inline static constexpr unsigned int RBTree_1_RBTreeEnumerator_TypeDefinitionIndex = 37052;

	template <typename K>
	struct RBTree_1_RBTreeEnumerator
	{
		::System::Data::RBTree_1<K>* _tree; // 0x0
		::System::Int32 _version; // 0x0
		::System::Int32 _index; // 0x0
		::System::Int32 _mainTreeNodeId; // 0x0
		K _current; // 0x0
	};
}
