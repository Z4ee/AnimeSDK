#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Specialized/NotifyCollectionChangedAction.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class Object; }
namespace System::Collections { class IList; }

#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x1867DE10)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_GET_NEWITEMS_OFFSET UNITYSDK_OFFSET(0x1867DE20)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_GET_OLDITEMS_OFFSET UNITYSDK_OFFSET(0x1867DE30)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_INITIALIZEADDORREMOVE_OFFSET UNITYSDK_OFFSET(0x1867CB40)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_INITIALIZEADD_OFFSET UNITYSDK_OFFSET(0x1867C830)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_INITIALIZEMOVEORREPLACE_OFFSET UNITYSDK_OFFSET(0x1867D6E0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_INITIALIZEREMOVE_OFFSET UNITYSDK_OFFSET(0x1867DD90)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1867C8B0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1867CC30)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1867CF00)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1867D130)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1867D3E0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1867D7D0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_7_OFFSET UNITYSDK_OFFSET(0x1867DAD0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1867C720)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int NotifyCollectionChangedEventArgs_TypeDefinitionIndex = 2989;

	class NotifyCollectionChangedEventArgs : public ::System::EventArgs
	{
	public:
		::System::Collections::IList* _newItems; // 0x10
		::System::Collections::IList* _oldItems; // 0x18
		::System::Int32 _oldStartingIndex; // 0x20
		::System::Collections::Specialized::NotifyCollectionChangedAction _action; // 0x24
		::System::Int32 _newStartingIndex; // 0x28

		::System::Void _ctor(::System::Collections::Specialized::NotifyCollectionChangedAction action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedAction))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_OFFSET))(this, action);
		}

		::System::Void _ctor_1(::System::Collections::Specialized::NotifyCollectionChangedAction action, ::System::Object* changedItem)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedAction, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_1_OFFSET))(this, action, changedItem);
		}

		::System::Void _ctor_2(::System::Collections::Specialized::NotifyCollectionChangedAction action, ::System::Object* changedItem, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedAction, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_2_OFFSET))(this, action, changedItem, index);
		}

		::System::Void _ctor_3(::System::Collections::Specialized::NotifyCollectionChangedAction action, ::System::Collections::IList* changedItems)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedAction, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_3_OFFSET))(this, action, changedItems);
		}

		::System::Void _ctor_4(::System::Collections::Specialized::NotifyCollectionChangedAction action, ::System::Collections::IList* changedItems, ::System::Int32 startingIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedAction, ::System::Collections::IList*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_4_OFFSET))(this, action, changedItems, startingIndex);
		}

		::System::Void _ctor_5(::System::Collections::Specialized::NotifyCollectionChangedAction action, ::System::Object* newItem, ::System::Object* oldItem)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedAction, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_5_OFFSET))(this, action, newItem, oldItem);
		}

		::System::Void _ctor_6(::System::Collections::Specialized::NotifyCollectionChangedAction action, ::System::Object* newItem, ::System::Object* oldItem, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedAction, ::System::Object*, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_6_OFFSET))(this, action, newItem, oldItem, index);
		}

		::System::Void _ctor_7(::System::Collections::Specialized::NotifyCollectionChangedAction action, ::System::Object* changedItem, ::System::Int32 index, ::System::Int32 oldIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedAction, ::System::Object*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_7_OFFSET))(this, action, changedItem, index, oldIndex);
		}

		::System::Void InitializeAddOrRemove(::System::Collections::Specialized::NotifyCollectionChangedAction action, ::System::Collections::IList* changedItems, ::System::Int32 startingIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedAction, ::System::Collections::IList*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_INITIALIZEADDORREMOVE_OFFSET))(this, action, changedItems, startingIndex);
		}

		::System::Void InitializeAdd(::System::Collections::Specialized::NotifyCollectionChangedAction action, ::System::Collections::IList* newItems, ::System::Int32 newStartingIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedAction, ::System::Collections::IList*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_INITIALIZEADD_OFFSET))(this, action, newItems, newStartingIndex);
		}

		::System::Void InitializeRemove(::System::Collections::Specialized::NotifyCollectionChangedAction action, ::System::Collections::IList* oldItems, ::System::Int32 oldStartingIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedAction, ::System::Collections::IList*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_INITIALIZEREMOVE_OFFSET))(this, action, oldItems, oldStartingIndex);
		}

		::System::Void InitializeMoveOrReplace(::System::Collections::Specialized::NotifyCollectionChangedAction action, ::System::Collections::IList* newItems, ::System::Collections::IList* oldItems, ::System::Int32 startingIndex, ::System::Int32 oldStartingIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedAction, ::System::Collections::IList*, ::System::Collections::IList*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_INITIALIZEMOVEORREPLACE_OFFSET))(this, action, newItems, oldItems, startingIndex, oldStartingIndex);
		}

		::System::Collections::Specialized::NotifyCollectionChangedAction get_Action()
		{
			return ((::System::Collections::Specialized::NotifyCollectionChangedAction(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_GET_ACTION_OFFSET))(this);
		}

		::System::Collections::IList* get_NewItems()
		{
			return ((::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_GET_NEWITEMS_OFFSET))(this);
		}

		::System::Collections::IList* get_OldItems()
		{
			return ((::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_GET_OLDITEMS_OFFSET))(this);
		}
	};
}
