#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Specialized/NotifyCollectionChangedAction.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class Object; }
namespace System::Collections { class IList; }

#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x1BEB7410)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_GET_NEWITEMS_OFFSET UNITYSDK_OFFSET(0x1BEB7420)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_GET_NEWSTARTINGINDEX_OFFSET UNITYSDK_OFFSET(0x1BEB7440)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_GET_OLDITEMS_OFFSET UNITYSDK_OFFSET(0x1BEB7430)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_GET_OLDSTARTINGINDEX_OFFSET UNITYSDK_OFFSET(0x1BEB7450)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_INITIALIZEADDORREMOVE_OFFSET UNITYSDK_OFFSET(0x1BEB5E60)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_INITIALIZEADD_OFFSET UNITYSDK_OFFSET(0x1BEB5BE0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_INITIALIZEMOVEORREPLACE_OFFSET UNITYSDK_OFFSET(0x1BEB67A0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_INITIALIZEREMOVE_OFFSET UNITYSDK_OFFSET(0x1BEB7370)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_10_OFFSET UNITYSDK_OFFSET(0x1BEB70B0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_11_OFFSET UNITYSDK_OFFSET(0x1BEB7220)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BEB5C80)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1BEB5FC0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1BEB61E0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1BEB6350)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1BEB6550)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1BEB6910)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_7_OFFSET UNITYSDK_OFFSET(0x1BEB6B60)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_8_OFFSET UNITYSDK_OFFSET(0x1BEB6D00)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_9_OFFSET UNITYSDK_OFFSET(0x1BEB6EA0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEB5AA0)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int NotifyCollectionChangedEventArgs_TypeDefinitionIndex = 3925;

	class NotifyCollectionChangedEventArgs : public ::System::EventArgs
	{
	public:
		::System::Collections::IList* _oldItems; // 0x10
		::System::Collections::IList* _newItems; // 0x18
		::System::Collections::Specialized::NotifyCollectionChangedAction _action; // 0x20
		::System::Int32 _oldStartingIndex; // 0x24
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

		::System::Void _ctor_7(::System::Collections::Specialized::NotifyCollectionChangedAction action, ::System::Collections::IList* newItems, ::System::Collections::IList* oldItems)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedAction, ::System::Collections::IList*, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_7_OFFSET))(this, action, newItems, oldItems);
		}

		::System::Void _ctor_8(::System::Collections::Specialized::NotifyCollectionChangedAction action, ::System::Collections::IList* newItems, ::System::Collections::IList* oldItems, ::System::Int32 startingIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedAction, ::System::Collections::IList*, ::System::Collections::IList*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_8_OFFSET))(this, action, newItems, oldItems, startingIndex);
		}

		::System::Void _ctor_9(::System::Collections::Specialized::NotifyCollectionChangedAction action, ::System::Object* changedItem, ::System::Int32 index, ::System::Int32 oldIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedAction, ::System::Object*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_9_OFFSET))(this, action, changedItem, index, oldIndex);
		}

		::System::Void _ctor_10(::System::Collections::Specialized::NotifyCollectionChangedAction action, ::System::Collections::IList* changedItems, ::System::Int32 index, ::System::Int32 oldIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedAction, ::System::Collections::IList*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_10_OFFSET))(this, action, changedItems, index, oldIndex);
		}

		::System::Void _ctor_11(::System::Collections::Specialized::NotifyCollectionChangedAction action, ::System::Collections::IList* newItems, ::System::Collections::IList* oldItems, ::System::Int32 newIndex, ::System::Int32 oldIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedAction, ::System::Collections::IList*, ::System::Collections::IList*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_11_OFFSET))(this, action, newItems, oldItems, newIndex, oldIndex);
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

		::System::Int32 get_NewStartingIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_GET_NEWSTARTINGINDEX_OFFSET))(this);
		}

		::System::Int32 get_OldStartingIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_GET_OLDSTARTINGINDEX_OFFSET))(this);
		}
	};
}
