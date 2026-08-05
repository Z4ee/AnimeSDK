#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Delegate; }

#define SYSTEM_COMPONENTMODEL_EVENTHANDLERLIST_LISTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB76470)

namespace System::ComponentModel
{
	inline static constexpr unsigned int EventHandlerList_ListEntry_TypeDefinitionIndex = 2880;

	class EventHandlerList_ListEntry : public ::System::Object
	{
	public:
		::System::Object* key; // 0x10
		::System::Delegate* handler; // 0x18
		::System::ComponentModel::EventHandlerList_ListEntry* next; // 0x20

		::System::Void _ctor(::System::Object* key, ::System::Delegate* handler, ::System::ComponentModel::EventHandlerList_ListEntry* next)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Delegate*, ::System::ComponentModel::EventHandlerList_ListEntry*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTHANDLERLIST_LISTENTRY__CTOR_OFFSET))(this, key, handler, next);
		}
	};
}
