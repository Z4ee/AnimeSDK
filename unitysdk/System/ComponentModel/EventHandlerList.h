#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Delegate; }
namespace System::ComponentModel { class Component; }
namespace System::ComponentModel { class EventHandlerList_ListEntry; }

#define SYSTEM_COMPONENTMODEL_EVENTHANDLERLIST_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x1DEB5BC0)
#define SYSTEM_COMPONENTMODEL_EVENTHANDLERLIST_ADDHANDLER_OFFSET UNITYSDK_OFFSET(0x1DEB5B20)
#define SYSTEM_COMPONENTMODEL_EVENTHANDLERLIST_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DEB5CC0)
#define SYSTEM_COMPONENTMODEL_EVENTHANDLERLIST_FIND_OFFSET UNITYSDK_OFFSET(0x1DEB5A60)
#define SYSTEM_COMPONENTMODEL_EVENTHANDLERLIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1DEB5A30)
#define SYSTEM_COMPONENTMODEL_EVENTHANDLERLIST_REMOVEHANDLER_OFFSET UNITYSDK_OFFSET(0x1DEB5CD0)
#define SYSTEM_COMPONENTMODEL_EVENTHANDLERLIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1DEB5A90)
#define SYSTEM_COMPONENTMODEL_EVENTHANDLERLIST__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEB5A20)
#define SYSTEM_COMPONENTMODEL_EVENTHANDLERLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB5A10)

namespace System::ComponentModel
{
	inline static constexpr unsigned int EventHandlerList_TypeDefinitionIndex = 2879;

	class EventHandlerList : public ::System::Object
	{
	public:
		::System::ComponentModel::EventHandlerList_ListEntry* head; // 0x10
		::System::ComponentModel::Component* parent; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTHANDLERLIST__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::ComponentModel::Component* parent)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::Component*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTHANDLERLIST__CTOR_1_OFFSET))(this, parent);
		}

		::System::Delegate* get_Item(::System::Object* key)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTHANDLERLIST_GET_ITEM_OFFSET))(this, key);
		}

		::System::Void set_Item(::System::Object* key, ::System::Delegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Delegate*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTHANDLERLIST_SET_ITEM_OFFSET))(this, key, value);
		}

		::System::Void AddHandler(::System::Object* key, ::System::Delegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Delegate*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTHANDLERLIST_ADDHANDLER_OFFSET))(this, key, value);
		}

		::System::Void AddHandlers(::System::ComponentModel::EventHandlerList* listToAddFrom)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::EventHandlerList*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTHANDLERLIST_ADDHANDLERS_OFFSET))(this, listToAddFrom);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTHANDLERLIST_DISPOSE_OFFSET))(this);
		}

		::System::ComponentModel::EventHandlerList_ListEntry* Find(::System::Object* key)
		{
			return ((::System::ComponentModel::EventHandlerList_ListEntry*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTHANDLERLIST_FIND_OFFSET))(this, key);
		}

		::System::Void RemoveHandler(::System::Object* key, ::System::Delegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Delegate*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTHANDLERLIST_REMOVEHANDLER_OFFSET))(this, key, value);
		}
	};
}
