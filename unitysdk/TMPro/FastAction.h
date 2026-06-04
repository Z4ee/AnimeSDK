#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }

#define TMPRO_FASTACTION_ADD_OFFSET UNITYSDK_OFFSET(0x1B198060)
#define TMPRO_FASTACTION_CALL_OFFSET UNITYSDK_OFFSET(0x1B198260)
#define TMPRO_FASTACTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1B198160)
#define TMPRO_FASTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1982D0)

namespace TMPro
{
	inline static constexpr unsigned int FastAction_TypeDefinitionIndex = 40914;

	class FastAction : public ::System::Object
	{
	public:
		::System::Collections::Generic::LinkedList_1<::System::Action*>* delegates; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Action*, ::System::Collections::Generic::LinkedListNode_1<::System::Action*>*>* lookup; // 0x18

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
