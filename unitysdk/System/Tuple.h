#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Tuple_5; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Tuple_4; }
namespace System { template <typename T1, typename T2, typename T3> class Tuple_3; }
namespace System { template <typename T1, typename T2> class Tuple_2; }

#define SYSTEM_TUPLE_COMBINEHASHCODES_1_OFFSET UNITYSDK_OFFSET(0x19EE09D0)
#define SYSTEM_TUPLE_COMBINEHASHCODES_2_OFFSET UNITYSDK_OFFSET(0x19EE09F0)
#define SYSTEM_TUPLE_COMBINEHASHCODES_3_OFFSET UNITYSDK_OFFSET(0x19EE0A20)
#define SYSTEM_TUPLE_COMBINEHASHCODES_4_OFFSET UNITYSDK_OFFSET(0x19EE0A50)
#define SYSTEM_TUPLE_COMBINEHASHCODES_5_OFFSET UNITYSDK_OFFSET(0x19EE0A90)
#define SYSTEM_TUPLE_COMBINEHASHCODES_6_OFFSET UNITYSDK_OFFSET(0x19EE0AE0)
#define SYSTEM_TUPLE_COMBINEHASHCODES_OFFSET UNITYSDK_OFFSET(0x19EE09C0)

namespace System
{
	inline static constexpr unsigned int Tuple_TypeDefinitionIndex = 133;

	class Tuple : public ::System::Object
	{
	public:
		static ::System::Int32 CombineHashCodes(::System::Int32 h1, ::System::Int32 h2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TUPLE_COMBINEHASHCODES_OFFSET))(h1, h2);
		}

		static ::System::Int32 CombineHashCodes_1(::System::Int32 h1, ::System::Int32 h2, ::System::Int32 h3)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TUPLE_COMBINEHASHCODES_1_OFFSET))(h1, h2, h3);
		}

		static ::System::Int32 CombineHashCodes_2(::System::Int32 h1, ::System::Int32 h2, ::System::Int32 h3, ::System::Int32 h4)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TUPLE_COMBINEHASHCODES_2_OFFSET))(h1, h2, h3, h4);
		}

		static ::System::Int32 CombineHashCodes_3(::System::Int32 h1, ::System::Int32 h2, ::System::Int32 h3, ::System::Int32 h4, ::System::Int32 h5)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TUPLE_COMBINEHASHCODES_3_OFFSET))(h1, h2, h3, h4, h5);
		}

		static ::System::Int32 CombineHashCodes_4(::System::Int32 h1, ::System::Int32 h2, ::System::Int32 h3, ::System::Int32 h4, ::System::Int32 h5, ::System::Int32 h6)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TUPLE_COMBINEHASHCODES_4_OFFSET))(h1, h2, h3, h4, h5, h6);
		}

		static ::System::Int32 CombineHashCodes_5(::System::Int32 h1, ::System::Int32 h2, ::System::Int32 h3, ::System::Int32 h4, ::System::Int32 h5, ::System::Int32 h6, ::System::Int32 h7)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TUPLE_COMBINEHASHCODES_5_OFFSET))(h1, h2, h3, h4, h5, h6, h7);
		}

		static ::System::Int32 CombineHashCodes_6(::System::Int32 h1, ::System::Int32 h2, ::System::Int32 h3, ::System::Int32 h4, ::System::Int32 h5, ::System::Int32 h6, ::System::Int32 h7, ::System::Int32 h8)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TUPLE_COMBINEHASHCODES_6_OFFSET))(h1, h2, h3, h4, h5, h6, h7, h8);
		}
	};
}
