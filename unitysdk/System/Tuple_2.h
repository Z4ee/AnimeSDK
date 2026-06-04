#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IComparer; }
namespace System::Collections { class IEqualityComparer; }
namespace System::Text { class StringBuilder; }

namespace System
{
	inline static constexpr unsigned int Tuple_2_TypeDefinitionIndex = 144;

	template <typename T1, typename T2>
	class Tuple_2 : public ::System::Object
	{
	public:
		T1 m_Item1; // 0x0
		T2 m_Item2; // 0x0
	};
}
