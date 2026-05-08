#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }

#define TMPRO_FASTACTION_ADD_OFFSET UNITYSDK_OFFSET(0x1C525670)
#define TMPRO_FASTACTION_CALL_OFFSET UNITYSDK_OFFSET(0x1C525890)
#define TMPRO_FASTACTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1C525780)
#define TMPRO_FASTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5258F0)

namespace TMPro
{
	inline static constexpr unsigned int FastAction_TypeDefinitionIndex = 37466;

	class FastAction : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Action*, ::System::Collections::Generic::LinkedListNode_1<::System::Action*>*>* lookup; // 0x10
		::System::Collections::Generic::LinkedList_1<::System::Action*>* delegates; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FASTACTION__CTOR_OFFSET))(this);
		}

		::System::Void Add(::System::Action* rhs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + TMPRO_FASTACTION_ADD_OFFSET))(this, rhs);
		}

		::System::Void Remove(::System::Action* rhs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + TMPRO_FASTACTION_REMOVE_OFFSET))(this, rhs);
		}

		::System::Void Call()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FASTACTION_CALL_OFFSET))(this);
		}
	};
}
