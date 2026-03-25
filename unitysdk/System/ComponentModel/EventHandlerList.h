#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Delegate; }
namespace System::ComponentModel { class Component; }
namespace System::ComponentModel { class EventHandlerList_ListEntry; }

#define SYSTEM_COMPONENTMODEL_EVENTHANDLERLIST_FIND_OFFSET UNITYSDK_OFFSET(0x1868A510)
#define SYSTEM_COMPONENTMODEL_EVENTHANDLERLIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1868A4B0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int EventHandlerList_TypeDefinitionIndex = 2582;

	class EventHandlerList : public ::System::Object
	{
	public:
		::System::ComponentModel::EventHandlerList_ListEntry* head; // 0x10
		::System::ComponentModel::Component* parent; // 0x18

		::System::Delegate* get_Item(::System::Object* key)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTHANDLERLIST_GET_ITEM_OFFSET))(this, key);
		}

		::System::ComponentModel::EventHandlerList_ListEntry* Find(::System::Object* key)
		{
			return ((::System::ComponentModel::EventHandlerList_ListEntry*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTHANDLERLIST_FIND_OFFSET))(this, key);
		}
	};
}
