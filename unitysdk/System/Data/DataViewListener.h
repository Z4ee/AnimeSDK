#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/ListChangedType.h"
#include "unitysdk/System/Object.h"

namespace System { class WeakReference; }
namespace System::ComponentModel { class CollectionChangeEventArgs; }
namespace System::ComponentModel { class ListChangedEventArgs; }
namespace System::Data { class DataRow; }
namespace System::Data { class DataTable; }
namespace System::Data { class DataView; }
namespace System::Data { class Index; }

#define SYSTEM_DATA_DATAVIEWLISTENER_CHILDRELATIONCOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1BFDFF30)
#define SYSTEM_DATA_DATAVIEWLISTENER_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1BFDFFE0)
#define SYSTEM_DATA_DATAVIEWLISTENER_COLUMNCOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1BFE00B0)
#define SYSTEM_DATA_DATAVIEWLISTENER_INDEXLISTCHANGED_OFFSET UNITYSDK_OFFSET(0x1BFE0240)
#define SYSTEM_DATA_DATAVIEWLISTENER_MAINTAINDATAVIEW_OFFSET UNITYSDK_OFFSET(0x1BFE0180)
#define SYSTEM_DATA_DATAVIEWLISTENER_PARENTRELATIONCOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1BFE0000)
#define SYSTEM_DATA_DATAVIEWLISTENER_REGISTERLISTCHANGEDEVENT_OFFSET UNITYSDK_OFFSET(0x1BFE0F10)
#define SYSTEM_DATA_DATAVIEWLISTENER_REGISTERLISTENER_OFFSET UNITYSDK_OFFSET(0x1BFE0770)
#define SYSTEM_DATA_DATAVIEWLISTENER_REGISTERMETADATAEVENTS_OFFSET UNITYSDK_OFFSET(0x1BFE02F0)
#define SYSTEM_DATA_DATAVIEWLISTENER_UNREGISTERLISTCHANGEDEVENT_OFFSET UNITYSDK_OFFSET(0x1BFE1030)
#define SYSTEM_DATA_DATAVIEWLISTENER_UNREGISTERMETADATAEVENTS_1_OFFSET UNITYSDK_OFFSET(0x1BFE09A0)
#define SYSTEM_DATA_DATAVIEWLISTENER_UNREGISTERMETADATAEVENTS_OFFSET UNITYSDK_OFFSET(0x1BFE0990)
#define SYSTEM_DATA_DATAVIEWLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFDFEC0)

namespace System::Data
{
	inline static constexpr unsigned int DataViewListener_TypeDefinitionIndex = 37001;

	class DataViewListener : public ::System::Object
	{
	public:
		::System::WeakReference* _dvWeak; // 0x10
		::System::Data::Index* _index; // 0x18
		::System::Data::DataTable* _table; // 0x20
		::System::Int32 _objectID; // 0x28

		::System::Void _ctor(::System::Data::DataView* dv)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataView*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWLISTENER__CTOR_OFFSET))(this, dv);
		}

		::System::Void ChildRelationCollectionChanged(::System::Object* sender, ::System::ComponentModel::CollectionChangeEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::CollectionChangeEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWLISTENER_CHILDRELATIONCOLLECTIONCHANGED_OFFSET))(this, sender, e);
		}

		::System::Void ParentRelationCollectionChanged(::System::Object* sender, ::System::ComponentModel::CollectionChangeEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::CollectionChangeEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWLISTENER_PARENTRELATIONCOLLECTIONCHANGED_OFFSET))(this, sender, e);
		}

		::System::Void ColumnCollectionChanged(::System::Object* sender, ::System::ComponentModel::CollectionChangeEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::CollectionChangeEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWLISTENER_COLUMNCOLLECTIONCHANGED_OFFSET))(this, sender, e);
		}

		::System::Void MaintainDataView(::System::ComponentModel::ListChangedType changedType, ::System::Data::DataRow* row, ::System::Boolean trackAddRemove)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::ListChangedType, ::System::Data::DataRow*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWLISTENER_MAINTAINDATAVIEW_OFFSET))(this, changedType, row, trackAddRemove);
		}

		::System::Void IndexListChanged(::System::ComponentModel::ListChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::ListChangedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWLISTENER_INDEXLISTCHANGED_OFFSET))(this, e);
		}

		::System::Void RegisterMetaDataEvents(::System::Data::DataTable* table)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWLISTENER_REGISTERMETADATAEVENTS_OFFSET))(this, table);
		}

		::System::Void UnregisterMetaDataEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWLISTENER_UNREGISTERMETADATAEVENTS_OFFSET))(this);
		}

		::System::Void UnregisterMetaDataEvents_1(::System::Boolean updateListeners)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWLISTENER_UNREGISTERMETADATAEVENTS_1_OFFSET))(this, updateListeners);
		}

		::System::Void RegisterListChangedEvent(::System::Data::Index* index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::Index*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWLISTENER_REGISTERLISTCHANGEDEVENT_OFFSET))(this, index);
		}

		::System::Void UnregisterListChangedEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWLISTENER_UNREGISTERLISTCHANGEDEVENT_OFFSET))(this);
		}

		::System::Void CleanUp(::System::Boolean updateListeners)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWLISTENER_CLEANUP_OFFSET))(this, updateListeners);
		}

		::System::Void RegisterListener(::System::Data::DataTable* table)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWLISTENER_REGISTERLISTENER_OFFSET))(this, table);
		}
	};
}
