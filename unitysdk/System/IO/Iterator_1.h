#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::IO { template <typename T> class Iterator_1; }

namespace System::IO
{
	inline static constexpr unsigned int Iterator_1_TypeDefinitionIndex = 673;

	template <typename TSource>
	class Iterator_1 : public ::System::Object
	{
	public:
		::System::Int32 threadId; // 0x0
		::System::Int32 state; // 0x0
		TSource current; // 0x0
	};
}
