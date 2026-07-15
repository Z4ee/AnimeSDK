#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int ReadOnlyCollectionBuilder_1_TypeDefinitionIndex = 3661;

	template <typename T>
	class ReadOnlyCollectionBuilder_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* _items; // 0x0
		::System::Int32 _size; // 0x0
		::System::Int32 _version; // 0x0
	};
}
