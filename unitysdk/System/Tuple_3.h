#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IComparer; }
namespace System::Collections { class IEqualityComparer; }
namespace System::Text { class StringBuilder; }

namespace System
{
	inline static constexpr unsigned int Tuple_3_TypeDefinitionIndex = 145;

	template <typename T1, typename T2, typename T3>
	class Tuple_3 : public ::System::Object
	{
	public:
		T1 m_Item1; // 0x0
		T2 m_Item2; // 0x0
		T3 m_Item3; // 0x0
	};
}
