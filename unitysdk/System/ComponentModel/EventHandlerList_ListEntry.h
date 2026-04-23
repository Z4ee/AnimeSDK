#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Delegate; }

namespace System::ComponentModel
{
	inline static constexpr unsigned int EventHandlerList_ListEntry_TypeDefinitionIndex = 2584;

	class EventHandlerList_ListEntry : public ::System::Object
	{
	public:
		::System::Object* key; // 0x10
		::System::ComponentModel::EventHandlerList_ListEntry* next; // 0x18
		::System::Delegate* handler; // 0x20
	};
}
