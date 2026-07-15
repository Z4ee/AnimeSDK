#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }

namespace TMPro
{
	inline static constexpr unsigned int FastAction_2_TypeDefinitionIndex = 41731;

	template <typename A, typename B>
	class FastAction_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::LinkedList_1<::System::Action_2<A, B>*>* delegates; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Action_2<A, B>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_2<A, B>*>*>* lookup; // 0x0
	};
}
