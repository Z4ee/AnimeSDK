#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Specialized/NotifyCollectionChangedAction.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class Object; }
namespace System::Collections { class IList; }

#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x1AF21E40)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_GET_NEWITEMS_OFFSET UNITYSDK_OFFSET(0x1AF21E50)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_GET_OLDITEMS_OFFSET UNITYSDK_OFFSET(0x1AF21E60)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_INITIALIZEADDORREMOVE_OFFSET UNITYSDK_OFFSET(0x1AF20F40)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_INITIALIZEADD_OFFSET UNITYSDK_OFFSET(0x1AF20CC0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_INITIALIZEMOVEORREPLACE_OFFSET UNITYSDK_OFFSET(0x1AF218B0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_INITIALIZEREMOVE_OFFSET UNITYSDK_OFFSET(0x1AF21DE0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AF20D20)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1AF20FF0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1AF21220)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1AF213F0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1AF21650)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1AF21950)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_7_OFFSET UNITYSDK_OFFSET(0x1AF21BA0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF20BB0)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int NotifyCollectionChangedEventArgs_TypeDefinitionIndex = 2990;

	class NotifyCollectionChangedEventArgs : public ::System::EventArgs
	{
	public:
		::System::Collections::IList* _oldItems; // 0x10
		::System::Collections::IList* _newItems; // 0x18
		::System::Int32 _newStartingIndex; // 0x20
		::System::Collections::Specialized::NotifyCollectionChangedAction _action; // 0x24
		::System::Int32 _oldStartingIndex; // 0x28

		::System::Void _ctor(::System::Collections::Specialized::NotifyCollectionChangedAction a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedAction))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Collections::Specialized::NotifyCollectionChangedAction a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedAction, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::Collections::Specialized::NotifyCollectionChangedAction a1, ::System::Object* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedAction, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_3(::System::Collections::Specialized::NotifyCollectionChangedAction a1, ::System::Collections::IList* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedAction, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_3_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_4(::System::Collections::Specialized::NotifyCollectionChangedAction a1, ::System::Collections::IList* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedAction, ::System::Collections::IList*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_4_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_5(::System::Collections::Specialized::NotifyCollectionChangedAction a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedAction, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_5_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_6(::System::Collections::Specialized::NotifyCollectionChangedAction a1, ::System::Object* a2, ::System::Object* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedAction, ::System::Object*, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_6_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_7(::System::Collections::Specialized::NotifyCollectionChangedAction a1, ::System::Object* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedAction, ::System::Object*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS__CTOR_7_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void InitializeAddOrRemove(::System::Collections::Specialized::NotifyCollectionChangedAction a1, ::System::Collections::IList* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedAction, ::System::Collections::IList*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_INITIALIZEADDORREMOVE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void InitializeAdd(::System::Collections::Specialized::NotifyCollectionChangedAction a1, ::System::Collections::IList* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedAction, ::System::Collections::IList*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_INITIALIZEADD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void InitializeRemove(::System::Collections::Specialized::NotifyCollectionChangedAction a1, ::System::Collections::IList* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedAction, ::System::Collections::IList*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_INITIALIZEREMOVE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void InitializeMoveOrReplace(::System::Collections::Specialized::NotifyCollectionChangedAction a1, ::System::Collections::IList* a2, ::System::Collections::IList* a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedAction, ::System::Collections::IList*, ::System::Collections::IList*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_INITIALIZEMOVEORREPLACE_OFFSET))(this, a1, a2, a3, a4, a5);
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
