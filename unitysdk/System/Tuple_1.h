#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IComparer; }
namespace System::Collections { class IEqualityComparer; }
namespace System::Text { class StringBuilder; }

namespace System
{
	inline static constexpr unsigned int Tuple_1_TypeDefinitionIndex = 144;

	template <typename T1>
	class Tuple_1 : public ::System::Object
	{
	public:
		T1 m_Item1; // 0x0
	};
}
