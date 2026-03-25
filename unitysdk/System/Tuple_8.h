#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IComparer; }
namespace System::Collections { class IEqualityComparer; }
namespace System::Text { class StringBuilder; }

namespace System
{
	inline static constexpr unsigned int Tuple_8_TypeDefinitionIndex = 151;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
	class Tuple_8 : public ::System::Object
	{
	public:
		T1 m_Item1; // 0x0
		T2 m_Item2; // 0x0
		T3 m_Item3; // 0x0
		T4 m_Item4; // 0x0
		T5 m_Item5; // 0x0
		T6 m_Item6; // 0x0
		T7 m_Item7; // 0x0
		TRest m_Rest; // 0x0
	};
}
