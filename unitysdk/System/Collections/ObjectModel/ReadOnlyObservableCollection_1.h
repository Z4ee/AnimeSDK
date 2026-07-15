#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/ObjectModel/ReadOnlyCollection_1.h"

namespace System { class Object; }
namespace System::Collections::ObjectModel { template <typename T> class ObservableCollection_1; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventHandler; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventHandler; }

namespace System::Collections::ObjectModel
{
	inline static constexpr unsigned int ReadOnlyObservableCollection_1_TypeDefinitionIndex = 3003;

	template <typename T>
	class ReadOnlyObservableCollection_1 : public ::System::Collections::ObjectModel::ReadOnlyCollection_1<T>
	{
	public:
		::System::Collections::Specialized::NotifyCollectionChangedEventHandler* CollectionChanged; // 0x0
		::System::ComponentModel::PropertyChangedEventHandler* PropertyChanged; // 0x0
	};
}
