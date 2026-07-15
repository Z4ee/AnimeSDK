#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/ObjectModel/Collection_1.h"
#include "unitysdk/System/Collections/Specialized/NotifyCollectionChangedAction.h"

namespace System { class IDisposable; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::ObjectModel { template <typename T> class ObservableCollection_1_SimpleMonitor; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventHandler; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventHandler; }

namespace System::Collections::ObjectModel
{
	inline static constexpr unsigned int ObservableCollection_1_TypeDefinitionIndex = 3001;

	template <typename T>
	class ObservableCollection_1 : public ::System::Collections::ObjectModel::Collection_1<T>
	{
	public:
		::System::Collections::Specialized::NotifyCollectionChangedEventHandler* CollectionChanged; // 0x0
		::System::ComponentModel::PropertyChangedEventHandler* PropertyChanged; // 0x0
		::System::Collections::ObjectModel::ObservableCollection_1_SimpleMonitor<T>* _monitor; // 0x0
	};
}
