#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }

#define TMPRO_FASTACTION_ADD_OFFSET UNITYSDK_OFFSET(0x17191200)
#define TMPRO_FASTACTION_CALL_OFFSET UNITYSDK_OFFSET(0x17191400)
#define TMPRO_FASTACTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x17191300)
#define TMPRO_FASTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17191470)

namespace TMPro
{
	inline static constexpr unsigned int FastAction_TypeDefinitionIndex = 41729;

	class FastAction : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Action*, ::System::Collections::Generic::LinkedListNode_1<::System::Action*>*>* lookup; // 0x10
		::System::Collections::Generic::LinkedList_1<::System::Action*>* delegates; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FASTACTION__CTOR_OFFSET))(this);
		}

		::System::Void Add(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + TMPRO_FASTACTION_ADD_OFFSET))(this, a1);
		}

		::System::Void Remove(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + TMPRO_FASTACTION_REMOVE_OFFSET))(this, a1);
		}

		::System::Void Call()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FASTACTION_CALL_OFFSET))(this);
		}
	};
}
