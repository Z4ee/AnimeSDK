#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine::Rendering { template <typename T> class ListChangedEventHandler_1; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ObservableList_1_TypeDefinitionIndex = 34074;

	template <typename T>
	class ObservableList_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<T>* m_List; // 0x0
		::UnityEngine::Rendering::ListChangedEventHandler_1<T>* ItemAdded; // 0x0
		::UnityEngine::Rendering::ListChangedEventHandler_1<T>* ItemRemoved; // 0x0
	};
}
