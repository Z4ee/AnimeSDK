#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/RBTree_1_Node.h"
#include "unitysdk/System/Object.h"

namespace System::Data { template <typename T> class RBTree_1; }

namespace System::Data
{
	inline static constexpr unsigned int RBTree_1_TreePage_TypeDefinitionIndex = 37051;

	template <typename K>
	class RBTree_1_TreePage : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Data::RBTree_1_Node<K>>* _slots; // 0x0
		::Il2CppArray<::System::Int32>* _slotMap; // 0x0
		::System::Int32 _inUseCount; // 0x0
		::System::Int32 _pageId; // 0x0
		::System::Int32 _nextFreeSlotLine; // 0x0
	};
}
