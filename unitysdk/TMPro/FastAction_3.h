#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }

namespace TMPro
{
	inline static constexpr unsigned int FastAction_3_TypeDefinitionIndex = 41732;

	template <typename A, typename B, typename C>
	class FastAction_3 : public ::System::Object
	{
	public:
		::System::Collections::Generic::LinkedList_1<::System::Action_3<A, B, C>*>* delegates; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Action_3<A, B, C>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_3<A, B, C>*>*>* lookup; // 0x0
	};
}
