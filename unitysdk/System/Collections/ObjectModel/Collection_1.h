#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

namespace System::Collections::ObjectModel
{
	inline static constexpr unsigned int Collection_1_TypeDefinitionIndex = 1498;

	template <typename T>
	class Collection_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<T>* items; // 0x0
		::System::Object* _syncRoot; // 0x0
	};
}
