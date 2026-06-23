#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/ObjectModel/Collection_1.h"
#include "unitysdk/System/ComponentModel/ListChangedType.h"
#include "unitysdk/System/ComponentModel/ListSortDirection.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::ComponentModel { class AddingNewEventArgs; }
namespace System::ComponentModel { class AddingNewEventHandler; }
namespace System::ComponentModel { class ListChangedEventArgs; }
namespace System::ComponentModel { class ListChangedEventHandler; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventHandler; }
namespace System::ComponentModel { class PropertyDescriptor; }
namespace System::ComponentModel { class PropertyDescriptorCollection; }

namespace System::ComponentModel
{
	inline static constexpr unsigned int BindingList_1_TypeDefinitionIndex = 2824;

	template <typename T>
	class BindingList_1 : public ::System::Collections::ObjectModel::Collection_1<T>
	{
	public:
		::System::Int32 addNewPos; // 0x0
		::System::Boolean raiseListChangedEvents; // 0x0
		::System::Boolean raiseItemChangedEvents; // 0x0
		::System::ComponentModel::PropertyDescriptorCollection* itemTypeProperties; // 0x0
		::System::ComponentModel::PropertyChangedEventHandler* propertyChangedEventHandler; // 0x0
		::System::ComponentModel::AddingNewEventHandler* onAddingNew; // 0x0
		::System::ComponentModel::ListChangedEventHandler* onListChanged; // 0x0
		::System::Int32 lastChangeIndex; // 0x0
		::System::Boolean allowNew; // 0x0
		::System::Boolean allowEdit; // 0x0
		::System::Boolean allowRemove; // 0x0
		::System::Boolean userSetAllowNew; // 0x0
	};
}
