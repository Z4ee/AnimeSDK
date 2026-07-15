#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

namespace System::Collections::ObjectModel
{
	inline static constexpr unsigned int ReadOnlyCollection_1_TypeDefinitionIndex = 1500;

	template <typename T>
	class ReadOnlyCollection_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<T>* list; // 0x0
		::System::Object* _syncRoot; // 0x0
	};
}
